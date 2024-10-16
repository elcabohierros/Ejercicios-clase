/*Operaciones lógicas, aritméticas y relacionales
Autor: Santiago Martín*/

#include <stdio.h>

void main(){
	int num1,num2,resultado;
	printf("Ingrese un numero entero: ");
	scanf("%d",&num1);
	printf("Ingrese otro numero entero: ");
	scanf("%d",&num2);
	resultado= (num1>=num2);
	printf("El primer numero es mayor que el segundo, si(1) o no(0): %d\n",resultado);
	resultado= ((num1<100)&&(num2>50));
	printf("El primer numero es menor que 100 y el segundo mayor que 50, si(1) o no (0): %d\n",resultado);
	resultado= (((num1==0)||(num2==0))||(((num1%2)==0)&&((num2%2)==0)));
	printf("Alguno de los numeros es igual a 0 o los dos numeros son pares, si(1) o no(0): %d\n",resultado);
	resultado= (num1==num2);
	printf("Los dos numeros son iguales, si(1) o no(0): %d\n",resultado);
	resultado= (((num1%2)==0)&&((num2%2)==0));
	printf("Los dos numeros son pares, si(1) o no(0): %d\n",resultado);
	
	
	
}