#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i = 10;
	
	int resultado;
	resultado = i >> 1;
	
	printf("\n\n Resultado = %d",resultado);
	return 0;
	
}
