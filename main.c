#include <stdio.h>
#include <stdlib.h>

int main(int arc, char *argv[]) {

 int n1;
int notas [n1], i, media, soma = 0;

  printf("Digite a quantidade de notas:\n");
    scanf("%d",&n1);
  
  for(i = 0; i < n1; i++)
  {
    printf("Digite a nota: %d \n",(i + 1));
    scanf("%d", &notas[i]);
    soma += notas[i];
  }
  media = soma/n1;
  printf("A soma das nota é: %d \n\n", soma);
  printf("A sua média é: %d \n\n", media);

  if(media <= 5){
    printf("Você foi reprovado!!");
  }
  else{
    printf("Você FOI APROVADO!!!");
  }
  
  return 0;
}