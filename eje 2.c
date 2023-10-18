#include <stdio.h>
#include <stdlib.h>

int main() {
	int matriz[3][3]={0},k=0;
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
		printf("ingrese el valor %d: ",k+1);
		scanf("%d",& matriz[i][j]);
		k++;
		}
	}
	
	printf("--------matriz mostrada por columnas pares:--------\n\n");
	
	for(int j=0;j<3;j++)
	{
		k=j+1;
		if(k%2==0)
		{
		printf("-----columna %d-----\n",j+1);
		for( int i=0;i<3;i++)
		{
			printf("fila %d ",i+1);
			printf("\t\tvalor %d \n",matriz[i][j]);
		}
		}
	}
	
	printf("\n\n--------matriz mostrada por columnas impares:--------\n\n");
	
	for(int j=0;j<3;j++)
	{
		k=j+1;
		if(k%2!=0)
		{
			printf("-----columna %d-----\n",j+1);
			for( int i=0;i<3;i++)
			{
				printf("fila %d ",i+1);
				printf("\t\tvalor %d \n",matriz[i][j]);
			}
		}
	}
	return 0;
}

