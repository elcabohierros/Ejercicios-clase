//Verificador de input

#include <stdio.h>

void main(){
	char c1,c2,c3;
	printf("Ingresa tres letras en separadas por comas: ");
	scanf("%c,%c,%c",&c1,&c2,&c3);

	if (((c1>='a') || (c1>='A')) && ((c1<='z') || (c1<='Z')) && ((c2>='a') || (c2>='A')) && ((c2<='z') || (c2<='Z')) && ((c3>='a') || (c3>='A')) && ((c3<='z') || (c3<='Z'))){
		printf("Se introdujeron tres letras correctamente");
	}else{
		printf("Se introdujeron los datos incorrectamente");
	}
	
}