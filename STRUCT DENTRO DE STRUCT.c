#include <stdio.h>
#include <string.h>

struct st_contato{
	char nome[100];
	char email[100];
	char numero[20];
};

struct st_agenda{
	struct st_contato contatos[100];
}agenda;

void entrada_de_dados()
{
	int i;
	int var;
	
	printf("-------------------------INICIO DO PROGRAMA-------------------------\n");
	printf(" Apos a digitacao pressione 2x a tecla enter do contrario digitar\nos dois espacos acarretara o preenchimento vazio na agenda\n");
	for(i = 0 ; i < 3; i++)
	{
	printf("Informe o nome do contato:\n"); 
	fgets(agenda.contatos[i].nome, 100, stdin);
	getchar();
	
	printf("INforme o e_mail do usuario: \n");
	fgets(agenda.contatos[i].email, 100, stdin);
	getchar();
	
	printf("INforme o numero do contato: \n");
    scanf("%s",&agenda.contatos[i].numero);
    getchar();
	
    var = strlen(agenda.contatos[i].numero);
    
    
	if(var > 20)
	{
		while( var >20)
		{
			printf("O numero digitado eh invalido pois possui %i digitos!!!\n",var);
			printf("POR FAVOR, digite um numero que tenha até 20 digitos!!!\n");
            scanf("%s",&agenda.contatos[i].numero);
            
            var = strlen(agenda.contatos[i].numero);
            
            if(var <= 20)
            {
            	break;
			}
		}
	}
	
	system("pause");
	system("cls");
	}
}

void Exibir_dados()
{
	int i;
	
	printf("======================================================AGENDA=======================================================\n");
	for(i = 0; i < 3; i++)
	{
	printf("======Contato%i======\n",i+1);
	printf("Nome:%s \n", agenda.contatos[i].nome);
	printf(" E_mail:%s\n", agenda.contatos[i].email);
	printf("Contato: %s\n", agenda.contatos[i].numero);
	}
	
}
int main()
{
	
	entrada_de_dados();
	Exibir_dados();
}
