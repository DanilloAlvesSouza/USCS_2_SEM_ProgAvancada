//Prog 01 - Unidade 7
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n*********************");
	printf("\nInicio de Programa 02\n");
	
	int vetor[11], i;
	
	for(i=1;i<11; i++) {
		printf("Entre com um valor inteiro na posição:%d\n",i);
		scanf("%d",&vetor[i]);
	}
	
	for (i=1;i<11;i++) {
		printf("Numeros entrados:%d\n",vetor[i]);
	}
	
}
