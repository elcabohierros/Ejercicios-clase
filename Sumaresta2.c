//Suma resta
//Autor: Santiago Martin

#include <stdio.h>

void main(){
	char operacion;
	float f1,f2,total;
	printf("Ingresa un numero real seguido de '+' o '-' seguido de otro numero: ");
	scanf("%f %c %f",&f1,&operacion,&f2);
	
	if (operacion == '+'){
		total = f1+f2;
		printf("La suma = %f\n",total);
	}else{
		total = f1-f2;
		printf("La resta = %f\n",total);
	}
		
		
	
}