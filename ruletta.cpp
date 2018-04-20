#include <stdio.h>
#include <stdlib.h>
#define IMP 1
#define JUG 2


#define DIE 1
#define VEI 2
#define UNO 3
#define DOS 4

#define POI 1
#define COL 2
#define TRE 3
#define NUM 4


#define N 20

const char *elegir1[]{
    "IMPORTE",
        "JUGADA"
        NULL
};
const char *elegir2[]{
    "DIEZ",
        "VEINTE",
        "UNO",
        "DOS",
        NULL
};
const char *elegir3[]{
    "PAR O IMPAR",
        "COLUMNA",
        "TRES NUMEROS",
        "NUMERO",
        NULL
};
int main(){
    unsigned importe;
    unsigned ahora;
    unsigned jugada;
    int n;
    int m[N];
    system("toilet -fpagga  Calculator");
    for(int o=0; o<2; o++)
        printf("%i. %s.\n", o+1, elegir1[o]);
    scanf("%i", &ahora);
    system("clear");
    switch(ahora){
        case IMP:
            printf("que importe vas apopstar:\n");
            for(int i=0; i<4; i++)
                printf("%i. %s.\n", i+1, elegir2[i]);
            printf("QUE Importe quieres:");
            scanf(" %i", &importe);
            switch(importe){
                case DIE:
                    printf("has introducido 0.10 centimos\n");
                    break;
                case VEI:
                    printf("has introducido 0.20 centimos\n");
                    break;
                case UNO:
                    printf("has introducido 1 EURO\n");
                    break;
                case DOS:
                    printf("has introducido 2 EUROS\n");
                    break;

                default:
                    printf("1 0 4");
                    break;
            }
        case JUG:
            printf("que apuesta quieres:\n");

            for(int o=0; o<4; o++)
                printf("%i. %s.\n", o+1, elegir3[o]);
            scanf("%i", &ahora);
            switch(jugada){
                case POI:
                    do{
                        printf("1-APOSTAR A LOS PARES \t 2-APOSTAR A LOS IMPARES\n");
                        scanf("%i", &n);
                    }while(n !=1 && n!=2);
                    break;
                case COL:
                    do{
                        printf("1-Apostar a la primera columna \t 1-4-7-10-13-16-19-22-25-28-31-34\n");
                        printf("2-Apostar a la segunda columna \t 2-5-8-11-14-17-20-23-26-29-32-35\n");
                        printf("3-Apostar a la tercera columna \t 3-6-9-12-15-18-21-24-27-30-33-36\n");
                        scanf("%i", &n);}while(n != 1 && n != 2 && n !=3);
                    break;
                case TRE:
                    do{
                        printf("Dame los tres numeros a apostar:");
                        for(int a=0; a<3; a++)
                            scanf("%i", &m[a]);}
                    while((m[0]<=0 || m[0] >36) || (m[1]<=0 || m[1]>36) || (m[3] <=0 || m[3]>36));
                    break;
                case NUM:
                    do{
                        printf("dame un numero entre 0 y 36\n");
                        scanf("%i", &n);}while(n != 1 && n !=36);
                    break;

                default:
                    printf("1 0 4");
                    break;
            }
break;
    }
    
    return EXIT_SUCCESS;
}
