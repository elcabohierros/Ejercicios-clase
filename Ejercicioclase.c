//Ejercicio clase de float + int + char
//Autor: Santiago Martin
#include <stdio.h>


void main(){
	int num1;
	float num2;
	char caracter;
	printf("Ingresa un caracter: ");
	scanf("%c",&caracter);
	printf("Ingresa un numero entero: ");
	scanf("%d",&num1);
	printf("Ingresa un numero real: ");
	scanf("%f",&num2);
	printf("Este es tu numero entero: %d, este es tu numero real: %f, y este es tu caracter: %c\n",num1,num2,caracter);
}