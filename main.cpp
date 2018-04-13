#include<stdio.h>
#include<stdlib.h>
#include<time.h>




int main(){


    int x;
    int seg1 = 5;
     seg1=(int)clock()/CLOCKS_PER_SEC;

    srand(time(NULL));
    for(int as=0; as<3; as++){
        x = rand()%36;
    printf("El numero es %i\n", x);
    if(x == 10 %2 || x == 10%3)
        printf("has ganado\n");
    
    else
        printf("has perdido\n");
    }
 




    return EXIT_SUCCESS;
}
