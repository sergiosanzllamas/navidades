#include<stdio.h>
#include<stdlib.h>
#define N 0x100


int main(){
	int numero;
    

	printf("mete el numero: ");
	scanf(" %i", &numero);


	if (numero % 2 == 0)
	{

		printf("el numero %i  es par \n", numero);



	}
	else {  

		printf("es impar¡ \n");

	}







	return EXIT_SUCCESS;
}
