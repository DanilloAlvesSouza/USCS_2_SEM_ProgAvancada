/*EX 14º PAGINA16*/
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int resultadoFinal = 0, i = 0;
	
	while(resultadoFinal<=999){
	printf("Entre com um numero inteiro que será somado: \n");
	scanf("%d",&i);
	printf("\nValor entrado: %d", i);
	resultadoFinal = resultadoFinal + i;
	printf("\nA soma dos valores registrados: %d\n", resultadoFinal);
		
	}
	printf("\n\nLopping encerado, valores registrados somados ultrapassaram de 999");
	printf("\nA soma final dos valores registrados: %d", resultadoFinal);	
}
