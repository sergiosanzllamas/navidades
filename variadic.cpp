#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define SIM 1
#define CON 2
#define ECO 3



#define SUM 1
#define RES 2
#define MUL 3
#define DIV 4

#define MAT 5
#define RAI 6
#define LOG 7
#define POR 8
#define DES 9
#define POT 10




#define MIL  1
#define CEN  2
#define DEC  3
#define DAC  4
#define HEC  5
#define KIM  6



#define REN 1 

#define M 20
#define N   3
const char *elegir0[] = {
    "SIMPLES",
    "CONVERSION",
    "ECONOMICAS",

    NULL
};
const char *elegir1[] ={
    "SUMA",
    "RESTA",
    "MULTIPLICACION",
    "DIVISION",
    "MATRIZ",
    "RAIZ",
    "LOGARITMO",
    "PORCENTAJE",
    "DESCUENTO",
    "POTENCIAS",
    NULL
};
const char *elegir2[]={
    "MILIMETROS",
    "CENTIMETROS",
    "Decimetros",
    "DECAMETROS",
    "HECTOMETROS",
    "KILOMETROS",
    NULL   
};
const char *elegir3[]={
    "RENTABILIDAD",
    NULL
};


int main(){
    unsigned operaciones;
    unsigned operacion;
    unsigned conversion;
    unsigned economica;
    double op1;
    double op2;
    int a[N][N];
    double s, p;
    double resultado;  
    int x, y;
    char r; 
    int contra;
    int suma = 0;
    int num = 1;
    int intentos = 5;
    printf("dame tu Nombre:");
    scanf("%s", &r);
    printf("dime tu edad: ");
    scanf("%i", &x);
    printf("introduce la contraseña:");
    scanf(" %i", &contra);


    system("clear");

    if(contra == 1234){
        printf(" acceso permitido\n");

        system("toilet -fpagga  Calculator");
        for(int o=0; o<3; o++)
            printf("%i. %s.\n", o+1, elegir0[o]);
        scanf("%i", &operaciones);    
        switch(operaciones){
            case SIM:
                printf("operaciones simples:\n");
                for(int i=0; i<10; i++)
                    printf("%i. %s.\n", i+1, elegir1[i]);
                printf("QUE OPERACION SIMPLE QUIERES:");
                scanf(" %i", &operacion);

                switch(operacion){
                    case SUM:
                        printf("Suma:\n");
                        printf("entonces sumar\n");
                        printf("operando1:");
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
                    case MAT:
                        printf("Matriz\n");
                        for(int filas=0; filas<N; filas++){
                            for(int columnas=0; columnas<N; columnas++){
                                printf("mete  el %iº numero:", num++);
                                scanf("%i", &a[filas][columnas]);
                            }
                        }
                        for(int f=0; f<N; f++){
                            for(int c=0; c<N; c++)
                                printf("%4i", a[f][c]);
                            printf("\n");

                        }
                        for(int f=0; f<N; f++){
                            int diagonal = 1;
                            for(int c=0; c<N; c++)
                                diagonal *= a[c][(f+c)%N];
                            suma += diagonal;
                        }
                        for(int f=0; f<N; f++){
                            int diagonal = 1;
                            for(int c=0; c<N; c++)
                                diagonal -= a[(f+c)%N][N-1-c];
                            suma -= diagonal;
                        }

                        printf("el resultado es %i\n", suma);
                        return EXIT_SUCCESS;

                        break;

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
                        s = -s* p/100 + s;
                        printf("el porcentaje es %.2lf\n", s);
                        break;
                    case DES:
                        printf("DESCUENTO\n");
                        printf("hacemos el descuento\n");
                        printf("Dame el precio:");
                        scanf("%lf", &s);
                        printf("dame el descuento:");
                        scanf("%lf", &p);

                        s= -s * p/100 +s;
                        printf("el precio final es %.2lf euros \n", s);
                        break;
                    case POT:
                        printf("POTENCIA\n");
                        printf("hacemos la potencia\n");
                        printf("dame el numero:");
                        scanf("%i", &x);
                        printf("dame el otro numero:");
                        scanf("%i", &y);
                        x= pow(x,y);
                        printf("la potencia es %i \n", x);
                        break;
                    default:
                        printf("del 1 al 10 huevon \n");

                        break;


                }
                break;

            case CON:
                printf("CONVERSIONES A METROS:\n");
                for(int s=0; s<6; s++)
                    printf("%i. %s.\n", s+1, elegir2[s]);
                printf("que conversion a metros quieres:");
                scanf("%i", &conversion);

                switch(conversion){
                    case MIL:
                        printf("Milimetros:\n");
                        printf("Pasamos de milimetros a metros\n");
                        printf("Dame la cantidad de milimetros:");
                        scanf("%lf", &s);
                        s = s/1000;
                        printf("El paso de milimetros a metros es %.2lf m \n", s);
                        break;
                    case CEN:
                        printf("Centrimetros:\n");
                        printf("Pasamos de centrimetros a metros\n");
                        printf("Dame la canridad de centimetros:");
                        scanf("%lf", &s);
                        s = s/100;
                        printf("El paso de Centimetros a metros es %.2lf m \n", s);
                        break;
                    case DEC:
                        printf("Decimetros:\n");
                        printf("Pasamos de Decimetros a Metros\n");
                        printf("Dame la cantidad de Decimetros:");
                        scanf("%lf", &s);
                        s = s/10;
                        printf("El paso de Decimetros a metros es %.2lf m \n", s);
                        break;
                    case DAC:
                        printf("Decametros:\n");
                        printf("Pasamos de decametros a metros\n");
                        printf("dame la cantidad de decametros:");
                        scanf("%lf", &s);
                        s = s*10;
                        printf("El paso de decametros a metros es %.2lf m \n", s);
                        break;
                    case HEC:
                        printf("Hectometros\n");
                        printf("Pasamaos de hectometros a metros\n");
                        printf("Dame la cantidad de hectometros:");
                        scanf("%lf", &s);
                        s = s*100;
                        printf(" el paso de de hectometros a metros es %.2lf m \n", s);
                        break;
                    case KIM:
                        printf("kilometros\n");
                        printf("pasamos de kilometros a metros \n");
                        printf("Dame la cantidad de Kilometros:");
                        scanf("%lf", &s);
                        s = s*1000;
                        printf("El paso de kilometros a metros es %.2lf m \n", s);
                        break;
                    default:
                        printf("1 al 6\n");
                        break;
                }

                break;
            case ECO:
                printf("OPERACIONES ECONOMICAS\n");
                for(int s=0; s<1; s++)
                    printf("%i. %s.\n", s+1, elegir3[s]);
                printf("que operacion economica  quieres:");
                scanf("%i", &economica);
                switch(economica){
                    case REN:
                        printf("Rentabilidad:\n");
                        printf("Dame la cantidad de unidades:");
                        scanf("%lf", &s);
                        printf("dame el numero de ventas:");
                        scanf("%lf", &p);
                        s = s /p *100;
                        printf("la el nuemro de ventas  es  %.2lf  \n", s);
                        break;

                }
                break;
            default:
                printf("del 1 O 3\n");
                break;
        }

    }else
            printf("tienes %i\n", intentos--);
        
        


    return EXIT_SUCCESS;
}

