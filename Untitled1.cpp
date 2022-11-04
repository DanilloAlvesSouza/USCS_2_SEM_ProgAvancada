#include<stdio.h>

struct cadastro {
	char nome[30];
	int idade;
	char rua[30];
	int numero;
};

void imprimeCadastro (struct cadastro c)
{
	printf("Nome: %s Idade: %d Rua: %s Numero: %d \n", c.nome, c.idade, c.rua, c.numero);
}

int main(){
	float nota1,nota2, nota3;
	float media;
	
	scanf("%f",&nota1);
	printf("%f",nota1);
	scanf("%f",&nota2);
	scanf("%f",&nota3);
	
	
	media =(nota1*4)+(nota2*4)+(nota3*4)/(4+4+4);
	
	printf("%f",media);
	
	
}

