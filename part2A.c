#include <stdio.h>
#include <time.h>

int main()
{
	clock_t tiempo1,tiempo2;
	int i;
	tiempo1=clock();
	for (i=0;i<1000000;i++){printf("Indice 1 for: %d \n",i);}
	for (i=0;i<1000000;i++){printf("Indice 2 for: %d \n",i);}
	for (i=0;i<1000000;i++){printf("Indice 3 for: %d \n",i);}
	tiempo2=clock();
	double tiempoTotal;
	tiempoTotal=(double)(tiempo2-tiempo1)/ CLOCKS_PER_SEC;
	printf("El tiempo total es de: %f s\n",tiempoTotal);
	return 0;
	
}