//Bits

#include <stdio.h>

void main(){
	unsigned char c1,c2=1,result=0,result2=0;
	printf("Ingrese un caracter: ");
	scanf("%hhu",&c1);
	printf("Tu caracter: %hhu\n", c1);
	result= c1 >> 2;
	printf("%hhu\n",result);
	result2 = (result & c2);
	printf("El tercer bit es 1 o 0: %hhu\n",result2);
	
	
	
	
	
	
}