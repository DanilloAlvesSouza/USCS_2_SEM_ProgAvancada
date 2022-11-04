#include <stdio.h>

typedef struct
{
	float peso;
	int idade;
	float altura;
} Pessoa;

void imprimePessoa (Pessoa P)
{
	printf("idade: %d Peso: %f Altura: %f\n",P.idade, P.peso, P.altura);
}

int main(){
	Pessoa Joao, P2;
	Pessoa povo[10];
	
	Joao.idade = 15;
	Joao.peso = 60.5;
	Joao.altura = 1.75;
	
	povo[4].idade = 23;
	povo[4].peso = 75.3;
	povo[4].altura = 1.89;
	
	P2 = povo[4];
	P2.idade++;
	
	imprimePessoa(Joao);
	imprimePessoa(povo[4]);
	imprimePessoa(P2);
}

