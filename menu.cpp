#include<stdio.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


void menu(){
	printf("*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=* MENU DE OPCOES: *=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*\n\n\n");
	printf("\t  (1) - Inserir entrada de um novo aviao no aeroporto\n\n");
	printf("\t  (2)- Checar lista de todos avioes no aeroporto\n\n" );
	printf("\t  (3) - Adicionar aviao na pista de decolagem\n\n");
	printf("\t  (4) - Remover aviao da pista de decolagem\n\n");
	printf("\t  (5) - Verificar quantidade de avioes na pista\n\n");
	printf("\t  (6) - Imprimir informacoes dos avioes na pista\n\n");
	printf("\t  (7) - Consultar proxima decolagem\n\n");
	printf("\t  (8) - Total de passageiros na pista de decolagem\n\n");
	printf("\t  (9) - Sair\n\n");
}


 int main(){
 
 int op;
 
 	menu();
 	printf("Escolha uma opcao:\n");
 	scanf("%d",&op);
 do{
 
 	switch(op){
 		case 1:
 			
			 printf("\n\n");	
 		break;
 		case 2:
 			
 			printf("\n\n");
 		break;
 		case 3:
 			
 			printf("\n\n");
 		break;
 		case 4:
 			
 			printf("\n\n");
 		break;
 		case 5:
 			
 			printf("\n\n");
 		break;
 		case 6:
 			
 			printf("\n\n");
 		break;
 		case 7:
 			
 			printf("\n\n");
 		break;
 		case 8:
 			
 			printf("\n\n");
 		break;
 	}
 	menu();
 	printf("Escolha uma opcao:\n");
 	scanf("%d",&op);
 
}while(op!=9);
 }



