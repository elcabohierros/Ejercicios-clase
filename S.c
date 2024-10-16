// Es S mayus o minus

#include <stdio.h>

void main(){
	char c1;
	printf("Ingrese un cararacter: ");
	scanf("%c",&c1);
	if ((c1=='S')||(c1=='s')){
		printf("%c\n",c1);
	}else{
		printf("El caracter %c no es correcto\n",c1);
	}
	
}