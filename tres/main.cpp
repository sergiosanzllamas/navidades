#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#define N 3
int ganador(char a[N][N]){
    if(a[0][0] == 'X' || a[0][0] == 'O'){
        if(a[0][0] == a[0][1] && a[0][0] == a[0][2])
            if(a[0][0] == 'X')
                return 0;
            else 
                return 1;
        if(a[0][0] == a[1][0] && a[0][0] == a[2][0])
            if(a[0][0] == 'X')
                return 0;
            else 
                return 1;
    }
    if(a[1][1] == 'X' || a[1][1] == 'O'){
        if(a[1][1] == a[0][0] && a[1][1] == a[2][2])
            if(a[1][1] == 'X')
                return 0;
            else 
                return 1;
        if(a[1][1] == a[0][2] && a[1][1] == a[2][0])
            if(a[1][1] == 'X')
                return 0;
            else 
                return 1;
        if(a[1][1] == a[1][0] && a[1][1] == a[1][2])
            if(a[1][1] == 'X')
                return 0;
            else 
                return 1;
        if(a[1][1] == a[0][1] && a[1][1] == a[2][1])
            if(a[1][1] == 'X')
                return 0;
            else 
                return 1;

    }
    if(a[2][2] == 'X' || a[2][2] == 'O'){
        if(a[2][2] == a[2][0] && a[2][2] == a[2][1])
            if(a[2][2] == 'X')
                return 0;
            else 
                return 1;
        if(a[2][2] == a[0][2] && a[2][2] == a[1][2])
            if(a[2][2] == 'X')
                return 0;
            else 
                return 1;
    }
    return 2;
}
void mete(char a[N][N]){
    char tablero = '1';
    for(int f=0; f<N; f++){
        for(int c=0; c<N; c++)
            a[f][c] = tablero++;
    }

}
void tablero(char a[N][N]){
    for(int f=0; f<N; f++){
        for(int c=0; c<N; c++)
            if(c<2)
                printf(" %c |", a[f][c]);
            else
                printf(" %c ", a[f][c]);
        if(f<2)
            printf("\n-----------\n");
        printf("\n");
    }
}
void usuario1(char a[N][N]){
    int f,c,k;
    int eleccion;
    do{
        do{
            printf("coloca una ficha J1: ");
            fflush(stdin);
            scanf(" %i", &eleccion);
        }while(eleccion <1 || eleccion >9 );
        k=0;
        switch(eleccion){
            case 1:
                f=0;
                c=0;
                if(a[f][c] == 'X' || a[f][c] == 'O'){
                    k=1;
                    printf(" La casilla esta ocupada\n");
                }

                break;
            case 2:
                f=0;
                c=1;
                if(a[f][c] == 'X' || a[f][c] == 'O'){
                    k=1;
                    printf(" La casilla esta ocupada\n");
                }

                break;
            case 3:
                f=0;
                c=2;
                if(a[f][c] == 'X' || a[f][c] == 'O'){
                    k=1;
                    printf(" La casilla esta ocupada\n");
                }

                break;
            case 4:
                f=1;
                c=0;
                if(a[f][c] == 'X' || a[f][c] == 'O'){
                    k=1;
                    printf(" La casilla esta ocupada\n");
                }

                break;
            case 5:
                f=1;
                c=1;
                if(a[f][c] == 'X' || a[f][c] == 'O'){
                    k=1;
                    printf(" La casilla esta ocupada\n");
                }

                break;
            case 6:
                f=1;
                c=2;
                if(a[f][c] == 'X' || a[f][c] == 'O'){
                    k=1;
                    printf(" La casilla esta ocupada\n");
                }

                break;
            case 7:
                f=2;
                c=0;
                if(a[f][c] == 'X' || a[f][c] == 'O'){
                    k=1;
                    printf(" La casilla esta ocupada\n");
                }

                break;
            case 8:
                f=2;
                c=1;
                if(a[f][c] == 'X' || a[f][c] == 'O'){
                    k=1;
                    printf(" La casilla esta ocupada\n");
                }

                break;
            case 9:
                f=2;
                c=2;
                if(a[f][c] == 'X' || a[f][c] == 'O'){
                    k=1;
                    printf(" La casilla esta ocupada\n");
                }

                break;
            default:
                printf("mete del uno al nueve\n");
                break;
        }
    }while(k==1);
    a[f][c] = 'X';

}
void usuario2(char a[N][N]){
    int f,c,k;
    int eleccion;
    do{
        do{
            printf("coloca una ficha J2: ");
            fflush(stdin);
            scanf(" %i", &eleccion);
        }while(eleccion <1 || eleccion >9);
        switch(eleccion){
            case 1:
                f=0;
                c=0;
                if(a[f][c] == 'X' || a[f][c] == 'O'){
                    k=1;
                    printf(" La casilla esta ocupada\n");
                }

                break;
            case 2:
                f=0;
                c=1;
                if(a[f][c] == 'X' || a[f][c] == 'O'){
                    k=1;
                    printf(" La casilla esta ocupada\n");
                }

                break;
            case 3:
                f=0;
                c=2;
                if(a[f][c] == 'X' || a[f][c] == 'O'){
                    k=1;
                    printf(" La casilla esta ocupada\n");
                }

                break;
            case 4:
                f=1;
                c=0;
                if(a[f][c] == 'X' || a[f][c] == 'O'){
                    k=1;
                    printf(" La casilla esta ocupada\n");
                }

                break;
            case 5:
                f=1;
                c=1;
                if(a[f][c] == 'X' || a[f][c] == 'O'){
                    k=1;
                    printf(" La casilla esta ocupada\n");
                }

                break;
            case 6:
                f=1;
                c=2;
                if(a[f][c] == 'X' || a[f][c] == 'O'){
                    k=1;
                    printf(" La casilla esta ocupada\n");
                }

                break;
            case 7:
                f=2;
                c=0;
                if(a[f][c] == 'X' || a[f][c] == 'O'){
                    k=1;
                    printf(" La casilla esta ocupada\n");
                }

                break;
            case 8:
                f=2;
                c=1;
                if(a[f][c] == 'X' || a[f][c] == 'O'){
                    k=1;
                    printf(" La casilla esta ocupada\n");
                }

                break;
            case 9:
                f=2;
                c=2;
                if(a[f][c] == 'X' || a[f][c] == 'O'){
                    k=1;
                    printf(" La casilla esta ocupada\n");
                }

                break;
            default:
                printf("mete del uno al nueve\n");
                break;
        }
        k=0;
    }while(k==1);
    a[f][c] = 'O';

}

void cpu(char a[N][N]){
    int f,c,k;
    srand(time(NULL));
    do{
        f = rand()%N;
        c = rand()%N;
        k = 0;
        if(a[f][c] == 'X' || a[f][c] == 'O')
            k=1;
    }while(k == 1);
    a[f][c] = 'O';
}
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
