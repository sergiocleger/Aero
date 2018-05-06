//Precisa imprimir o conteúdo como uma Fila, você está fazendo como se fosse uma lista
void imprimir_Fila(aviao **inicio, aviao **fim){
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

}
