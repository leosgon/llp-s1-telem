#include <stdio.h>
#include <math.h>


main(){

int x;
float y;

printf("Digite um numero inteiro positivo para calcular o seu logaritimo: ");
scanf("%d", &x);

if (x < 0) {
printf("Numero invalido");
}else{
 y = log10(x);
 printf("O logaritimo de %d e: %f", x, y);
}

return 0;
}
