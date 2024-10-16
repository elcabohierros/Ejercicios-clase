//Conversion

#include <stdio.h>


void main(){
	int num1=0,num2=0;
	float f1,f2;
	printf("Ingresa un numero entero: ");
	scanf("%d",&num2);
	printf("Ingresa un numero real: ");
	scanf("%f",&f1);
	num1 = f1;
	printf("Num1 ahora vale: %d\n",num1);
	f2 = num2;
	printf("F2 ahora vale: %f\n",f2);
	f1 = num1 + f1;
	printf("F1 ahora vale: %f\n",f1);
	f2= (num2/num1);
	printf("F2 ahora vale: %f\n",f2);
	f2= (num2/f1);
	printf("F2 ahora vale: %f\n",f2);
	
}