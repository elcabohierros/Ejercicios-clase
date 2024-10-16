//Variado

#include<stdio.h>
#include<float.h>

void main(){
	int num1,num2;
	float float1,float2;
	char caracter1,caracter2;
	
	printf("Ingresa un caracter: ");
	scanf("%c",&caracter1);
	printf("Ingresa un numero entero: ");
	scanf("%d",&num1);
	printf("Ingresa un numero real: ");
	scanf("%f",&float1);
	getchar();
	printf("Este es tu caracter: %c, tu numero entero: %d, y tu numero real: %f\n",caracter1,num1,float1);
	printf("A la derecha %-7d un poco mas\n",num1);
	printf("Ingresa un caracter, numero entero, y numero real nuevos: ");
	scanf("%c %d %f",&caracter2,&num2,&float2);
	getchar();
	printf("Este es tu nuevo caracter: %c, tu nuevo numero entero: %d, y tu nuevo numero real: %f\n",caracter2,num2,float2);
	
	
}
	