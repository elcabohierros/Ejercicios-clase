//colores

#include <stdio.h>

void main(){
	char c1;
	printf("Ingrese un cararacter: ");
	scanf("%c",&c1);
	switch(c1){
		case'b':
		case'B': printf("Blanco");
		break;
		case'R':
		case'r': printf("Rojo");
		break;
		case'N':
		case'n': printf("Naranja");
		break;
		case'V':
		case'v': printf("Verde");
		break;
		default: printf("No hay color asignado");
	}
	
	
	
	
}