#include <stdio.h>
#include <stdlib.h>

#define PAL 1
#define LAT 2
#define TRI 3
#define FON 4


#define TAR 1
#define MET 2

int main(){

	unsigned opcion;
	unsigned pago;
	int modopago;     

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


	printf(
			"¿como quiere pagar? \n"
			"\t1. TARJETA \n"
			"\t2. METALICO \n"
			"\tPago: \n"
			"\n"
		  );

	scanf(" %u", &pago);

	switch(pago){
		case TAR:
			printf("meta el pin: ");
			scanf(" %i", &pago);
			break;
		case MET:
			printf("deme el dinero");
			break;
		default:
			printf("1 o 2\n");
			break;
	}
	printf("\n");

	printf("pago con exito¡¡ ,Disfrute del partido, Buenos Dias \n"); 
	return EXIT_SUCCESS;

}
