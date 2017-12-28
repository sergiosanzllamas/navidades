#include <stdio.h>
#include <stdlib.h>

#define PAL 1
#define LAT 2
#define TRI 3
#define FON 4

int main(){

    unsigned opcion;

    

    printf(
            "Elige la zona:\n"
            "\n"
            "\t1. PALCO.\n"
            "\t2. LATERAL BAJA.\n"
            "\t3. TRIBUNA.\n"
            "\t4. FONDO.\n"
            "\n"
            "\tOpción: "
            );

    scanf(" %u", &opcion);

    switch(opcion) {
        case PAL:
            printf("PALCO MAFIA");
            break;
        case LAT:
            printf("LATERAL");
            break;
        case TRI:
            printf("TRIBUNA");
            break;
        case FON:
            printf("FONDO");
            break;
       
        default:
            printf("Del 1 al 4 .\n");
            break;
    }

    printf("\n");
    return EXIT_SUCCESS;
}
