/* unidade 6 - programa 06*/
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int i= 7, j = 7,k=100;
	double x = 0, y = 999.9;
	int resultado;
	resultado = !i- j + k;
	
	printf("\n\n resultado = %d", resultado);
	
	return 0;
}
