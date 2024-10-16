/*
Program comparacion de 3 números
*/

#include <stdio.h>

void main (){
	int numero1;
	int numero2;
	int numero3;
			
	//podria haber puesto int num1,num2,num3
	printf("Escribe el primer numero: ");
	scanf("%d",&numero1);
	printf("Escribe el segundo numero: ");
	scanf("%d",&numero2);
	printf("Escribe el tercer numero: ");
	scanf("%d",&numero3);
	if((numero1==numero2)&&(numero2==numero3)){
		printf("Todos los numeros son iguales\n");
	}else{
		if((numero1==numero2)&&(numero1>numero3)){
			printf("El numero 1 y el numero 2 son iguales y mayores que el tercero, el numero mayor es el: %d\n",numero1);
		}if((numero1==numero2)&&(numero1<numero3)){
			printf("El numero 1 y el numero 2 son iguales y menores que el tercero\n");
		}if((numero3==numero2)&&(numero2>numero1)){
			printf("El numero 2 y el numero 3 son iguales y mayores que el primero, el numero mayor es el: %d\n",numero2);
		}if((numero3==numero2)&&(numero2<numero1)){
			printf("El numero 2 y el numero 3 son iguales y menores que el primero\n");
		}if((numero1==numero3)&&(numero3>numero2)){
			printf("El numero 1 y el numero 3 son iguales y mayores que el segundo, el numero mayor es el: %d\n",numero1);
		}if((numero1==numero3)&&(numero3<numero2)){
			printf("El numero 1 y el numero 3 son iguales y menores que el segundo\n");
		}if ((numero1>numero2) && (numero1>numero3)){
		printf("El numero mayor es el primer numero: %d\n",numero1);
		}else{
		if ((numero2>numero1) && (numero2>numero3)){
			printf("El numero mayor es el segundo numero: %d\n",numero2);
		}if((numero3>numero1) && (numero3>numero2)){
			printf("El numero mayor es el tercer numero: %d\n",numero3);
		}
		}
	}
	

}