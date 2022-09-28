#include <stdio.h>

/*Usando a estrutura "enum" podemos basicamente criar um index de variaveis constantes
no exemplo abaixo eh como se dias da semana[6] = segunda,	tercah,	quarta,	quinta,	sexta,	sabado,	domingo, onde cada um fosse enumerado 
por 0 = segunda, 1 = terça e assim em diante.
*/
enum dias_da_semana{
	segunda,
	tercah,
	quarta,
	quinta,
	sexta,
	sabado,
	domingo
};

int main()
{
	//Chamando a estrurura enum e criando variaveis para cada dia da semana atribuindo a suas constantes
	enum dias_da_semana d1,d2,d3,d4,d5,d6,d7;
	
    printf("Antes da atribuicao direta:\n");
	if(d1 == d2)
	{
		printf("Os dias sao iguais\n!!");
	}
	else 
	{
		printf("Os dias nao sao iguais!!\n");

	}
	//Atribuindo o valor de uma variavel de maneira direta com qualquer outra variavel que esteja dentro da enum
	d2 = segunda;
	
	printf("Depois da atribuicao direta :\n");
	if(d1 == d2)
	{
		printf("Os dias sao iguais!!");
	}
	else 
	{
		printf("Os dias nao sao iguais!!");

	}
}
