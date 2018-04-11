#include<stdio.h>
#include<stdlib.h>



#define N 3


int main(){

double a[N]={3, 6, 8};
double b[N]={4, 6, 8};
double suma = 0;
double mul;
for(int fil=0; fil<N; fil++){
	

mul= a[fil] * b[fil];
	suma += mul;
	
}





 printf("el resultado es %.2lf\n", suma);










return EXIT_SUCCESS;
}
