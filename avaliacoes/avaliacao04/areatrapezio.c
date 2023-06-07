#include <stdio.h>
#include <math.h>

main(){
	
float x, z, y, a;

printf ("Programa para calcular área do trapézio\n");
printf ("Digite o valor da base maior: ");
scanf ("%f", &x);
printf ("Digite o valor da base menor: ");
scanf ("%f", &z);
printf ("Digite o valor da altura: ");
scanf ("%f", &y);

a = ((x+z)*y)/2;

printf("\nO valor da área do trapézio é: %f: ", a);


return 0;
}
