#include <stdio.h>
#include <math.h>

main(){


float media, x, y, z;

printf("Programa para calcular a media das notas");
fflush(stdin);
printf("\nDigite a primeira nota: ");
scanf("%f", &x);
fflush(stdin);
printf("Digite a segunda nota: ");
scanf("%f", &y);
fflush(stdin);
printf("Digite a terceira nota: ");
scanf("%f", &z);

media = (x+y+z*2)/4;

if (media>=6){
 printf("\nA media do aluno foi %f. Ele esta aprovado", media);
}else{
  printf("\nA media do aluno foi %f. Ele esta reprovado", media);
 }

		
return 0;	
}
