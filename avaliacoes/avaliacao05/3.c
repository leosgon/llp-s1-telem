#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
 
 char arq[100];
 printf("Digite o nome do arquivo a ser lido: ");
 fgets(arq, 100, stdin);
 arq[strcspn(arq, "\n")] = '\0';  // << Chat GPT ensinou, pra não ler o "enter" como parte do nome do arquivo

 FILE* arquivo = fopen(arq, "r");
    
 char let;
 int vog = 0;
 int caractere;

 while((caractere = getc(arquivo)) != EOF){
  let = tolower(caractere);

  if(let == 'a' || let == 'e' || let == 'i' || let == 'o' || let == 'u'){
   vog++;
  }
 }

 fclose(arquivo);

 printf("O arquivo contém %d vogais.\n", vog);

 return 0;
}
