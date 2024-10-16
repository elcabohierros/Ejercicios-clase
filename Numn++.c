//n++ ++n

#include <stdio.h>

void main(){
	int num1,num2;
	printf("Introduzca un numero: ");
	scanf("%d",&num1);
	printf("Introduzca otro numero: ");
	scanf("%d",&num2);
	printf("El primer numero %d\n",num1++);
	printf("El segundo numero %d\n",++num2);
	
}