#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_LENGTH 100

/* Autor Ronald
  Objetivo: Estuturar/Organizar pensamento lógico do que seria uma calculadora
  de calorias  com principais macronuentrientes e montar um modelo de estrategia
  dietética genérica e replicável.
*/
struct pessoa {
  char nome[20];
  int idade;
  float peso;
  int escolha;
} pessoa;

struct macros {
  float proteina;
  float carboidrato;
  float gordura;
};

struct dieta {
  struct macros macros;
} dieta;

// Atriute  function the lib time.h for variable t
time_t t;

// Create the struct with pointer for the print local time
struct time *tm;

// Create global variable for (receber) the struct time
char str[MAX_LENGTH];

FILE *arquivo;

// Variáveis para iniciar a contagen de linhas do arquivo ao ser listado
int lines = 0;

void pedir_dados() {
  printf("Informe o seu nome: \n");
  scanf("%s", pessoa.nome);

  printf("%s, Informe a sua idade: \n", pessoa.nome);
  scanf("%i", &pessoa.idade);

  if (pessoa.idade >= 0) {
    printf("%s, Informe o seu peso: \n", pessoa.nome);
    scanf("%f", &pessoa.peso);

    if (pessoa.peso >= 0) {
      printf("Por favor, %s escolha uma das opções abaixo: \n: \n",
             pessoa.nome);
      printf("Digite [1] para escolher um modelo de dieta voltado ao "
             "emagrecimento(Cutting)\n");
      printf("Digite [2] para escolher um modelo de dieta voltado  para "
             "manter(Normacalórica)\n");
      printf("DIgite [3] para escolher um modelo de dieta para voltado para "
             "ganhar massa muscular(Bulking)\n");
      scanf("%i", &pessoa.escolha);

      while ((pessoa.escolha != 1) && (pessoa.escolha != 2) &&
             (pessoa.escolha != 3)) {
        printf("Por favor, %s escolha uma das opções abaixo: \n: \n",
               pessoa.nome);
        printf("Digite [1] para escolher um modelo de dieta voltado ao "
               "emagrecimento(Cutting)\n");
        printf("Digite [2] para escolher um modelo de dieta voltado  para "
               "manter(Normacalórica)\n");
        printf("DIgite [3] para escolher um modelo de dieta para voltado para "
               "ganhar massa muscular(Bulking)\n");
        scanf("%i", &pessoa.escolha);
      }
    } else {
      while (pessoa.peso < 0) {
        printf("%s, Informe um peso que  seja maior ou igual a 0!!: \n",
               pessoa.nome);
        scanf("%f", &pessoa.peso);
      }
      printf("Por favor, %s escolha uma das opções abaixo: \n: \n",
             pessoa.nome);
      printf("Digite [1] para escolher um modelo de dieta voltado ao "
             "emagrecimento(Cutting)\n");
      printf("Digite [2] para escolher um modelo de dieta voltado  para "
             "manter(Normacalórica)\n");
      printf("DIgite [3] para escolher um modelo de dieta para voltado para "
             "ganhar massa muscular(Bulking)\n");
      scanf("%i", &pessoa.escolha);

      while ((pessoa.escolha != 1) && (pessoa.escolha != 2) &&
             (pessoa.escolha != 3)) {
        printf("Por favor, %s escolha uma das opções abaixo: \n: \n",
               pessoa.nome);
        printf("Digite [1] para escolher um modelo de dieta voltado ao "
               "emagrecimento(Cutting)\n");
        printf("Digite [2] para escolher um modelo de dieta voltado  para "
               "manter(Normacalórica)\n");
        printf("DIgite [3] para escolher um modelo de dieta para voltado para "
               "ganhar massa muscular(Bulking)\n");
        scanf("%i", &pessoa.escolha);
      }
    }

  } else {
    while (pessoa.idade < 0) {
      printf("%s, Informe uma idade que seja maior ou igual a 0!!: \n",
             pessoa.nome);
      scanf("%i", &pessoa.idade);
    }

    printf("%s, Informe o seu peso: \n", pessoa.nome);
    scanf("%f", &pessoa.peso);

    while (pessoa.peso < 0) {
      printf("%s, Informe um peso que  seja maior ou igual a 0!!: \n",
             pessoa.nome);
      scanf("%f", &pessoa.peso);
    }

    printf("Por favor, %s escolha uma das opções abaixo: \n: \n", pessoa.nome);
    printf("Digite [1] para escolher um modelo de dieta voltado ao "
           "emagrecimento(Cutting)\n");
    printf("Digite [2] para escolher um modelo de dieta voltado  para "
           "manter(Normacalórica)\n");
    printf("DIgite [3] para escolher um modelo de dieta para voltado para "
           "ganhar massa muscular(Bulking)\n");
    scanf("%i", &pessoa.escolha);

    while ((pessoa.escolha != 1) && (pessoa.escolha != 2) &&
           (pessoa.escolha != 3)) {
      printf("Por favor, %s escolha uma das opções abaixo: \n: \n",
             pessoa.nome);
      printf("Digite [1] para escolher um modelo de dieta voltado ao "
             "emagrecimento(Cutting)\n");
      printf("Digite [2] para escolher um modelo de dieta voltado  para "
             "manter(Normacalórica)\n");
      printf("DIgite [3] para escolher um modelo de dieta para voltado para "
             "ganhar massa muscular(Bulking)\n");
      scanf("%i", &pessoa.escolha);
    }
  }
}

