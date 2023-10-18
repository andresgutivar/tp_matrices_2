#include <stdio.h>
#include <stdlib.h>
void diagonal (int matriz[5][5])
{
	int k=1;
	printf("valores de la diagonal principal de la matriz\n");
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(i==j)
			{
				printf("ingrese la diagonal %d: ",k);
				scanf("%d",& matriz[i][j]);
				k++;
			}
			
		}
}
}
void superior(int matriz[5][5])
{
	int k=1;
	printf("\n\nvalores del triangulo superior de la matriz\n");
	
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(i>j)
			{
				printf("ingrese el valor del triagulo superior de la matriz: ");
				scanf("%d",& matriz[i][j]);
				k++;
			}
			
		}
		
	}
}
void inferior(int matriz[5][5])
{
	int k=1;
	printf("\n\nvalores del triangulo inferior de la matriz\n");
	
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(i<j)
			{
				printf("ingrese el valor del triagulo inferior de la matriz: ");
				scanf("%d",& matriz[i][j]);
				k++;
			}
			
		}
		
	}
}
int main() {
	int matriz[5][5]={0};

	diagonal(matriz);
	superior(matriz);
	inferior(matriz);
	
	
	printf("--------CONTENIDO DE LA MATRIZ:--------\n\n");
	
	for(int i=0;i<5;i++)
	{
		printf("-----fila %d-----\n",i+1);
		for(int j=0;j<5;j++)
		{
			printf("columna %d ",j+1);
			printf("\t\tvalor %d \n",matriz[i][j]);
		}
	}
	

	
	
	return 0;
}

