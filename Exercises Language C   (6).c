#include <stdio.h>
int main () {
int opniao, idade, qtdPessoasRegular=0, qtdTotal=2, qtdPessoasExc=0;
float media_idade=0, pctbom=0;

for (int i=0; i<qtdTotal; i++)
{
printf("Digite sua idade \n");
scanf("%d", &idade);
printf("Digite sua opiniao: \n (3) Excelente \n (2) Bom \n (1) Regular \n");
scanf("%d", &opniao);
system ("cls");

if (opniao==1)
{
qtdPessoasRegular++;
}
if (opniao==2)
{
pctbom++;
}
if (opniao==3)
{
  qtdPessoasExc++;
  media_idade = media_idade + idade;
}

}
printf("Pessoas que responderam regular: %d \n", qtdPessoasRegular);
printf("A porcentagem de pessoas que responderam bom entre e: %f \n", pctbom/qtdTotal*100);
printf("Media das pessoas que responderam excelente: %f \n", media_idade/qtdPessoasExc);
}
