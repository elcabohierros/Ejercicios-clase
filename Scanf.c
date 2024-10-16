//Programa de clase de scanf

#include<stdio.h>

void main(){
	int num1=0,num2=0,num3=0,num4=0,resultado=0;
	printf("Escribe 4 numeros enteros separados por puntos: ");
	resultado= scanf("%d.%d.%d.%d",&num1,&num2,&num3,&num4);
	printf("Numero de numeros: %d\n",resultado);
	printf("Tus numeros: %d, %d, %d, %d\n",num1,num2,num3,num4);
	
	
	
	
}