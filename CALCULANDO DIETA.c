#include <stdio.h>
/* Autor Ronald
  Objetivo: Estuturar/Organizar pensamento lógico do que seria uma calculadora de calorias  com principais macronuentrientes  
   e montar um modelo de estrategia dietética genérica e replicável.
*/
struct pessoa{
	char nome[20];
	int idade;
	float peso;
	int escolha;
}pessoa;

struct macros{
	float proteina;
	float carboidrato;
	float gordura;
};

struct dieta{
    struct macros macros ;
}dieta;

void pedir_dados()
{
	printf("Informe o seu nome: \n");
	scanf("%s",pessoa.nome);
	
	printf("%s, Informe a sua idade: \n",pessoa.nome);
	scanf("%i",&pessoa.idade);

  if(pessoa.idade >= 0)
  {
    	printf("%s, Informe o seu peso: \n",pessoa.nome);
    	scanf("%f",&pessoa.peso);
        
        if(pessoa.peso >= 0)
        {
            	printf("Por favor, %s escolha uma das opções abaixo: \n: \n",pessoa.nome);
            	printf("Digite [1] para escolher um modelo de dieta voltado ao emagrecimento(Cutting)\n");
            	printf("Digite [2] para escolher um modelo de dieta voltado  para manter(Normacalórica)\n");
            	printf("DIgite [3] para escolher um modelo de dieta para voltado para ganhar massa muscular(Bulking)\n");
            	scanf("%i",&pessoa.escolha);
            	
            	while((pessoa.escolha != 1) && (pessoa.escolha != 2) && (pessoa.escolha != 3))
            	{
            		printf("Por favor, %s escolha uma das opções abaixo: \n: \n",pessoa.nome);
            		printf("Digite [1] para escolher um modelo de dieta voltado ao emagrecimento(Cutting)\n");
            		printf("Digite [2] para escolher um modelo de dieta voltado  para manter(Normacalórica)\n");
            		printf("DIgite [3] para escolher um modelo de dieta para voltado para ganhar massa muscular(Bulking)\n");
            		scanf("%i",&pessoa.escolha);
				}
		}
		else{
			while(pessoa.peso < 0)
       		 {
           		printf("%s, Informe um peso que  seja maior ou igual a 0!!: \n",pessoa.nome);
        		scanf("%f",&pessoa.peso);
       		 }
       		 printf("Por favor, %s escolha uma das opções abaixo: \n: \n",pessoa.nome);
            	printf("Digite [1] para escolher um modelo de dieta voltado ao emagrecimento(Cutting)\n");
            	printf("Digite [2] para escolher um modelo de dieta voltado  para manter(Normacalórica)\n");
            	printf("DIgite [3] para escolher um modelo de dieta para voltado para ganhar massa muscular(Bulking)\n");
            	scanf("%i",&pessoa.escolha);
            	
            	while((pessoa.escolha != 1) && (pessoa.escolha != 2) && (pessoa.escolha != 3))
            	{
            		printf("Por favor, %s escolha uma das opções abaixo: \n: \n",pessoa.nome);
            		printf("Digite [1] para escolher um modelo de dieta voltado ao emagrecimento(Cutting)\n");
            		printf("Digite [2] para escolher um modelo de dieta voltado  para manter(Normacalórica)\n");
            		printf("DIgite [3] para escolher um modelo de dieta para voltado para ganhar massa muscular(Bulking)\n");
            		scanf("%i",&pessoa.escolha);
				}
		}
      
    }
	else
  {
        while(pessoa.idade < 0)
        {
            printf("%s, Informe uma idade que seja maior ou igual a 0!!: \n",pessoa.nome);
          	scanf("%i",&pessoa.idade);
        }

        printf("%s, Informe o seu peso: \n",pessoa.nome);
    	scanf("%f",&pessoa.peso);

        while(pessoa.peso < 0)
        {
            printf("%s, Informe um peso que  seja maior ou igual a 0!!: \n",pessoa.nome);
        	scanf("%f",&pessoa.peso);
        }
        
                printf("Por favor, %s escolha uma das opções abaixo: \n: \n",pessoa.nome);
            	printf("Digite [1] para escolher um modelo de dieta voltado ao emagrecimento(Cutting)\n");
            	printf("Digite [2] para escolher um modelo de dieta voltado  para manter(Normacalórica)\n");
            	printf("DIgite [3] para escolher um modelo de dieta para voltado para ganhar massa muscular(Bulking)\n");
            	scanf("%i",&pessoa.escolha);
            	
            	while((pessoa.escolha != 1) && (pessoa.escolha != 2) && (pessoa.escolha != 3))
            	{
            		printf("Por favor, %s escolha uma das opções abaixo: \n: \n",pessoa.nome);
            		printf("Digite [1] para escolher um modelo de dieta voltado ao emagrecimento(Cutting)\n");
            		printf("Digite [2] para escolher um modelo de dieta voltado  para manter(Normacalórica)\n");
            		printf("DIgite [3] para escolher um modelo de dieta para voltado para ganhar massa muscular(Bulking)\n");
            		scanf("%i",&pessoa.escolha);
				}
  }
}

