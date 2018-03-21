#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define SUM 1
#define RES 2
#define MUL 3
#define DIV 4
#define MAT 5
#define RAI 6
#define LOG 7
#define POR 8
#define N   3


const char *elegir[] ={
    "SUMA",
    "RESTA",
    "MULTIPLICACION",
    "DIVISION",
    "MATRIZ",
    "RAIZ",
    "LOGARITMO",
    "PORCENTAJE",
    NULL
};

int main(){
    unsigned operacion;
    double op1;
    double op2;
    int a[N][N];
    double s, p;
    double resultado;  
    int x, y; 



    system("toilet -fpagga  Calculator");




    for(int i=0; i<8; i++)
        printf("%i. %s.\n", i+1, elegir[i]);
    printf("QUE OPERACION QUIERES:");

    scanf(" %i", &operacion);

    
        switch(operacion){
            case SUM:
                printf("Suma:\n");
                printf("operando1:");
                printf("entonces sumar\n");
                scanf(" %lf", &op1);
                printf("operando2:");
                scanf(" %lf", &op2);
                printf(" %.2lf + %.2lf =%.2lf\n", op1, op2, op1 + op2);
                break;
            case RES:
                printf("Resta:\n");
                printf(" entonces restar\n");
                printf("operando1:");
                scanf(" %lf", &op1);
                printf("operando2:");
                scanf(" %lf", &op2);
                printf(" %.2lf - %.2lf =%.2lf\n", op1, op2, op1 - op2);
                break;
            case MUL:
                printf("Multiplicacion: \n");
                printf("entonces multiplicar \n");
                printf("operando1:");
                scanf(" %lf", &op1);
                printf("operando2:");
                scanf(" %lf", &op2);
                printf(" %.2lf * %.2lf =%.2lf\n", op1, op2, op1 * op2);
                break;
            case DIV:
                printf("Division:\n");
                printf("entonces dividr \n");
                printf("operando1:");
                scanf(" %lf", &op1);
                printf("operando2:");
                scanf(" %lf", &op2);
                printf(" %.2lf / %.2lf =%.2lf\n", op1, op2, op1 / op2);
                break;
                /* case MAT:
                   printf("Matriz:\n");
                   for(int f=0; f<N; f++)
                   for(int c=0; c<N; c++){
                   printf("mete numeros:");
                   scanf(" %i", &a[N][N]);


                   }
                   printf(" el resultdo es %.6lf \n", resultado);
                   */
            case RAI:
                printf("Raiz Cuadrada:\n");
                printf("Entonces hacemos la raiz\n");
                printf("Numero:");
                scanf("%lf", &s);
                s=sqrt(s);
                printf("El Resultado de la Raiz es: %lf\n", s);
                break;

            case LOG:
                printf("Logaritmo\n");
                printf("Hacemos el logaritmo\n");
                printf("mete el  numero:\n");
                scanf("%lf", &s);
                s = log10(s);
                printf("El logaritmo de %lf\n", s);
                break;
            case POR:
                printf("Porcentaje:\n");
                printf("Hacamos el porcentaje\n");
                printf("dime el numero:");
                scanf("%lf", &s);
                printf("dime el tanto por ciento:");
                scanf("%lf", &p);
               s = s* p/100;
               printf("el porcentaje es %.2lf\n", s);
               break;
            default:
                printf("del 1 al 6 huevon \n");
        }
    
    return EXIT_SUCCESS;
}

