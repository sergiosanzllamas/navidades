#include<stdio.h>
#include<stdlib.h>




int main() {

	int lado,
		area,
		perimetro;
	int base,
		altura;

	printf("lado: ");
	scanf(" %i", &lado);


	printf("altura: ");
	scanf(" %i", &altura);
	printf("base: ");
	scanf(" %i", &base);
	area = base * altura;
	perimetro = lado + lado + lado;


	printf( "Area: %i\n"
			"Perimetro: %i\n",
			area, perimetro );















	return EXIT_SUCCESS;
}
