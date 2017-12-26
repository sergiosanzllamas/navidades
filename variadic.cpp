#include<stdio.h>
#include<stdlib.h>



int main(){

	int op1;
	int op2;
	int suma;


	printf("sumar, restar , multiplicar o dividir:");
	scanf(" %i", &suma);

	if (suma == 0) 
	{
		printf("operando1:");
		scanf(" %i", &op1);
		printf("operando2:");
		scanf(" %i", &op2);

		printf(" %i + %i =%i\n", op1, op2, op1 + op2);

	}

	else if (suma == 1)
	{
		printf("operando1:");
		scanf(" %i", &op1);
		printf("operando2:");
		scanf(" %i", &op2);


		printf(" %i - %i =%i\n", op1, op2, op1 - op2);
	}

	else if(suma == 2)
{
	printf("entonces multiplicar \n");
	printf("operando1:");
	scanf(" %i", &op1);
	printf("operando2:");
	scanf(" %i", &op2);


	printf(" %i * %i =%i\n", op1, op2, op1 * op2);

}
	else
	{
		printf("entonces dividr \n");
		printf("operando1:");
		scanf(" %i", &op1);
		printf("operando2:");
		scanf(" %i", &op2);


		printf(" %i / %i =%i\n", op1, op2, op1 / op2);


	}


	return EXIT_SUCCESS;
}
