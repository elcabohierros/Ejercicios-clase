/*Programa análisis entero de tres dígitos
Autor: Santiago Martín*/

#include <stdio.h>

void main(){
	int num=0, centenas=0, decenas=0;
	printf("Introduce un entero de tres digitos: ");
	scanf("%d",&num);
	centenas= num / 100;
	//printf("%d\n",centenas);
	decenas= (num - (centenas*100))/10;
	//printf("%d\n",decenas);
	num= num - (centenas*100) - (decenas*10);
	//printf("%d\n",num);
	if((centenas<=9)&&(centenas>0)){
		if((num==centenas)&&(centenas==decenas)){
			printf("El numero tiene los tres digitos iguales\n");
		}else{
			if(((num==centenas)&&(centenas!=decenas))||((num==decenas)&&(centenas!=decenas))||((decenas==centenas)&&(num!=centenas))){
				printf("El numero tiene dos digitos iguales\n");
			}else{
				printf("El numero tiene tres digitos unicos\n");
			}
		}
	}else{
		printf("Escribe un numero de tres cifras");
	}
		
	
	
	
}