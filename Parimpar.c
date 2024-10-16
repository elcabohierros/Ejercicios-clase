//Par impar

#include <stdio.h>

void main(){
	int num1, total=0;
	printf("Ingresa un numero: ");
	scanf("%d",&num1);
	total = num1 % 2;
	if (total == 0){
		printf("EL numero es par");
	}else{
		printf("El numero es impar");
	}
	
	
	
	
}