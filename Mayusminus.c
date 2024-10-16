//Programa mayus, minus sin if

#include <stdio.h>

void main(){
	char c1;
	int result,result2,result3;
	printf("Ingresa una letra: ");
	scanf("%c",&c1);
	result = (('A'<= c1) && (c1<='Z'));
	printf("Es mayuscula: %d\n", result);
	result2= (('a'<=c1) && (c1<='z'));
	printf("Es minuscula: %d\n", result2);
	result3 = !((result) || (result2));
	printf("No es ni minuscula ni mayuscula: %d\n", result3);
	
}