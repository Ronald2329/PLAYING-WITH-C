#include <stdio.h>
#include <string.h>

/* 
Enunciado: Escreva um programa que receba nomes e digite na tela,
x vezes a quantidade de caracteres e soletre cada caracter isoladamente.
Ex: nome inserido: ABCDEF 
          ABCDEF
          ABCDEF
          ABCDEF
          ABCDEF
          ABCDEF
          ABCDEF
    letras isoladas:
    A
    B
    C
    D
    E
    F
*/


void entrada_dados(char nome[20])
{
	int var;
	
     	printf("Informe seu nome: \n");
    	scanf("%s", nome);
	
    	var = strlen(nome);
    	
    	if(var <= 20)
    	{
    		printf("O nome: \n");
    		for(int i = 0; i < var; i++)
        	{
	        	printf("%s\n", nome);
         	}
         	printf("foi digitado na tela %i vezes pois, o nome %s possui %i caracteres!!\n",var, nome, var);
         	
         		printf("Soletrando o nome %s temos: \n",nome);
         			for(int i = 0; i < var; i++)
                   {
          				printf("%c\n",nome[i]);
                    }
		}
		else
		{
			while(var > 20)
			{
				printf("O nome: %s possui %i caracteres \n", nome, var);
				printf("Por favor, Informe um  nome que tenha ate 20 caracteres!!!: \n");
               	scanf("%s", nome);
            
    	        var = strlen(nome);
    	        
    	        if(var <= 20)
          		{
    				printf("O nome: \n");
    				for(int i = 0; i < var; i++)
        			{
	        			printf("%s\n", nome);
         			}
         			printf("Foi digitado na tela %i vezes pois, o nome %s possui %i caracteres!!\n",var, nome, var);
         			
         			printf("Soletrando o nome %s temos: \n",nome);
         				for(int i = 0; i < var; i++)
                  	 {
          				printf(" {%c}\n",nome[i]);
                   	 }
				}
			}
			
		}  	
}

void validacao_de_resposta(int *resp)
{
    	printf("Deseja continuar? \n");
		printf("Para continuar digite [1]\n");
		printf("Para sair digite [0]: \n");
		scanf("%i", resp);
		
		
		while(*resp != 0 && *resp != 1)
		{
			printf("Deseja continuar? \n");
		    printf("Para continuar digite [1]\n");
	     	printf("Para sair digite [0]: \n");
	    	scanf("%i", resp);
	    	
	    	if(*resp == 0)
	    	{
	    		break;
			}
		}
}
int main()
{
	char nome[20];
	int resp,qnt = 0;
		
	 printf("========================================------JOGO SOLETRANDO------========================================\n\n");	
	 printf("========================================COMEÇO DO JOGO========================================\n");
	do{
		
	   	entrada_dados(&nome);
		
		qnt++;
		if(qnt == 1)
		{
			printf("Ate agora o momento o programa ja foi executado corretamente %i vez !!!\n",qnt);
		}
		else if(qnt > 1)
		{
			printf("Ate agora o momento o programa ja foi executado corretamente %i vezes !!!\n",qnt);
		}	
		
		validacao_de_resposta(&resp);
	}while(resp == 1);
	printf("\n========================================FIM DO JOGO========================================\n");
}