#include<stdio.h>
#include<stdlib.h>




int main(){

int numero;


int intentos = 5;

for(int intentos = 5; intentos <6; intentos++){

printf("dame el nuemro de lados de un triangulo:");
scanf("%i", &numero);

if(numero == 3)
	printf("has acertado\n");


else 
	printf("llevas %i intentos\n", intentos--);
}













return EXIT_SUCCESS;
}
