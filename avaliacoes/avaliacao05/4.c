#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
 
 char arq[100];
 printf("Digite o nome do arquivo a ser lido: ");
 fgets(arq, 100, stdin);
 arq[strcspn(arq, "\n")] = '\0';

 FILE* arquivo = fopen(arq, "r");
    
 char let;
 int vog = 0;
 int cons = 0;
 int caractere;

 while((caractere = getc(arquivo)) != EOF){
  let = tolower(caractere);

  if(let == 'a' || let == 'e' || let == 'i' || let == 'o' || let == 'u'){
   vog++;
  }else if(isalpha(let)){
    cons++;
   }
 }

 fclose(arquivo);

 printf("O arquivo contém %d vogais, e %d consoantes.\n", vog, cons);
 
 return 0;

}