void exibindo_macros(){
  int i ;
  
		if(pessoa.escolha == 1)
		{
			printf("=====================================DIETA[%i]=====================================\n",i = 1);
			
			        printf("ESTRATÉGIA UTILIZADA: CICLO DE CARBOIDRATOS!!\n");
					printf("DIAS DE MUSCULOS 'MENORES' E DESCANSO: como braço,deltoides, abdomen etc...\n");
					printf("%s, deverá consumir de macrotruentes: \n",pessoa.nome);
					dieta.macros.carboidrato =  pessoa.peso * 2;
					printf("Carboidrato: %.2f gramas\n",dieta.macros.carboidrato);
			
					dieta.macros.proteina = pessoa.peso * 3;
					printf("Proteina: %.2f gramas\n",dieta.macros.proteina);
			
					dieta.macros.gordura = pessoa.peso *1;
					printf("Gordura: %.2f gramas\n\n",dieta.macros.gordura);
					
					printf("DIAS DE MUSCULOS 'MAIORES' como perna,peito, e costas etc...\n");
					printf("%s, deverá consumir de macrotruentes: \n",pessoa.nome);
			
			
					dieta.macros.carboidrato =  pessoa.peso * 3;
					printf("Carboidrato: %.2f gramas\n",dieta.macros.carboidrato);
			
					dieta.macros.proteina = pessoa.peso * 3;
					printf("Proteina: %.2f gramas\n",dieta.macros.proteina);
			
					dieta.macros.gordura = pessoa.peso *1;
					printf("Gordura: %.2f gramas\n",dieta.macros.gordura);	
						
     			printf("=====================================DIETA[%i]=====================================\n",i = 1);
		}
		else if(pessoa.escolha == 2)
		{
		   printf("=====================================DIETA[%i]=====================================\n",i = 2);
				    printf("ESTRATÉGIA UTILIZADA: MANUNTENÇÃO CALORICA!!\n");
				    printf("TODOS OS DIAS: \n");
					printf("%s, deverá consumir de macrotruentes: \n",pessoa.nome);
			
					dieta.macros.carboidrato =  pessoa.peso * 4;
					printf("Carboidrato: %.2f gramas\n",dieta.macros.carboidrato);
			
					dieta.macros.proteina = pessoa.peso * 2;
					printf("Proteina: %.2f gramas\n",dieta.macros.proteina);
			
					dieta.macros.gordura = pessoa.peso *1;
					printf("Gordura: %.2f gramas\n",dieta.macros.gordura);		
     			printf("=====================================DIETA[%i]=====================================\n",i = 2);
		}
		else if(pessoa.escolha == 3)
		{
				printf("=====================================DIETA[%i]=====================================\n",i = 3);
				    printf("ESTRATÉGIA UTILIZADA: SUPERAFICT CALÓRICO!!\n");
				    printf("TODOS OS DIAS: \n");
					printf("%s, deverá consumir de macrotruentes: \n",pessoa.nome);
			
					dieta.macros.carboidrato =  pessoa.peso * 5;
					printf("Carboidrato: %.2f gramas\n",dieta.macros.carboidrato);
			
					dieta.macros.proteina = pessoa.peso * 2;
					printf("Proteina: %.2f gramas\n",dieta.macros.proteina);
			
					dieta.macros.gordura = pessoa.peso *1.2;
					printf("Gordura: %.2f gramas\n",dieta.macros.gordura);		
     			printf("=====================================DIETA[%i]=====================================\n",i = 3);		
		}
		else{
			printf("ALGO DE ERRADO NAO ESTA CERTO!??!");
		}	
}

void verificando_resposta_usuario(int *resp)
{
     printf("Para continuar digite: [1]\n");
     printf("Para sair digite: [0]: \n");
     scanf("%d",resp);

   while( *resp != 1 && *resp != 0)
      {
         printf("Para continuar digite: [1]\n");
         printf("Para sair digite: [0]: \n");
         scanf("%d",resp);

        if(*resp == 1)
        {
          break;
        }
      }
}
void Calculadora()
{
	int resp;
	do{
		 pedir_dados();
         exibindo_macros();
		 verificando_resposta_usuario(&resp);
    
    system("pause");
    system("cls");
	}while(resp == 1);	 
}

