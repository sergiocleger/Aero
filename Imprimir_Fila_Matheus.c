void imprimir(aviao **inicio,aviao **fim){
	aviao **aux;
	
	*aux = *inicio;
	
	while(*aux != *fim){
		printf("codigo - %s \n",(*aux)->codigo);
		printf("capitao - %s \n",(*aux)->capitao);
		printf("Destino - %s \n",(*aux)->destino);
		printf("numero de passageiros - %d \n\n\n",(*aux)->numero_p);
	
		(*aux)=(*aux)->prox;
	}
	
}
