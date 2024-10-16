/*
Program suma o resta de dos numeros
*/

#include <stdio.h>

void main (){
	int num1,num2,operacion;
	printf("Escribe el primer numero: ");
	scanf("%d",&num1);
	printf("Escribe el segundo numero: ");
	scanf("%d",&num2);
	printf("Numero 1: %d, Numero 2: %d\n",num1,num2);
	if (num1>=num2){
		printf("El numero 1 es mayor al numero 2, por tanto realizaremos su resta\n");
		operacion = num1-num2;
		printf("El resultado es %d\n", operacion);
	}else{
		printf("El numero 2 es mayor al numero 1, por tanto realizaremos su suma\n");
		operacion = num1+num2;
		printf("El resultado es %d\n", operacion);
	}
}