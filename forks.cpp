/*---------------------------------------------------------------------------
* UNIVERSIDAD DEL VALLE DE GUATEMALA
* DEPARTAMENTO DE CIENCIA DE LA COMPUTACIÓN
* Curso: Sistemas Operativos
* Laboratorio 2
* Descripción: Creacion de 4 forks
------------------------------------------------------------------------------*/
#include <iostream>
#include <sys/wait.h>
#include <unistd.h>

using std::cout; using std::endl;

int main() {
    pid_t num_pid, root_pid;				
	num_pid = fork();
    fork()
    fork()
    fork()
	root_pid = getpid();
	int status = 0; 

    if (num_pid == -1) {
        perror("fork not created");
        exit(EXIT_FAILURE);
    } 
	else if (num_pid > 0) {
        cout << "I'm Parent Num. Process: " << getpid() << endl;
		wait(&status);
		
		if(root_pid==getpid()); {
			printf("Total processes (parent + child): %d \n", WEXITSTATUS(status)+1);
			exit(0);
		}
    } 
	
	else {
		cout << "Child process Num. " << getpid() << endl;
		exit(WEXITSTATUS(status)+1);
    }

    return EXIT_SUCCESS;
}