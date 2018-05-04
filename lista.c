#include "lista.h"
#include "fila.h"

void insere(aviao **inicio,char codigo[7],int numero_p, char capitao[20]){

}//CESAR

aviao* criar_aviao(char codigo[7],int numero_p, char capitao[20]){

}//JOAO

void check_lista(aviao **aviao, char codigo[7]){
    aviao *aux = (*inicio);
    int booleano = 0;

    while(aux != NULL){
        if(strcmp(aux->codigo, codigo) == 0){
            remover(codigo);
            booleano = 1;
        }
    }
    if(booleano == 0){
        printf("CODIGO NÃO ENCONTRADO!\n");
    }
}//JOAO C

aviao* remove_vooLista(aviao **inicio,char codigo[7]){

}//EMANUEL

aviao* Total_passageiros(aviao **inicio){

}// Artur

aviao* Total_passageiros_lista(aviao **inicio){

}//Orlando

void cabecario();//cabecario de cada tela;

void op();
