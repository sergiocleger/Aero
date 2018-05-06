#include "fila.h"
#include "lista.h"

aviao *inserir(aviao **inicio, aviao **fim, aviao *novo){

}

aviao *remover(aviao **inicio){

}

void *contar(aviao **inicio, aviao **fim){

}

void *imprimir(aviao **inicio, aviao **fim){
    int i=1;
    aviao *aux;
    aux = *inicio;

    do{
      printf("Aviao N%d\n",i);
      printf("codigo - %s \n",(aux)->codigo);
      printf("capitao - %s \n",(aux)->capitao);
    //	printf("Destino - %s \n",(aux)->destino);
      printf("numero de passageiros - %d \n\n\n",(aux)->numero_p);
      (aux)=(aux)->prox;
      i++;
    }while(aux != NULL);
}//matheus

void *consultar_cabeca(aviao **inicio){

}

void *quantidadeDePessoas(aviao **inicio, aviao **fim){

}

void imprime_dado_voo(aviao **inicio, aviao **fim){

} //HENRIQUE
