/*
Program notas de clase
*/

#include <stdio.h>

void main (){

	int notas;
	printf("Que nota has sacado?: ");
	scanf("%d",&notas);
	printf("Has sacado un %d\n", notas);
	if (notas >= 9){
		printf("Has aprobado con un sobresaliente\n");
	}else{
		if (notas>=5){
			printf("Has aprobado\n");
		}else{
			printf("Has suspendido\n");
		}
	}
	
	

}