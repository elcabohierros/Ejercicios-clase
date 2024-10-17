//Random

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
	srand(time(NULL));
	int num,random;
	random = rand() % 11;
	printf("Ingresa un numero entre 0 y 10: ");
	scanf("%d",&num);
	while(random!=num){
		printf("No has adivinado el numero\n");
		printf("Ingresa un numero entre 0 y 10: ");
		scanf("%d",&num);
	}
	printf("Adivinaste");
	
	
	
	
}
	