
#include <stdio.h>
#include <stdlib.h>
#include "comun.h"
#include "inter.h"
int main(){
    char a[N][N];
    unsigned opcion;
    int intentos,c;
    intentos =0;
    system("clear");
    printf("Que opcion quieres escoger.\n1.Un jugador.\n2.Dos jugadores.\n");
    scanf(" %u", &opcion);
    switch(opcion){
        case 1:
            mete(a);
            do{
                system("clear");
                tablero(a);
                if(intentos%2==0)
                    usuario1(a);
                else 
                    cpu(a);

                c = ganador(a);
                intentos++;

            }while(intentos<9 && c==2);
            system("clear");
            tablero(a);
            if(c== 0)
                printf("has ganado\n");
            else if(c == 1)
                printf("has perdio\n");
            else
                printf("has empatado\n");
            break;
        case 2:
            mete(a);
            do{
                system("clear");
                tablero(a);
                if(intentos%2==0)
                    usuario1(a);
                else 
                    usuario2(a);

                c = ganador(a);
                intentos++;

            }while(intentos<9 && c==2);
            system("clear");
            tablero(a);
            if(c== 0)
                printf("ha ganado J1\n");
            else if(c == 1)
                printf("ha ganado J2\n");
            else
                printf("habeis empatado\n");
            break;

        default:
            printf("mierdsa\n");
            break;

    }
    return EXIT_SUCCESS;
}
