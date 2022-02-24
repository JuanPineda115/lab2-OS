/*---------------------------------------------------------------------------
* UNIVERSIDAD DEL VALLE DE GUATEMALA
* DEPARTAMENTO DE CIENCIA DE LA COMPUTACIÓN
* Curso: Sistemas Operativos
* Laboratorio 2
* Descripción: Creacion de 4 forks
------------------------------------------------------------------------------*/
#include <stdio.h>
#include <sys/types.h>
int main()
{
    fork();
    fork();
    fork();
    fork();
    printf("hello\n");
    return 0;
}