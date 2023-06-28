#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
 
 char arq[100];
 printf("Digite o nome do arquivo a ser lido: ");
 fgets(arq, 100, stdin);
 arq[strcspn(arq, "\n")] = '\0';

 FILE* arquivo = fopen(arq, "r");
    
 char carac;
 char let;
 int totalcarac = 0;
 int caractere;

 printf("Digite o caractere que você quer testar: ");
 scanf("%c", &carac);

 while((caractere = getc(arquivo)) != EOF){
  let = (caractere);

  if(let == carac){
   totalcarac++; 
  }
 }

 fclose(arquivo);

 printf("O arquivo contém %d caractere(s) '%c'\n", totalcarac, carac);
 
 return 0;

}
