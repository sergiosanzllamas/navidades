#include<stdlib.h>
#include<stdio.h>


#define N 3


int main(){
    int a[N][N];
    int suma = 0;
    int num = 1;
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
}
