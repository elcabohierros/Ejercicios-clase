//4 numeros flotantes y operadores
//Santiago Martin

#include <stdio.h>

void main (){
	int num1,num2,num3,num4;
	int res1,res2,res3,res4;
	printf("Introduzca un numero: ");
	scanf("%d",&num1);
	printf("Introduzca otro numero: ");
	scanf("%d",&num2);
	printf("Introduzca un numero: ");
	scanf("%d",&num3);
	printf("Introduzca otro numero: ");
	scanf("%d",&num4);
	res1 = (num1 > num2 && num1 >num3);
	printf("El primero es mayor que el segundo y tercero: %d\n", res1);
	res2 = ((num3*num3) < (num2*num4) || (num3*2)<num2);
	printf("El cuadrado del tercero es menor que el segundo por el cuarto o el tercero por 2 es menor que el segundo: %d\n", res2);
	res3 = ((num1%num4)>num3 && num1>num4);
	printf("El resto de la division num1/num4 es mayor que el tercero y el primero es mayor que el cuarto: %d\n",res3);
	res4 = !((num2/num4) != num1);
	printf("La division entre num2 y num4 no es distinto de num1: %d\n",res4);
	
	
}