/*---------------------------------------------------------------------------
* UNIVERSIDAD DEL VALLE DE GUATEMALA
* DEPARTAMENTO DE CIENCIA DE LA COMPUTACIÓN
* Curso: Sistemas Operativos
* Laboratorio 2
* Descripción: Uso de forks dentro de un ciclo for
------------------------------------------------------------------------------*/
#include <iostream>
#include <sys/wait.h>
#include <sys/types.h> 
#include <unistd.h>


int main() 
{ 
    fork(); 
    fork(); 
    //fork(); 
    printf("Hello World!\n"); 
    return 0; 
} 