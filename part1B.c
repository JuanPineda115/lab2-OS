/*---------------------------------------------------------------------------
* UNIVERSIDAD DEL VALLE DE GUATEMALA
* DEPARTAMENTO DE CIENCIA DE LA COMPUTACIÓN
* Curso: Sistemas Operativos
* Laboratorio 2
* Descripción: Creacion de forks en un for
------------------------------------------------------------------------------*/
#include <stdio.h>
#include <sys/types.h>
int main()
{
for (i = 0; i < 4; i++)
    fork();
    printf("hello\n");
    return 0;
}