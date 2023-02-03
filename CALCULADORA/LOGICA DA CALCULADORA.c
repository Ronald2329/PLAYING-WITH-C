#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

void exibindo_resultados(){
	int i ;
	
  			if(pessoa.escolha == 1){
  					printf("=====================================DIETA TIPO[%i] PARA %s=====================================\n",i = 1,pessoa.nome);

  					printf("Dados do paciente: \n\n");		
  					printf("Nome: %s\n", pessoa.nome);
				    printf("Idade: %d\n", pessoa.idade);
				    printf("Peso: %.2f\n\n", pessoa.peso);
				    
  					
			  		printf("ESTRATÉGIA UTILIZADA: CICLO DE CARBOIDRATOS!!\n");
					printf("DIAS DE MUSCULOS 'MENORES' E DESCANSO: como braço,deltoides, abdomen etc...\n");
				  	
				                                                                 
					printf("%s, deverá consumir de macronutrientes: \n",pessoa.nome);			 
				
					dieta.macros.carboidrato =  pessoa.peso * 3;
					printf("Carboidrato: %.2f gramas\n",dieta.macros.carboidrato);
			
					dieta.macros.proteina = pessoa.peso * 2;
					printf("Proteina: %.2f gramas\n",dieta.macros.proteina);
			
					dieta.macros.gordura = pessoa.peso *1;
					printf("Gordura: %.2f gramas\n",dieta.macros.gordura);	

				    
	     			printf("=====================================DIETA TIPO[%i] PARA %s=====================================\n\n\n",i = 1,pessoa.nome);
	     			salvando_dados();
				
		}
		else if(pessoa.escolha == 2)
		{
		   printf("=====================================DIETA TIPO[%i] PARA %s=====================================\n",i = 2,pessoa.nome);

  					printf("Dados do paciente: \n\n");		
  					printf("Nome: %s\n", pessoa.nome);
				    printf("Idade: %d\n", pessoa.idade);
				    printf("Peso: %.2f\n\n", pessoa.peso);
				    
  					
			  		printf("ESTRATÉGIA UTILIZADA: MANUTENÇÃO CALÓRICA!!\n");
					printf("TODOS OS DIAS A DIETA SERÁ: \n");
				  	
				                                                             
					printf("%s, deverá consumir de macrotruentes: \n",pessoa.nome);			 
				
					dieta.macros.carboidrato =  pessoa.peso * 2;
					printf("Carboidrato: %.2f gramas\n",dieta.macros.carboidrato);
			
					dieta.macros.proteina = pessoa.peso * 2;
					printf("Proteina: %.2f gramas\n",dieta.macros.proteina);
			
					dieta.macros.gordura = pessoa.peso *1;
					printf("Gordura: %.2f gramas\n",dieta.macros.gordura);	

				    
	     			printf("=====================================DIETA TIPO[%i] PARA %s=====================================\n\n\n",i = 2,pessoa.nome);
	     			salvando_dados();
		}else if(pessoa.escolha == 3)
		{
			printf("=====================================DIETA TIPO[%i] PARA %s=====================================\n",i = 3,pessoa.nome);

  					printf("Dados do paciente: \n\n");	
  					printf("Nome: %s\n", pessoa.nome);
				    printf("Idade: %d\n", pessoa.idade);
				    printf("Peso: %.2f\n\n", pessoa.peso);
				    
  					
			  		printf("ESTRATÉGIA UTILIZADA: SUPERÁFICT CALÓRICO!!\n");
					printf("TODOS OS DIAS A DIETA SERÁ: \n");
				  	
				                                                             
					printf("%s, deverá consumir de macrotruentes: \n",pessoa.nome);			 
				
					dieta.macros.carboidrato =  pessoa.peso * 4;
					printf("Carboidrato: %.2f gramas\n",dieta.macros.carboidrato);
			
					dieta.macros.proteina = pessoa.peso * 2.2;
					printf("Proteina: %.2f gramas\n",dieta.macros.proteina);
			
					dieta.macros.gordura = pessoa.peso *1.5;
					printf("Gordura: %.2f gramas\n",dieta.macros.gordura);	

				    
	     			printf("=====================================DIETA TIPO[%i] PARA %s=====================================\n\n\n",i = 3,pessoa.nome);
	     		     salvando_dados();

		}
		else{
			printf("ALGO ERRADO NAO ESTA CERTO!??!");
		}
	}
