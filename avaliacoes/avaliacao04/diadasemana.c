#include <stdio.h>
#include <math.h>

main(){
	
int x;

printf ("Escreva um número inteiro de 1 a 7: ");
scanf ("%d", &x);

switch (x){
case 1: printf("Domingo");
 break;
case 2: printf("Segunda-feira");
 break;
case 3: printf("Terça-Feira");
 break;
case 4: printf("Quarta-feira");
 break;
case 5: printf("Quinta-feira");
 break;
case 6: printf("Sexta-feira");
 break;
case 7: printf("Sábado");
 break;

}

return 0;
}
