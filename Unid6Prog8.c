#include<stdio.h>

int main(){
	int i = 7,j = 7;
	double x= 0.0, y = 999.9;
	
	int resultado;
	
	resultado = !(x + 3.3) + !!y + !!!i + 55;
	
	printf("\n\n Resultado = %d",resultado);
	return 0;
	
}