void exibindo_resultados() {
  int i;

  if (pessoa.escolha == 1) {
    printf("=====================================DIETA TIPO[%i] PARA "
           "%s=====================================\n",
           i = 1, pessoa.nome);

    printf("Dados do paciente: \n\n");
    printf("Nome: %s\n", pessoa.nome);
    printf("Idade: %d\n", pessoa.idade);
    printf("Peso: %.2f\n\n", pessoa.peso);

    printf("ESTRATÉGIA UTILIZADA: CICLO DE CARBOIDRATOS!!\n");
    printf("DIAS DE MUSCULOS 'MENORES' E DESCANSO: como braço,deltoides, "
           "abdomen etc...\n");

    printf("%s, deverá consumir de macronutrientes: \n", pessoa.nome);

    dieta.macros.carboidrato = pessoa.peso * 3;
    printf("Carboidrato: %.2f gramas\n", dieta.macros.carboidrato);

    dieta.macros.proteina = pessoa.peso * 2;
    printf("Proteina: %.2f gramas\n", dieta.macros.proteina);

    dieta.macros.gordura = pessoa.peso * 1;
    printf("Gordura: %.2f gramas\n", dieta.macros.gordura);

    printf("=====================================DIETA TIPO[%i] PARA "
           "%s=====================================\n\n\n",
           i = 1, pessoa.nome);
    salvando_dados();

  } else if (pessoa.escolha == 2) {
    printf("=====================================DIETA TIPO[%i] PARA "
           "%s=====================================\n",
           i = 2, pessoa.nome);

    printf("Dados do paciente: \n\n");
    printf("Nome: %s\n", pessoa.nome);
    printf("Idade: %d\n", pessoa.idade);
    printf("Peso: %.2f\n\n", pessoa.peso);

    printf("ESTRATÉGIA UTILIZADA: MANUTENÇÃO CALÓRICA!!\n");
    printf("TODOS OS DIAS A DIETA SERÁ: \n");

    printf("%s, deverá consumir de macrotruentes: \n", pessoa.nome);

    dieta.macros.carboidrato = pessoa.peso * 2;
    printf("Carboidrato: %.2f gramas\n", dieta.macros.carboidrato);

    dieta.macros.proteina = pessoa.peso * 2;
    printf("Proteina: %.2f gramas\n", dieta.macros.proteina);

    dieta.macros.gordura = pessoa.peso * 1;
    printf("Gordura: %.2f gramas\n", dieta.macros.gordura);

    printf("=====================================DIETA TIPO[%i] PARA "
           "%s=====================================\n\n\n",
           i = 2, pessoa.nome);
    salvando_dados();
  } else if (pessoa.escolha == 3) {
    printf("=====================================DIETA TIPO[%i] PARA "
           "%s=====================================\n",
           i = 3, pessoa.nome);

    printf("Dados do paciente: \n\n");
    printf("Nome: %s\n", pessoa.nome);
    printf("Idade: %d\n", pessoa.idade);
    printf("Peso: %.2f\n\n", pessoa.peso);

    printf("ESTRATÉGIA UTILIZADA: SUPERÁFICT CALÓRICO!!\n");
    printf("TODOS OS DIAS A DIETA SERÁ: \n");

    printf("%s, deverá consumir de macrotruentes: \n", pessoa.nome);

    dieta.macros.carboidrato = pessoa.peso * 4;
    printf("Carboidrato: %.2f gramas\n", dieta.macros.carboidrato);

    dieta.macros.proteina = pessoa.peso * 2.2;
    printf("Proteina: %.2f gramas\n", dieta.macros.proteina);

    dieta.macros.gordura = pessoa.peso * 1.5;
    printf("Gordura: %.2f gramas\n", dieta.macros.gordura);

    printf("=====================================DIETA TIPO[%i] PARA "
           "%s=====================================\n\n\n",
           i = 3, pessoa.nome);
    salvando_dados();

  } else {
    printf("ALGO ERRADO NAO ESTA CERTO!??!");
  }
}
void salvando_dados() {
  int i;
  t = time(NULL);
  tm = localtime(&t);

  // Function this lib (time.h) for print local time
  strftime(str, MAX_LENGTH, "%c", tm);

  // Variáveis para acesso ao arquivo

  arquivo = fopen("Dietas para  Pacientes.txt", "a+");

  if (arquivo == NULL) {
    printf("Erro ao abrir o arquivo");
    exit(1);
  } else {

    if (pessoa.escolha == 1) {
      fprintf(arquivo, "Alterado em: %s\n", str);
      fprintf(arquivo,
              "=====================================DIETA TIPO[%i] PARA "
              "%s=====================================\n",
              i = 1, pessoa.nome);

      fprintf(arquivo, "Nome: %s\n", pessoa.nome);
      fprintf(arquivo, "Idade: %d\n", pessoa.idade);
      fprintf(arquivo, "Peso: %.2f\n", pessoa.peso);

      fprintf(arquivo, "ESTRATÉGIA UTILIZADA: CICLO DE CARBOIDRATOS!!\n");
      fprintf(arquivo, "DIAS DE MUSCULOS 'MENORES' E DESCANSO: como "
                       "braço,deltoides, abdomen etc...\n");

      fprintf(arquivo, "%s, deverá consumir de macrotruentes: \n", pessoa.nome);

      dieta.macros.carboidrato = pessoa.peso * 3;
      fprintf(arquivo, "Carboidrato: %.2f gramas\n", dieta.macros.carboidrato);

      dieta.macros.proteina = pessoa.peso * 2;
      fprintf(arquivo, "Proteina: %.2f gramas\n", dieta.macros.proteina);

      dieta.macros.gordura = pessoa.peso * 1;
      fprintf(arquivo, "Gordura: %.2f gramas\n", dieta.macros.gordura);

      fprintf(arquivo,
              "=====================================DIETA TIPO[%i] PARA "
              "%s=====================================\n\n\n",
              i = 1, pessoa.nome);
      fclose(arquivo);

    } else if (pessoa.escolha == 2) {
      fprintf(arquivo, "Alterado em: %s\n", str);
      fprintf(arquivo,
              "=====================================DIETA TIPO[%i] PARA "
              "%s=====================================\n",
              i = 2, pessoa.nome);

      fprintf(arquivo, "Nome: %s\n", pessoa.nome);
      fprintf(arquivo, "Idade: %d\n", pessoa.idade);
      fprintf(arquivo, "Peso: %.2f\n", pessoa.peso);

      fprintf(arquivo, "ESTRATÉGIA UTILIZADA: MANUNTENÇÃO CALORICA!!\n");
      fprintf(arquivo, "TODOS OS DIAS A DIETA SERÁ: \n");
      fprintf(arquivo, "%s, deverá consumir de macrotruentes: \n", pessoa.nome);

      dieta.macros.carboidrato = pessoa.peso * 2;
      fprintf(arquivo, "Carboidrato: %.2f gramas\n", dieta.macros.carboidrato);

      dieta.macros.proteina = pessoa.peso * 2;
      fprintf(arquivo, "Proteina: %.2f gramas\n", dieta.macros.proteina);

      dieta.macros.gordura = pessoa.peso * 1;
      fprintf(arquivo, "Gordura: %.2f gramas\n", dieta.macros.gordura);

      fprintf(arquivo,
              "=====================================DIETA TIPO[%i] PARA "
              "%s=====================================\n\n\n",
              i = 2, pessoa.nome);
      fclose(arquivo);
    } else if (pessoa.escolha == 3) {
      fprintf(arquivo, "Alterado em: %s\n", str);
      fprintf(arquivo,
              "=====================================DIETA TIPO[%i] PARA "
              "%s=====================================\n",
              i = 3, pessoa.nome);

      fprintf(arquivo, "Nome: %s\n", pessoa.nome);
      fprintf(arquivo, "Idade: %d\n", pessoa.idade);
      fprintf(arquivo, "Peso: %.2f\n", pessoa.peso);

      fprintf(arquivo, "ESTRATÉGIA UTILIZADA: SUPERAFICT CALÓRICO!!\n");
      fprintf(arquivo, "TODOS OS DIAS A DIETA SERÁ: \n");
      fprintf(arquivo, "%s, deverá consumir de macrotruentes: \n", pessoa.nome);

      dieta.macros.carboidrato = pessoa.peso * 4;
      fprintf(arquivo, "Carboidrato: %.2f gramas\n", dieta.macros.carboidrato);

      dieta.macros.proteina = pessoa.peso * 2.2;
      fprintf(arquivo, "Proteina: %.2f gramas\n", dieta.macros.proteina);

      dieta.macros.gordura = pessoa.peso * 1.5;
      fprintf(arquivo, "Gordura: %.2f gramas\n", dieta.macros.gordura);

      fprintf(arquivo,
              "=====================================DIETA TIPO[%i] PARA "
              "%s=====================================\n\n\n",
              i = 3, pessoa.nome);
      fclose(arquivo);
    } else {
      printf("ALGO ERRADO NAO ESTA CERTO!??!");
    }
  }
}

