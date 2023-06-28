#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
 
 char arq[100];
 printf("Digite o nome do arquivo a ser lido: ");
 fgets(arq, 100, stdin);
 arq[strcspn(arq, "\n")] = '\0';

 FILE* arquivo = fopen(arq, "r");
    
 int total[26] = {0};
 int caractere;
    
 while((caractere = fgetc(arquivo)) != EOF){
  if(isalpha(caractere)){ 
   caractere = tolower(caractere); 
   int i = caractere - 'a';
   total[i]++;
  }
 }

 fclose(arquivo);

 for(int i = 0; i < 26; i++){
  char letra = 'a' + i;
  printf("A letra '%c' foi encontrada %d vezes\n", letra, total[i]);
 }
 
 return 0;

}
