#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i = 10,j = 12;
	
	int resultado = (i | j);
	
	printf("\n\n Resultado = %d",resultado);
	return 0;
	
}