void verificando_resposta_usuario(int *resp) {
	
  printf("Para montar uma nova dieta digite: [1]\n");
  printf("Para exibir todas as dietas já anotadas digite: [2]\n");
  printf("Para sair digite: [0]: \n");
  scanf("%d", resp);

  switch (*resp) {
  case 1:
    Calculadora();
    break;
  case 2:
    printf("INICIO DO ARQUIVO: \n\n");
    arquivo = fopen("Dietas para  Pacientes.txt", "r"); // Abre o arquivo  somente para leitura 
    if (arquivo == NULL) { // Verifica se o arquivo foi aberto corretamente
      printf("Erro ao abrir o arquivo Dietas para  Pacientes.txt\n");
    }
    else{
	    	while (fgets(str, MAX_LENGTH, arquivo) != NULL) {
	      		printf("%d. %s", ++lines, str);
	    	}
	    printf("FINAL DO ARQUIVO...\n\n");
   		 fclose(arquivo); // Fecha o arquivo
   		 lines = 0;
   		 verificando_resposta_usuario(&resp);
	}
    
    break;
  case 0:
    exit(1);
    break;
  default:
    printf("POR FAVOR, Para continuar digite: [1]\n");
     printf("Para exibir todas as dietas já anotadas digite: [2]\n");
    printf("Para sair digite: [0]: \n");
    scanf("%d", resp);
  }
}

void Calculadora() {
  int resp;
  printf("-----------------------------------------------------------------BEM-VINDO A CALCULADORA DE MACROS-----------------------------------------------------------------\n\n");
  do {
	    pedir_dados();
	    exibindo_resultados();
	    verificando_resposta_usuario(&resp);

    system("pause");
    system("cls");
  } while (resp != 0);
   printf("-----------------------------------------------------------------SAINDO DA CALCULADORA DE MACROS-----------------------------------------------------------------\n\n");
}

int main() { Calculadora(); }
