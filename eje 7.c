#include <stdio.h>
#include <stdlib.h>

int main() {
	float clientes[100][6]={0},monto=0,deposito_max=0;
	int op=0,opcion=0,cliente_max=0;
	
	
	for(int i=0;i<100;i++)
	{
			
			printf("ingrese numero de cliente: ");
			scanf("%f",&clientes[i][0]);
			
			do {
			printf("ingrese numero de transaccion\n1: deposito\n2: extraccion\n3: comiciones deducidas\n4: intereses acreditados\nELECCION:  ");
			scanf("%d",&op);
			while(op>4 || op<1)
			{
				printf("------ERROR------\nELIGA UNA OPCION VALIDA:\n1: deposito\n2: extraccion\n3: comiciones deducidas\n4: intereses acreditados\nELECCION:  ");
				scanf("%d",&op);
			}
			
			printf("ingrese monto de la operacion: ");
			scanf("%f",&monto);
			
			switch(op)
			{
				case 1:{
						clientes[i][1]+=monto;
						break;	
						}
				case 2:{
						clientes[i][2]+=monto;
						break;	
						}
				case 3:{
						clientes[i][3]+=monto;
						break;	
						}
				case 4:{
						clientes[i][4]+=monto;
						break;	
						}
			}
			
			printf("desea realizar otra transaccion? (1=SI  2=NO): ");
			scanf("%d",&opcion);
			while(opcion>2 || opcion<1)
			{
				printf("------ERROR------\nELIGA UNA OPCION VALIDA\ndesea realizar otra transaccion? (1=SI  2=NO): ");
				scanf("%d",&opcion);
			}
			if(opcion==2)
			{
				clientes[i][5]=clientes[i][1]-clientes[i][2]+clientes[i][3]+clientes[i][4];
				
				if(clientes[i][1]>deposito_max)
				{
					deposito_max=clientes[i][1];
					cliente_max=clientes[i][0];
				}
				
			}
			}
			while(opcion==1);
	}
	
	
	printf("\n\n------------------------------------------------------\n\n");
	
	for(int i=0;i<100;i++)
	{
		printf("\nnumero de cliente: %.0f\ndeposito: %.2f\nextraccion: %.2f\ncomiciones deducidas: %.2f\nintereses acreditados: %.2f\nSALDO TOTAL: %.2f\n\n",clientes[i][0],clientes[i][1],clientes[i][2],clientes[i][3],clientes[i][4],clientes[i][5]);
	}
	
	printf("\n----------------------------\nEl cliente numero #%d es el que tiene el mayor deposito registrado con un total de: %.2f$\n------------------------------",cliente_max,deposito_max);
	
	return 0;
}

