#include <stdio.h>

/*
Enunciado: Construa um programa que que multiplique as duas matrizes [3][3]:
matriz1[3] [3] = {1, 3, 5, 7, 9, 11, 13, 15, 17}
matriz2[3][3] = {2, 4, 6, 8, 10, 12, 14, 16, 18}.
*/


void exibe_primeria_matriz()
{
int cnt ,  cpn;
float nota[3] [3] = {1, 3, 5, 7, 9, 11, 13, 15, 17};
printf("------Exibindo a primeira matriz-----\n");
for(cnt = 0; cnt < 3; cnt++)
    {
    for(cpn = 0; cpn < 3; cpn++)
    {
    printf("%.2f \t",nota[cnt][cpn]);
}
printf("\n");
}

system("pause");
system("cls");
}

void exibe_segunda_matriz()
{
int cnt ,  cpn;
float nt[3] [3] = {2, 4, 6, 8, 10, 12, 14, 16, 18};


printf("------Exibindo a segunda matriz segunda-----\n");
for(cnt = 0; cnt < 3; cnt++)
    {
    for(cpn = 0; cpn < 3; cpn++)
    {
    printf("%.2f \t",nt[cnt][cpn]);
}
printf("\n");
}
    system("pause");
    system("cls");
}

void multiplica_matrizes( float mat3[3][3])
{
int cnt ,  cpn;
    int  i;
    float nota[3] [3] = {1, 3, 5, 7, 9, 11, 13, 15, 17};
    float nt[3] [3] = {2, 4, 6, 8, 10, 12, 14, 16, 18};
     
    for( cnt=0; cnt<3; cnt++)
    {
       for( cpn=0; cpn<3; cpn++)
       {
          for( i=0; i<3; i++)
          {
           mat3[cnt][cpn]= mat3[cnt][cpn] + nota[cnt][i] * nt[i][cpn];
          }
        }
}

for(cnt=0; cnt<3; cnt++){
    for(cpn=0; cpn<3; cpn++)
    {
     printf("%.2f\t ", mat3[cnt][cpn]);
}
    printf("\n");
  }
}

int main()
{
   float mat3[3][3];

exibe_primeria_matriz();
exibe_segunda_matriz();
multiplica_matrizes(&mat3);
}
