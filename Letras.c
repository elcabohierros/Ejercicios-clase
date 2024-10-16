//Distancia entre letras

#include <stdio.h>
void main(){
	char c1,c2;
	int distancia,a=97,z=122;
	printf("Ingresa dos letras en minuscula separadas por comas: ");
	scanf("%c,%c",&c1,&c2);
	distancia = 25-(c1-a + z-c2);
	if (distancia>=0){
		printf("La distancia entre las letras es de: %d",distancia);
	}else{
		distancia = distancia *-1;
		printf("La distancia entre las letras es de: %d",distancia);
	}
		
		
	
	
	
}