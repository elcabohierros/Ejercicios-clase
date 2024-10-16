//Cuentaletras

#include <stdio.h>

void main(){
	int num=0;
	char letra='\0';
	printf("Ingrese una palabra: ");
	while(letra!='\n'){
	letra=getchar();
	num++;
	}
	num = num -1;
	printf("Tu palabra tiene %d caracteres",num);
	
	
	
	
}