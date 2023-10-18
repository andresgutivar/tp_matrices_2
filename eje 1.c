#include <stdio.h>
#include <stdlib.h>

int main() {
	int matriz[6][5]={0},fila=1,columna=0,valor=0;
	
	
	while(fila!=0)
	{
		printf("ingrese fila (1-6): ");
		scanf("%d",&fila);
		printf("ingrese columna (1-5): ");
		scanf("%d",&columna);
		printf("ingrese valor a cargar en esa posicion: ");
		scanf("%d",&valor);
		matriz[fila-1][columna-1]=valor;
	}
	
	printf("--------matriz mostrada por filas:--------\n\n");
	
	for(int i=0;i<6;i++)
	{
		printf("-----fila %d-----\n",i+1);
		for(int j=0;j<5;j++)
		{
			printf("columna %d ",j+1);
			printf("\t\tvalor %d \n",matriz[i][j]);
		}
	}
	
	printf("--------matriz mostrada por columnas:--------\n\n");
	
	for(int j=0;j<5;j++)
	{
		printf("-----columna %d-----\n",j+1);
		for( int i=0;i<5;i++)
		{
			printf("fila %d ",i+1);
			printf("\t\tvalor %d \n",matriz[i][j]);
		}
	}
	return 0;
}

