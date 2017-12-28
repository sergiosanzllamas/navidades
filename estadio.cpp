#include <stdio.h>
#include <stdlib.h>

#define PAL 1
#define LAT 2
#define TRI 3
#define FON 4


int main(){

	unsigned opcion;

	int efectivo;     

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
			printf("LATERAL BAJA");
			break;
		case TRI:
			printf("TRIBUNA");
			break;
		case FON:
			printf("FONDO");
			break;
		default:
			printf("Del 1 al 4,.\n");
			break;
	}
	printf("\n");


	printf("Metodo de pago: \n");
	scanf(" %i", &efectivo);



	if (efectivo == 5){
		printf("Deme el dinero \n");
	}
	else {
		printf(" Ingrese el pin: ");
		scanf(" %i", &efectivo);
	}

	printf("pago con exito¡¡, Disfrute del partido \n");
	return EXIT_SUCCESS;
}
