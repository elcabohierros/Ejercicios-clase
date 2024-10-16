/*Programa calificaciones de un alumno
Autor: Santigo Martín*/

#include<stdio.h>

void main(){
	float prueba1,prueba2,prueba3,examenfinal,asistencia,resultadopruebas,resultadofinal;
	printf("Que sacaste en la primera prueba? ");
	scanf("%f",&prueba1);
	printf("Que sacaste en la segunda prueba? ");
	scanf("%f",&prueba2);
	printf("Que sacaste en la tercera prueba? ");
	scanf("%f",&prueba3);
	printf("Que sacaste en el examen final? ");
	scanf("%f",&examenfinal);
	printf("Cual fue tu porcentaje de asistencia? ");
	scanf("%f",&asistencia);
	resultadopruebas= (prueba1 * 0.2) + (prueba2 * 0.4) + (prueba3 * 0.4);
	resultadofinal= (examenfinal * 0.55) + (resultadopruebas * 0.4) + ((asistencia/10) * 0.05);
	if ((prueba1>=0)&&(prueba1<=10)&&(prueba2>=0)&&(prueba2<=10)&&(prueba3>=0)&&(prueba3<=10)&&(examenfinal>=0)&&(examenfinal<=10)&&(asistencia>=0)&&(asistencia<=100)){
		if((examenfinal>=4)&&(resultadopruebas>=5)&&(resultadofinal>=5)&&(asistencia>=80)){
			printf("Has aprobado!!");
		}else{
			if((resultadopruebas<5)&&(examenfinal>=4)&&(asistencia>=80)){
				printf("Has suspendido debido a tener menos de un 5 de media en las pruebas\n");
			}else{
				if((resultadopruebas>=5)&&(examenfinal<4)&&(asistencia>=80)){
					printf("Has suspendido debido a tener menos de un 4 en el examen final\n");
				}else{
					if((resultadopruebas>=5)&&(examenfinal>=4)&&(asistencia<80)){
						printf("Has suspendido debido a tener menos de un 80 por ciento de asistencia\n");
					}else{
						if((resultadopruebas<5)&&(examenfinal<4)&&(asistencia>=80)){
							printf("Has suspendido debido a tener menos de un 5 de media en las pruebas y menos de un 4 en el examen final\n");
						}else{
							if((resultadopruebas<5)&&(examenfinal>=4)&&(asistencia<80)){
								printf("Has suspendido debido a tener menos de un 5 de media en las pruebas y menos de un 80 por ciento de asistencia\n");
							}else{
								if((resultadopruebas>=5)&&(examenfinal<4)&&(asistencia<80)){
									printf("Has suspendido debido a tener menos de un 4 en el examen final y menos de un 80 por ciento de asistencia\n");
								}else{
									if((resultadopruebas<5)&&(examenfinal<4)&&(asistencia<80)){
										printf("Has suspendido debido a que has sacado menos de un 5 de media en las pruebas, menos de un 4 en el examen final y has tenido menos de un 80 por ciento de asistencia\n");
									}else{
										printf("Has suspendido por tener una media total inferior a 5\n");
									}
								}
							}
						}
					}
				}
			}
		}
		
	}else{
		printf("Introduzca bien los valores, las pruebas y examen entre 0 y 10 y la asistencia entre 0 y 100\n");
	}
	
	
	
	
}