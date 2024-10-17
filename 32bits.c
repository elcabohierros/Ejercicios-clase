/*Descomposición de un numero de 32 bits en 4
Autor: Santiago Martín*/

#include <stdio.h>

void printBinary(int number, int positions); 
int number,unos=511,number2=0,number3=0,number4=0,number5=0;

void main(){
	printf("Introduce un numero: ");
	scanf("%d",&number);
	number2= number & unos;
	number3= (number>>8) & unos;
	number4= (number>>16) & unos;
	number5= (number>>24) & unos;
	printf("Primeros 8 (0-7) bits: ");
	printBinary(number2,8);
	printf("\n");
	
	printf("Segundos 8 (8-15) bits: ");
	printBinary(number3,8);
	printf("\n");
	
	printf("Terceros 8 (16-23) bits: ");
	printBinary(number4,8);
	printf("\n");
	
	printf("Cuartos 8 (24-31) bits: ");
	printBinary(number5,8);
	printf("\n");
	
}

/*
Asignar 8 al parámetro positions, si se desean mostrar los 8
bits menos significativos (primeros). Asignar 32 si se desea ver
el número de 32 bits completo.
*/
void printBinary(int number, int positions) {
 // Assuming a 32-bit integer
 unsigned int mask = 1 << (positions -1); // Start with the leftmost bit
 int i = 0;
 while(i < positions){
 // Print '1' or '0' based on the current bit
 if (number & mask) {
 printf("1");
 } else {
 printf("0");
 }
 // Shift the mask to the right by one bit
 mask >>= 1;
 i++;
 }
 printf("\n");
}
