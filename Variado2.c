//direccion que ocupan %p

#include <stdio.h>

void main(){
	char c1;
	int num1;
	float f1;
	printf("Ingresa un caracter: ");
	scanf("%c",&c1);
	printf("Ingresa un numero entero: ");
	scanf("%d",&num1);
	printf("Ingresa un numero: ");
	scanf("%f",&f1);
	printf("La direccion que ocupa tu caracter es: %p\n",&c1);
	printf("La direccion que ocupa tu numero entero es: %p\n",&num1);
	printf("La direccion que ocupa tu numero es: %p\n",&f1);
	
	
	
	
	
	
	
}