//De entero a caracter

#include <stdio.h>

void main(){
	int num1,numf;
	float f1;
	char c1;
	printf("Ingresa un numero entero: ");
	scanf("%d",&num1);
	c1 = (char)num1;
	printf("Tu numero en caracter: %c\n",c1);
	printf("Ingresa un numero flotante: ");
	scanf("%f",&f1);
	numf = (int)f1;
	printf("Tu numero flotante en entero es: %d\n",numf);
	
}