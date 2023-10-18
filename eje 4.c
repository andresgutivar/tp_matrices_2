#include <stdio.h>
#include <stdlib.h>
void array (int matriz[3][3])
{
	int vector[9],k=0,aux=0,i=0,j=0;
	for( i=0;i<3;i++)
	{
		for( j=0;j<3;j++)
		{
			vector[k]=matriz[i][j];
			k++;
		}
	}
	printf("------matriz ordenada en una arrays:------\n\n");
	for( i=0;i<9;i++)
	{
		printf("%d  ",vector[i]);
	}
	
	//vamos a ordenar la arrays de menor a mayor
	for ( i = 0; i <9; i++) {
		for ( j = 0; j <10; j++) {
			
			if (vector[j] > vector[j+1])
			{
				aux=vector[j+1];
				vector[j+1]=vector[j];
				vector[j]=aux;
			}
		}
	}
	
	printf("\n\n------array ordenada de menor a mayor:------\n\n");
	for( i=0;i<9;i++)
	{
		printf("%d  ",vector[i]);
	}
	
	//aca vamor a colocar la array ya ordenada en la matriz
	k=0;
	for( i=0;i<3;i++)
	{
		for( j=0;j<3;j++)
		{
			matriz[i][j]=vector[k];
			k++;
		}
	}
	//aca vamor a colocar la array ordenada en la matriz
	printf("\n--------matriz odenada de menor a mayor mostrada por filas:--------\n\n");
	
	for( i=0;i<3;i++)
	{
		printf("-----fila %d-----\n",i+1);
		for( j=0;j<3;j++)
		{
			printf("columna %d ",j+1);
			printf("\t\tvalor %d \n",matriz[i][j]);
		}
	}
	
}


int main() {
	int matriz[3][3]={0},k=1,i=0,j=0;
	
	for( i=0;i<3;i++)
	{
		for( j=0;j<3;j++)
		{
			printf("ingrese el valor #%d: ",k);
			scanf("%d",& matriz[i][j]);
			k++;
		}
	}
	system("cls");
	
	printf("--------matriz original mostrada por filas:--------\n\n");
	
	for(i=0;i<3;i++)
	{
		printf("-----fila %d-----\n",i+1);
		for(j=0;j<3;j++)
		{
			printf("columna %d ",j+1);
			printf("\t\tvalor %d \n",matriz[i][j]);
		}
	}
	
	array(matriz);
	

	
	

	
	
	return 0;
}

