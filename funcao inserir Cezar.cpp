#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>
#include<string.h>

typedef struct nodo{
	char codigo[7];
	char destino[11];
	int numero_p;
	char capitao[11];
	struct nodo *prox;
}aviao;

aviao* criar_aviao(char codigo[7], char capitao[11], int numero_p){
	aviao *p;
	p=(aviao*)malloc(sizeof(aviao));
	fflush(stdin);
	strcpy(p->codigo,codigo);
	strcpy(p->capitao,capitao);
	p->numero_p=numero_p;
	p->prox=NULL;
	return p;
}
void inserir(aviao **lista, char codigo[7], char capitao[11], int numero_p){
	aviao *p, *inicio;
				if((*lista)==NULL){
						p=criar_aviao(codigo,capitao,numero_p);
						(*lista)=inicio=p;
			}else{
						p=criar_aviao(codigo,capitao,numero_p);
						(*lista)->prox=p;
						inicio=p;
				}

}

void imprimir(aviao *lista){
	while(lista!=NULL){
		printf("\n Codigo do Aviao %s \n Nome do Piloto: %s \n N de Passageiros: %d \n\n",lista->codigo,lista->capitao,lista->numero_p);
		lista=lista->prox;
	}
	
}

aviao  *check_list(aviao **lista,char codigo[7]){
	
	aviao *aux,*ant;
	aux=ant=(*lista);
	
	while(aux!=NULL){
		
		ant=aux;
		aux=aux->prox;
		
		if(strcmp(aux->codigo,codigo)==0){
			ant->prox=aux->prox;
			aux->prox=NULL;
			
			return aux;
		}

	}
	
}
   int main(){
   	aviao *lista=NULL;
   	int n_pessoas,op;
   	char codigo[7],destino[11],capitao[11];
   	do{
				printf("\n\nEscolha [1] Inserir Aviao, [2]Mostrar Aviao:  ");
   	scanf("%d",&op);
   	switch(op){
   		case 1:
   			fflush(stdin);
   			printf("\n\nDigite o codigo do aviao: ");
   			gets(codigo);
   			printf("\n\nDigite o nome capitao: ");
   			gets(capitao);
   			printf("\n\nDigite o numero de passageiros: ");
   			scanf("%d",&n_pessoas);
   			inserir(&lista,codigo,capitao,n_pessoas);
   			break;
   			
   		case 2:
   			imprimir(lista);
   			break;
   			
   		case 3:
   			check_list(&lista,codigo);
   	}
}while(op!=0);
	getch();
	return 0;
}

