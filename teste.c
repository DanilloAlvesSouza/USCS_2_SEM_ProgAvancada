/* unidade 6 - programa 07*/
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int i= 7, j = 7;
	double x = 0, y = 999.9;
	int resultado;
	resultado = !!i- !j + 10;
	
	printf("\n\n resultado = %d", resultado);
	
	return 0;
}
