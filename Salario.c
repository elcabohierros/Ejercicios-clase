//Salario

#include <stdio.h>

void main(){
	float salario, incremento,subida;
	printf("Introduzca su salario actual: ");
	scanf("%f",&salario);
	printf("Introduzca el incremento en porcentaje entre 0 y 1: ");
	scanf("%f",&incremento);
	subida = salario*(1+incremento);
	printf("El sueldo tras la subida es: %f\n", subida);
	
}