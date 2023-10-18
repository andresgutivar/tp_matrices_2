#include <stdio.h>
#include <stdlib.h>
void repetido(int *repetidos,int sorteo[3][6])
{
	int p=0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 6; j++) {
			for (int m = i + 1; m < 3; m++) {
				for (int n = 0; n < 6; n++) {
					if (sorteo[i][j] == sorteo[m][n]) {
						repetidos[p] = sorteo[i][j];
						p++;
					}
				}
			}
		}
	}
	
	for(int i = 0; i < p; i++) {
		for(int j = i + 1; j < p; j++) {
			if (repetidos[i] == repetidos[j]) {
				repetidos[j] = 0;
			}
		}
	}
	
	printf("\nNUMEROS REPETIDOS:\n\n");
	
	for (int i = 0; i < p; i++) {
		if (repetidos[i] != 0) {
			printf("Número: %d\n", repetidos[i]);
		}
	}
	
	
}

void repetidon(int sorteo[3][6],int n)
{
	int rep=0;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<6;j++)
		{
			if(n==sorteo[i][j])
			{
				rep++;
			}
		}
	}
	
	printf("\n\nTu numero N se repite %d veces en los tres sorteos\n\n",rep);
}

void ordenar(int sorteo[3][6])
{
	int aux=0;
	for(int k=0;k<3;k++)
	{
	for ( int i = 1; i <6; i++) {
		for ( int j = 0; j <6-1; j++) {
			
			if (sorteo[k][j] > sorteo[k][j+1])
			{
				aux=sorteo[k][j];
				sorteo[k][j]=sorteo[k][j+1];
				sorteo[k][j+1]=aux;
			}
		}
	}
	}
	printf("--------sorteo ordenado por numeros:--------\n\n");
	
	for(int i=0;i<3;i++)
	{
		printf("-----sorteo %d-----\n",i+1);
		for(int j=0;j<6;j++)
		{
			printf("numero #%d ",j+1);
			printf("\t\tvalor %d \n",sorteo[i][j]);
		}
	}
}
int main() {
	int sorteo[3][6]={0};
	int k=1,num=0,repetidos[18]={0},n=0;
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 6; j++) {
			printf("Ingrese los números sorteados (0-42) del sorteo #%d: ", k);
			scanf("%d", &num);
			
			while (num < 0 || num > 42) {
				printf("\t-----ERROR (el numero supera el limite)-----\nIngrese los números sorteados (0-42) del sorteo #%d: ", k);
				scanf("%d",&num);
			}
			
			for (int x=0;x<j;x++) {
				while (num == sorteo[i][x]) {
					printf("\t-----ERROR (no se pueden repetir los mismos números dentro del mismo sorteo)-----\nIngrese los números sorteados (0-42) del sorteo #%d: ", k);
					scanf("%d", &num);
					x=0;
				}
			}
			sorteo[i][j] = num;
		}
		k++;
	}
	
	printf("--------sorteo mostrada por numeros ingresados:--------\n\n");
	
	for(int i=0;i<3;i++)
	{
		printf("-----sorteo %d-----\n",i+1);
		for(int j=0;j<6;j++)
		{
			printf("numero #%d ",j+1);
			printf("\t\tvalor %d \n",sorteo[i][j]);
		}
	}
	printf("ingrese el numero N: ");
	scanf("%d",&n);
	repetidon(sorteo,n);
	repetido(repetidos,sorteo);
	ordenar(sorteo);
	return 0;
}
