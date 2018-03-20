#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define SUM 1
#define RES 2
#define MUL 3
#define DIV 4
#define MAT 5
#define RAI 6
#define POT 7

#define N   3
int main(){
    unsigned operacion;
    double op1;
    double op2;
    int a[N][N];
    double s;
    double resultado;  
  



    system("toilet -fpagga  Calculator");


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
            system("PAUSE");
        case POT:
            printf("Potencia\n");
            printf("Hace,os la potencia\n");
          
            
      
    default:
    printf("del 1 al 6 huevon \n");
    break;
}

return EXIT_SUCCESS;
}

