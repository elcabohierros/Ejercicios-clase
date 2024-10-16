//Clase
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <float.h>

int main(int argc, char** argv){
	printf("El numero de bytes de un float es				: %d\n",sizeof(float));
	printf("El mayor valor de un float positivo es				: %g\n",(float)FLT_MAX);
	printf("El menor valor de un float positivo es				: %g\n",(float)FLT_MIN);
	printf("El mayor valor de un float negativo es				: %g\n",(float)-FLT_MAX);
	printf("El menor valor de un float negativo es				: %g\n",(float)-FLT_MIN);
	printf("El numero de bits de un double es				: %d\n",sizeof(double));
	printf("El mayor valor de un double positivo es				: %g\n",(double)DBL_MAX);
	printf("El menor valor de un double positivo es				: %g\n",(double)DBL_MIN);
	printf("El mayor valor de un double negativo es				: %g\n",(double)-DBL_MAX);
	printf("El menor valor de un double negativo es				: %g\n",(double)-DBL_MIN);
	printf("El numero de bits de un long double es				: %d\n",sizeof(long double));
	printf("El mayor valor de un long double positivo es			: %le\n",(double)LDBL_MAX);
	
	
	return 0;
}