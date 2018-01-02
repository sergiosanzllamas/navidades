#include<stdio.h>
#include<stdlib.h>


#define N 0XFF

#define MAS 1
#define BAN 2
#define SPA 3
int main(){

	char nombre[N];
	int edad;
    unsigned tratamiento;

	printf(" Dime tu nombre: ");
	scanf(" %[^\n]", nombre);

	printf(" dime tu edad:" );
	scanf(" %i", &edad);

	if(edad > 17) {

		printf(" eres mayor de edad \n");


		printf(" Hola, Buenos dias %s\n ¿que necesita?\n", nombre);


       printf(
               "elige tratamiento: \n"
               "\n"
               "\t1. MASAJE \n"
               "\t2. BANO \n"
               "\t3. SPA \n"
               "\tTratamiento: \n"
               "\n"
                 );

scanf(" %u", &tratamiento);




switch(tratamiento){
      case MAS:
         printf(" MASAJE\n");
          break;
     case BAN:
         printf(" BANO\n");
          break;
    case SPA:
        printf(" SPA\n");
       break;
      default:
  printf(" 1 al 3 \n");
   






}

	}

	else {
		printf(" eres menor de edad acceso denegado \n");
	}






	return EXIT_SUCCESS;
}
