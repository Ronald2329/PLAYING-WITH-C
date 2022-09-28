#include <stdio.h>
#include <string.h>

//Criando strct para contato
struct st_contato{
	char nome[100];
	char email[100];
	char numero[20];
};

//Importanto uma struct para dentro de outra struct
//No caso teremos uma agenda e dentro dessa agenda cada contato terá um nome, email e um número.
struct st_agenda{
	struct st_contato contatos[100];
}agenda;

//Subprograma para entrada de dados
void entrada_de_dados()
{
	//Variáveis locais(de não atribuição)
	int i;
	int var;
	
	//Nota: foi utilizado fgets com exceção na última pois como veremos abaixo a função fgets coleta sempre um caracter a mais no caso o "/0"
	printf("-------------------------INICIO DO PROGRAMA-------------------------\n");
	printf(" Apos a digitacao pressione 2x a tecla enter do contrario digitar\nos dois espacos acarretara o preenchimento vazio na agenda\n");
	for(i = 0 ; i < 3; i++)
	{
	printf("Informe o nome do contato:\n"); 
	fgets(agenda.contatos[i].nome, 100, stdin);
	getchar();
        //Getchar para caso o usuario digite errado "não pule" quando voltar para a digitação
	
	printf("INforme o e_mail do usuario: \n");
	fgets(agenda.contatos[i].email, 100, stdin);
	getchar();
	
	printf("INforme o numero do contato: \n");
        scanf("%s",&agenda.contatos[i].numero);
	//Nota: a função scanf exclui o "\0" enquanto a fgets conta mais um como por exemplo:
	//"Ronald" = 6 caracters enquanto com fgets seria: "Ronald\0" totalizando 7 pois o o "/0" eh um unico caracter especial das finais de cada string"
        getchar();
	
    //Faz a coleta da qquantidade de strings digitadas
    var = strlen(agenda.contatos[i].numero);
    
        //Verifica a quantidade de strings
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
	
		//Funções para "Pausar e limpar a tela" respectivamente
	system("pause");
	system("cls");
	}
}

//Função para exibir dados
void Exibir_dados()
{
	//Variável local(de não atribuição)
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
	//Chamada de funções 
	entrada_de_dados();
	Exibir_dados();
}
