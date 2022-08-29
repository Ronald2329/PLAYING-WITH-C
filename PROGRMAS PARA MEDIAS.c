#include<stdio.h>
#include<iso646.h>
#include <stdlib.h>

int main()
{
 int num ,resp,contador=1;
 int qnt_aprovados=0,qnt_reprovados=0;


 do {
   printf("Escreva a media[%i]: \n",contador++);
   scanf("%i",&num);

     if(num>=0 and num<=10)
    {
       
	   if(num>=6)
       {
        printf("\nAprovado!!\n");
        qnt_aprovados++;
       }
       else if(num<6)
      {
       printf("\nReprovado!!\n");
       qnt_reprovados++;
      }
    }
  else
  {
   printf ("\nValor digitado para media eh incorreto!!!");
  }
   printf("\nPara continuar digite [1], para sair digite [0]: \n");
   scanf("%i",&resp);
  
   while(resp!=1)
   {
   	 
	  printf("\n Por favor, Para continuar digite [1], para sair digite [0]: \n"); getchar();
	  scanf("%i",&resp);
	  
      if(resp == 0)
     {
     	break;
	 }
   }
}while(resp==1);
printf("\nA quantidade de aprovados na turma eh : %i\n",qnt_aprovados);
printf("\nA quantidade de reprovados na turma eh : %i\n",qnt_reprovados);
}