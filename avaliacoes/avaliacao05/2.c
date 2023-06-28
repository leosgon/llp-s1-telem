#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
 
 char arq[100];
 printf("Digite o nome do arquivo a ser lido: ");
 fgets(arq, 100, stdin);
 arq[strcspn(arq, "\n")] = '\0';

 FILE* arquivo = fopen(arq, "r");
    
 int totalLinha = 0;
 int caractere;

 while((caractere = getc(arquivo)) != EOF){
  if(caractere == '\n'){
   totalLinha++;
  }
 }
 if(caractere != '\n'){
  totalLinha++;
 }


 fclose(arquivo);

 printf("O total de linhas no texto do arquivo é: %d", totalLinha);
 
 return 0;

}
