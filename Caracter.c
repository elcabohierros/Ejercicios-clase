//Programa conversion caracter a numero ascii
//Autor: Santiago Martin

#include <stdio.h>
char c2,caracter;
int diferencia2;
int diferencia;
int seguir;
void main(){
	
	
	/*printf("Ingresa un caracter en mayuscula: ");
	scanf("%c",&caracter);
	printf("Este es el caracter : %c\n",caracter);
	printf("Este es el caracter  como numero ascii: %d\n", caracter);
	diferencia = 'a'-'A';
	printf("Este es el caracter en minuscula: %c\n",caracter + diferencia);*/
	
	printf("Ingresa un numero: ");
	scanf("%c",&c2);	
	printf("Este es el numero: %c\n",c2);
	printf("Este es el numero como numero ascii: %d\n", c2);
	diferencia2 = c2 - '0';
	printf("Este es el numero: %d\n", diferencia2);

	

}



	