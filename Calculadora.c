//Calculadora

#include <stdio.h>

void main(){
	printf("Has abierto la calculadora\n");
	int operacion;
	int resultado;
	printf("Pulsa 1 para sumar,2 para restar, 3 para multiplicar y 4 para dividir: ");
	scanf("%d",&operacion);
	if((operacion!=1) && (operacion!=2) && (operacion!=3) && (operacion!=4)){
		printf("Seleccione una operacion valida");
	}else{
		int num1,num2;
		printf("Escriba el primer numero que desea operar: ");
		scanf("%d",&num1);
		printf("Escriba el segundo numero que desea operar: ");
		scanf("%d",&num2);
		if(operacion==1){
			resultado = num1 + num2;
			printf("El resultado de la suma es: %d\n", resultado);
		}if(operacion==2){
			resultado = num1 - num2;
			printf("El resultado de la resta es: %d\n", resultado);
		}if(operacion==3){
			resultado = num1 * num2;
			printf("El resultado de la multiplicacion es: %d\n", resultado);
		}if(operacion==4){
			resultado = num1 / num2;
			printf("El resultado de la division es: %d\n", resultado);
		}
	}
	
	
	
	
	
	
}