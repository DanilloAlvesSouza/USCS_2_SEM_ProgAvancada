/* unidade 6 - programa 10*/
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i=1,j=3,k=9;
	double x=0.0,y=2.3;
	int resultado = (i&&y) && k;

	printf("\n\nresultado = %d",resultado);
	if (resultado){
		printf("\n\nA expressão é avaliada é como true...\n\n");
	}
	else
	
		printf("\n\nA expresão é avalida como false");
	
	return 0;
}
