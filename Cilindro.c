//Area Base y volumen cilindro
#include <stdio.h>
#include <float.h>
#define PI 3.141516

void main(){
	float radio,base,volumen;
	double altura;
	printf("Ingrese un radio para su cilindro: ");
	scanf("%f",&radio);
	printf("Ingrese una altura para su cilindro: ");
	scanf("%lf",&altura);
	
	base = PI * radio * radio;
	volumen = base * altura;
	printf("El area de la base de tu clindro es: %f metros cuadrados\n", base);
	printf("El volumen de tu cilindro es: %f metros cuadrados\n", volumen);
}