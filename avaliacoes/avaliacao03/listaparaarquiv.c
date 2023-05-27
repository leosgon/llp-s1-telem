#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct cadastro {
  int idade;
  char nome[30];
};

int main() {
  setlocale(LC_ALL, "Portuguese");

  int x = 0, y = 1;
  struct cadastro* cadastro = NULL;

  do {
    printf("Deseja cadastrar a %dº pessoa? (1-Sim/0-Não, e gravar pessoas cadastradas): ", x + 1);
    scanf("%d", &y);

    if (y == 1) {
      cadastro = (struct cadastro*)realloc(cadastro, (x + 1) * sizeof(struct cadastro));
      fflush(stdin);
      printf("Nome: ");
      scanf("%s", cadastro[x].nome);
      printf("Idade: ");
      scanf("%d", &cadastro[x].idade);
      printf("\n");
      x++;
    }
  } while (y != 0);

  FILE* fptr;
  fptr = fopen("cadastro.txt", "w");

   for (int i = 0; i < x; i++) {
     fprintf(fptr, "%s %d\n", cadastro[i].nome, cadastro[i].idade);
   }

  fclose(fptr);
  
  return 0;
}
