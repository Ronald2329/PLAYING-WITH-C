#include <stdio.h>
#include <string.h>
#define qnt_pessoas 100
/*
	Autor: Ronald
	//Criando um form de usuario e Senha
	e outras funcionalidades de um sistema
	*/

//Declarando Variáveis globais
char novo_usuario[qnt_pessoas];
char nova_senha[qnt_pessoas];
char usuario[qnt_pessoas];
char senha[qnt_pessoas];
char resp[qnt_pessoas];
char usuario_direto[qnt_pessoas] = {"Ronald"};
char senha_direta[qnt_pessoas] = {"123456"};
int ret_senha,ret_usuario;
char servico[100];

//Função para iniciar o programa
void inicio_do_programa()
{
	printf("====================Início do programa====================\n");
	printf("Vamos realizar o seu cadrastro?\n");
	printf("Digite s para continuar ou n para pular o cadastro:\n");
	scanf("%s",resp);
}

//Função para criar novo cadastro
void novo_cadastro()
{
	printf("=============CADASTRO===========\n");
	printf("Informe um nome para usuário: \n");
	scanf("%s",novo_usuario);
	printf("Agora informe uma senha: \n");
	scanf("%s",nova_senha);
}
//Função para executar o login
void Login()
{
	printf("=============LOGIN===========\n");
	printf("Informe o seu usuário: \n");
	scanf("%s",usuario);
	printf("Informe sua senha: \n");
	scanf("%s",senha);
	
	//Coletando um valor inteiro através da comparação de duas strings
	ret_usuario = strcmp(novo_usuario,usuario);
	ret_senha = strcmp(nova_senha,senha);
	
	if(ret_usuario == 0)
	{
		if(ret_senha == 0)
		{
			printf("LOGIN FEITO COM SUCESSO!!\n");
		}
		else
		{
			//Faça enquanto a varíavel de valor inteiro de senha for diferente de 0
			do{
				printf("Senha incorreta!!\n");
				printf("POr favor, digite uma senha válida!!\n");
				scanf("%s",senha);
				
				ret_senha = strcmp(nova_senha,senha);
				
			}while(ret_senha != 0);
	
			printf("LOGIN FEITO COM SUCESSO!!\n");
		}	
	}
	else
	{
		do{
			printf("Usuário/e/ou senha incorreto(s)!!\n");
			printf("Informe o seu usuário: \n");
			scanf("%s",usuario);
			printf("Informe sua senha: \n");
			scanf("%s",senha);
			
			ret_usuario = strcmp(novo_usuario,usuario);
			ret_senha = strcmp(nova_senha,senha);
			
		}while(ret_usuario != 0);
			
			
			if(ret_senha == 0)
			{
				printf("LOGIN FEITO COM SUCESSO!!\n");
			}
			else
			{
				do{
					printf("Senha incorreta!!\n");
					printf("POr favor, digite uma senha válida!!\n");
					scanf("%s",senha);
					
					ret_senha = strcmp(nova_senha,senha);
					
				}while(ret_senha != 0);
	
			printf("LOGIN FEITO COM SUCESSO!!\n");
			}	
	}
}

//Função caso o usuario tenha escolhido  na primeira resposta no inicio do programa "não"
void login_direto()
{
	printf("=============LOGIN===========\n");
	printf("Informe o usuario: \n");
	scanf("%s",usuario);
	
	printf("INforme a senha: \n");
	scanf("%s",senha);
	
	ret_usuario = strcmp(usuario_direto,usuario);
	ret_senha = strcmp(senha_direta,senha);
	
	if(ret_usuario == 0)
	{
		if(ret_senha == 0)
		{
			printf("LOGIN FEITO COM SUCESSO!!\n");
		}
		else
		{
			do{
				printf("Senha incorreta!!\n");
				printf("POr favor, digite uma senha válida!!\n");
				scanf("%s",senha);
				
				ret_senha = strcmp(senha_direta,senha);
				
			}while(ret_senha != 0);
	
			printf("LOGIN FEITO COM SUCESSO!!\n");
		}	
	}
	else
	{
		do{
			printf("Usuário/e/ou senha incorreto(s)!!\n");
			printf("Informe o seu usuário: \n");
			scanf("%s",usuario);
			printf("Informe sua senha: \n");
			scanf("%s",senha);
			
			ret_usuario = strcmp(usuario_direto,usuario);
			ret_senha = strcmp(senha_direta,senha);
			
		}while(ret_usuario != 0);
			
			
			if(ret_senha == 0)
			{
				printf("LOGIN FEITO COM SUCESSO!!\n");
			}
			else
			{
				do{
					printf("Senha incorreta!!\n");
					printf("POr favor, digite uma senha válida!!\n");
					scanf("%s",senha);
					
					ret_senha = strcmp(senha_direta,senha);
					
				}while(ret_senha != 0);
	
			printf("LOGIN FEITO COM SUCESSO!!\n");
			}	
	}
}
//Função principal do sistema
//Obs: ela executa todas as outras as funções bem como coletando os seus dados, função main abaixo apenas é a principal da "linguagem"
void executando_sistema()
{ 
	inicio_do_programa();
	
	if(resp[0] == 's' || resp[0] == 'S' && resp[1] == '\0')
	{
		novo_cadastro();
		Login();
	}
	else if(resp[0] == 'n' || resp[0] == 'N' && resp[1] == '\0')
	{
		login_direto();
	}
	else if((resp[0] != 's' || resp[0] != 'S' && resp[1]) && (resp[0] != 'n' || resp[0] != 'N' && resp[1] != '\0'))
	{
		do{
			inicio_do_programa();
		}while((resp[0] != 's' || resp[0] != 'S' && resp[1] != '\0') && (resp[0] != 'n' || resp[0] != 'N' && resp[1] != '\0'));
		
		if(resp[0] == 's' || resp[0] == 'S' && resp[1] == '\0')
		{
			novo_cadastro();
			Login();
		}
		else if(resp[0] == 'n' || resp[0] == 'N' && resp[1] == '\0')
		{
			login_direto();
		}
	}
}
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
				    printf("ESTRATÉGIA UTILIZADA: MANUNTENÇÃO CALORICA!!\n");
				    printf("TODOS OS DIAS: \n");
		   printf("=====================================DIETA[%i]=====================================\n",i = 2);
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
void Calculadora_macros()
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

void script_principal()
{
	printf("O que voce deseja escolher?\n");
	printf("Para escolher algum serviço:\n ");
	printf("Digite [1]-Para ter acesso a calculadora de macros\n");
	printf("DIgite [0]-Para sair do sistema!!: \n");
	scanf("%s",servico);
}
void servicos()
{
	script_principal();
	
	if(servico[0] == '1' && servico[1] == '\0')
	{
		Calculadora_macros();
	}
	else
	{
		do{
				script_principal();
		}while((servico[0] != '1' && servico[1] != '\0') && (servico[0] != '0' && servico[1] != '\0'));
		
		if(servico[0] == '1' && servico[1] == '\0')
		{
			Calculadora_macros();
		}
	}
}

int main()
{
	//Chamando a função que executa a função principal do sistema 
	executando_sistema();
	do{
		servicos();
	}while(servico[0] != '0' && servico[1] != '0');

}