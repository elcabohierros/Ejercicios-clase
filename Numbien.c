//Hasta que acierte la multiplicación
//Autor: Santiago Martín

#include <stdio.h>

void main(){
	int num1, total1, total2;
	printf("Ingrese un numero: ");
	scanf("%d",&num1);
	printf("Ingrese tu numero x5: ");
	scanf("%d",&total1);
	total2= num1 *5;
	while(total1 != total2){
		printf("Error, ingrese tu numero x5: ");
		scanf("%d",&total1);
	}
	printf("Bien");
	
	
	
	
}