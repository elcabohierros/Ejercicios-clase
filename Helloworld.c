/*
Program Hello World
*/

#include <stdio.h>

void main (){
	int caracter;
	//char, es un tipo de variable para un caracter, como int o float para numeros
	 printf("Desea imprimir el texto?: ");
	 //%c es pedir un solo caracter 
	 //%d para numeros
	 scanf("%d",&caracter);
	 printf("El usuario ha escrito %d\n", caracter);
	 //en el if se usa ' para un solo caracter y " para una cadena de estos
	 // '||' significa or y && significa and
	 if ((caracter==1) || (caracter==5)){
		 printf("Hola mundo");
	 } else{
		 printf("Texto no impreso");
	 }
	 
	
	
	
}