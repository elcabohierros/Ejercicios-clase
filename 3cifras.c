//Tres cifras

#include <stdio.h>

void main(){
	int num1;
	printf("Ingrese un numero de tres cifras: ");
	scanf("%d",&num1);
	num1 = num1/100;
	if (num1==1){
		printf("El numero de las centenas es uno");
	}else{
		if (num1==2){
			printf("El numero de las centenas es: dos");
		}else{
			if (num1==3){
				printf("El numero de las centenas es: tres");
			}else{
				if (num1==5){
					printf("El numero de las centenas es: cinco");
				}else{
					printf("El numero de las centenas no es ni uno ni dos ni tres ni cinco");
				}
			}
		}
	}
	
	
	
}
