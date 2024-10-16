//Letras

#include <stdio.h>

void main(){
	char L1='A',L2='a',L3='Z',L4='z',L5;
	int letra;
	printf("Las letras en Ascii: A= %d, a= %d, Z= %d y z= %d\n",L1,L2,L3,L4);
	printf("Ingrese un caracter: ");
	scanf("%c",&L5);
	if ((L1<=L5)&&(L5<=L2)){
		printf("Has ingresado una letra mayuscula\n");
	}else{
		if ((L3<=L5)&&(L5<=L4)){
		printf("Has ingresado una letra minuscula\n");
		}else{
		printf("No has ingresado una letra\n");
		}
	}
	
	
	
}