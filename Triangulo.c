//Area triangulo

#include <stdio.h>

void main(){
	int base;
	float area, altura;
	printf("Ingrese la altura de su triangulo: ");
	scanf("%f",&altura);
	printf("Ingrese la base de su triangulo: ");
	scanf("%d",&base);
	area = (base * altura)/2;
	printf("El area de tu triangulo es: %f\n",area);
	
	
}