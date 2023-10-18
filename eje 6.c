#include <stdio.h>
#include <stdlib.h>

int main() {
	int personas[10][2]={0};
	int k=1, socio=0, edad=0, aux_socio, aux_edad;
	
	printf("Ingrese datos de las personas (máximo 10), o ingrese 0 en el número de socio para detener:\n");
	
	for (int i=0; i<10;i++) {
		printf("Ingrese número de socio de la persona #%d: ",k);
		scanf("%d",&socio);
		if (socio==0) {
			break;
		}
		personas[i][0]=socio;
		
		printf("Ingrese edad de socio de la persona #%d: ",k);
		scanf("%d", &edad);
		personas[i][1] = edad;
		

		for (int j=i; j>0 && personas[j][1]<personas[j-1][1];j--) {
			aux_socio = personas[j][0];
			aux_edad = personas[j][1];
			personas[j][0] = personas[j - 1][0];
			personas[j][1] = personas[j - 1][1];
			personas[j - 1][0] = aux_socio;
			personas[j - 1][1] = aux_edad;
		}
		
		k++;
	}
	
	printf("-------- Socios ordenados por edad (de menor a mayor) --------\n\n");
	
	for (int i = 0; i < k - 1; i++) {
		printf("Número de socio: %d   Edad: %d\n", personas[i][0], personas[i][1]);
	}
	
	return 0;
}


