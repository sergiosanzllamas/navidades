#include<stdio.h>
#include<stdlib.h>

#define SUM 0
#define RES 1
#define MUL 2
#define DIV 3


int main(){
    unsigned operacion;
	double op1;
	double op2;
        double suma;


	printf(
            "Elige operacion. \n"
            "\n"
            "\t0. SUMA \n"
            "\t1. RESTA \n"
            "\t2. MULTIPLICACION \n"
            "\t3. DIVISION. \n"
            "\tOperacion :"
            "\n"
              );
	scanf(" %lf", &suma);

	if (suma == 0) 
	{
		printf("operando1:");
		scanf(" %lf", &op1);
		printf("operando2:");
		scanf(" %lf", &op2);

		printf(" %.2lf + %.2lf =%.2lf\n", op1, op2, op1 + op2);

	}

	else if (suma == 1)
	{
		printf("operando1:");
		scanf(" %lf", &op1);
		printf("operando2:");
		scanf(" %lf", &op2);


		printf(" %.2lf - %.2lf =%.2lf\n", op1, op2, op1 - op2);
	}

	else if(suma == 2)
{
	printf("entonces multiplicar \n");
	printf("operando1:");
	scanf(" %lf", &op1);
	printf("operando2:");
	scanf(" %lf", &op2);


	printf(" %.2lf * %.2lf =%.2lf\n", op1, op2, op1 * op2);

}
	else
	{
		printf("entonces dividr \n");
		printf("operando1:");
		scanf(" %lf", &op1);
		printf("operando2:");
		scanf(" %lf", &op2);


		printf(" %.2lf / %.2lf =%.2lf\n", op1, op2, op1 / op2);


	}


	return EXIT_SUCCESS;
}