void salvando_dados(){
  int i ;

    FILE *arquivo;
    char nome_arquivo[30];
    sprintf(nome_arquivo, "Dieta para o Paciente: %s.txt", pessoa.nome);
    arquivo = fopen(nome_arquivo, "a");
    
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo");
        exit(1);
    }
    else{
	

  			if(pessoa.escolha == 1){
  					fprintf(arquivo,"=====================================DIETA TIPO[%i] PARA %s=====================================\n",i = 1,pessoa.nome);

  						
  					fprintf(arquivo, "Nome: %s\n", pessoa.nome);
				    fprintf(arquivo, "Idade: %d\n", pessoa.idade);
				    fprintf(arquivo, "Peso: %.2f\n", pessoa.peso);
				    
  					
			  		fprintf(arquivo,"ESTRATÉGIA UTILIZADA: CICLO DE CARBOIDRATOS!!\n");
					fprintf(arquivo,"DIAS DE MUSCULOS 'MENORES' E DESCANSO: como braço,deltoides, abdomen etc...\n");
				  	
				                                                                 
					fprintf(arquivo,"%s, deverá consumir de macrotruentes: \n",pessoa.nome);			 
				
					dieta.macros.carboidrato =  pessoa.peso * 3;
					fprintf(arquivo,"Carboidrato: %.2f gramas\n",dieta.macros.carboidrato);
			
					dieta.macros.proteina = pessoa.peso * 2;
					fprintf(arquivo,"Proteina: %.2f gramas\n",dieta.macros.proteina);
			
					dieta.macros.gordura = pessoa.peso *1;
					fprintf(arquivo,"Gordura: %.2f gramas\n",dieta.macros.gordura);	

				    
	     			fprintf(arquivo,"=====================================DIETA TIPO[%i] PARA %s=====================================\n\n\n",i = 1,pessoa.nome);
	     			fclose(arquivo);
				
		}
		else if(pessoa.escolha == 2)
		{
		   fprintf(arquivo,"=====================================DIETA TIPO[%i] PARA %s=====================================\n",i = 2,pessoa.nome);
		   
		   			fprintf(arquivo, "Nome: %s\n", pessoa.nome);
				    fprintf(arquivo, "Idade: %d\n", pessoa.idade);
				    fprintf(arquivo, "Peso: %.2f\n", pessoa.peso);
				    
				    fprintf(arquivo,"ESTRATÉGIA UTILIZADA: MANUNTENÇÃO CALORICA!!\n");
				    fprintf(arquivo,"TODOS OS DIAS A DIETA SERÁ: \n");                                                       
					fprintf(arquivo,"%s, deverá consumir de macrotruentes: \n",pessoa.nome);			 
				
					dieta.macros.carboidrato =  pessoa.peso * 2;
					fprintf(arquivo,"Carboidrato: %.2f gramas\n",dieta.macros.carboidrato);
			
					dieta.macros.proteina = pessoa.peso * 2;
					fprintf(arquivo,"Proteina: %.2f gramas\n",dieta.macros.proteina);
			
					dieta.macros.gordura = pessoa.peso *1;
					fprintf(arquivo,"Gordura: %.2f gramas\n",dieta.macros.gordura);	

				    
	     			fprintf(arquivo,"=====================================DIETA TIPO[%i] PARA %s=====================================\n\n\n",i = 2,pessoa.nome);
	     			fclose(arquivo);
		}
		else if(pessoa.escolha == 3)
		{
				fprintf(arquivo,"=====================================DIETA[%i]=====================================\n",i = 3);
				    fprintf(arquivo,"ESTRATÉGIA UTILIZADA: SUPERAFICT CALÓRICO!!\n");
				    fprintf(arquivo,"TODOS OS DIAS A DIETA SERÁ: \n");
				fprintf(arquivo,"%s, deverá consumir de macrotruentes: \n",pessoa.nome);
			
					dieta.macros.carboidrato =  pessoa.peso *4;
					fprintf(arquivo,"Carboidrato: %.2f gramas\n",dieta.macros.carboidrato);
			
					dieta.macros.proteina = pessoa.peso * 2.2;
					fprintf(arquivo,"Proteina: %.2f gramas\n",dieta.macros.proteina);
			
					dieta.macros.gordura = pessoa.peso *1.5;
					fprintf(arquivo,"Gordura: %.2f gramas\n",dieta.macros.gordura);	

				    
	     			fprintf(arquivo,"=====================================DIETA TIPO[%i] PARA %s=====================================\n\n\n",i = 3,pessoa.nome);
	     			fclose(arquivo);	
		}
		else{
			printf("ALGO ERRADO NAO ESTA CERTO!??!");
		}
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
		 exibindo_resultados();
		 verificando_resposta_usuario(&resp);
    
    system("pause");
    system("cls");
	}while(resp == 1);	 
}

int main(){{
	 Calculadora();
}
}