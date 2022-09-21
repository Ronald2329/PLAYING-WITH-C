#include <stdio.h>

/* Autor: Ronald Nepomuceno
   Enunciado: Desenvolva um programa que receba um conjunto de dados para 5 alunos 
   nos quais irá ser coletado: o nome, curso e a idade de cada respectivo e deverá ser exibido.
*/
//Estrutura de dados para o aluno
struct st_aluno{
    char nome[100];
    char curso[100];
    int idade; 
	
}alunos[5];

//Subprograma para entrada  de dados
void entrada_dados()
{   
    //Declaração de variáveis locais(de não atribuição)
    int i;
      
      for(i = 0; i < 5; i++)
      {
        printf("Informe o nome do aluno: \n");
        fgets(alunos[i].nome, 100, stdin);
      
        printf("Informe o curso do aluno: \n");
        fgets(alunos[i].curso, 100, stdin);
      
        printf("Informe a idade do aluno: \n");
        scanf("%i",&alunos[i].idade);
        getchar();
        
        //Funções para pausar a tela e limpar a cada dado digitado de cada aluno
        system("pause");
        system("cls");
	  }
}
      
      	//Subprograma para exibição de dados
      void exibicao_dados()
      {
      	//Declaração de variáveis locais(de não atribuição)
      	int i;
      	
        for(i = 0; i< 5; i++)
         {
      	   printf("\n=====Exibicao de dados do aluno_%i=====\n", i + 1);
	       printf("Nome:  %s\n",alunos[i].nome);
	       printf("Curso: %s\n",alunos[i].curso);
	       printf("Idade: %i\n",alunos[i].idade);
	     }
	  }
      
      

int main()
{
	//Chamada de estrutura de dados
	struct  st_aluno;
	
	//Chamada de subprogramas
	entrada_dados();
	exibicao_dados();
	
  
}