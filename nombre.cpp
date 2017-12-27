#include<stdio.h>
#include<stdlib.h>


#define N 0XFF

int main(){

	char nombre[N];
	int edad;


	printf(" Dime tu nombre: ");
	scanf(" %[^\n]", nombre);

	printf(" dime tu edad:" );
	scanf(" %i", &edad);

	if(edad > 17) {

		printf(" eres mayor de edad \n");


		printf(" Hola, Buenos dias %s\n ¿que necesita?\n", nombre);

	}

	else {
		printf(" eres menor de edad acceso denegado \n");
	}






	return EXIT_SUCCESS;
}
