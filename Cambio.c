//Cambio de valores

#include <stdio.h>

void main(){
	int num1=0,num2=0;
	printf("Ingresa un numero entero: ");
	scanf("%d",&num1);
	printf("Ingresa un numero entero: ");
	scanf("%d",&num2);
	num1 = num2 + num1;
	num2 = num1 - num2;
	num1= num1 - num2;
	printf("Tu primer numero: %d, tu segundo: %d\n",num1,num2);
	
	
	
}