#include <stdio.h>
#include <time.h>

int main()
{
	pid_t padre, hijo, nieto;
	clock_t tiempo1,tiempo2;
	int i;
	tiempo1=clock();
	padre=fork();
	if(padre==0)
	{
		hijo=fork();
		if(hijo==0)
		{
			nieto=fork();
			if (nieto==0)
			{
				for (i=0;i<1000000;i++){printf("Indice bisnieto for: %d \n",i);}
			}
			else
			{
				for (i=0;i<1000000;i++){printf("Indice nieto for: %d \n",i);}
				wait(NULL);	
			}
			
		}
		else
		{
			for (i=0;i<1000000;i++){printf("Indice hijo for: %d \n",i);}
			wait(NULL);	
		}
	}
	else
	{
		for (i=0;i<1000000;i++){printf("Indice padre for: %d \n",i);}
		wait(NULL);
		tiempo2 = clock();
		double tiempoTotal;
		tiempoTotal=(double)(tiempo2-tiempo1)/ CLOCKS_PER_SEC;
		printf("El tiempo total es de: %f s\n",tiempoTotal);
	
	}
	return 0;
	
}