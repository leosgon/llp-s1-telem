#include <stdio.h>
#include <stdlib.h>

struct caracteres{
char c;
};

int main(){

 int x = 0;
 struct caracteres* caracteres = NULL;
 
 FILE* fptr;
 fptr = fopen("arq.txt", "w");
 do{
  caracteres = (struct caracteres*)realloc(caracteres, (x + 1) * sizeof(struct caracteres));

  printf("Digite um caractere para ser armazenado no arquivo(digite 0 para encerrar): ");
  scanf(" %c", &caracteres[x].c);

  fprintf(fptr, "%c\n", caracteres[x].c);
  
  x++;
 
 }while(caracteres[x-1].c !='0');
 fclose(fptr);


 fptr = fopen("arq.txt", "r");
 printf("Os caracteres salvos no arquivo, são: ");
 for(int i = 0; i < x; i++){
  if(i > 0){
   printf(", ");
  }
  printf("%c", caracteres[i].c);
 }

 return 0;
}
