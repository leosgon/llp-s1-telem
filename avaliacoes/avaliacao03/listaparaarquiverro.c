#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct cadastro {
  int idade;
  char nome[30];};

            
int main(){
setlocale(LC_ALL, "Portuguese");

int x = 0, y = 1;
struct cadastro cadastro[x];

do{
 printf("Deseja cadastrar a %dº pessoa?(1-Sim/0-Não, e gravar pessoas cadastradas): ", x+1);
 scanf("%d", &y);
 if(y == 1){
  fflush(stdin);
  printf("Nome: ");
  scanf("%s",&cadastro[x].nome);  
  printf("Idade: ");
  scanf("%d",&cadastro[x].idade);
  printf ("\n");
  x++;
 }
}
while (y!=0);

y = x;

FILE *fptr;
fptr = fopen("cadastro.txt", "w");
 for (x=0; x<y; x++){
  fprint("%s %d\n", cadastro[x].nome, cadastro[x].idade);
 }
fclose(fptr);
return 0;
}
