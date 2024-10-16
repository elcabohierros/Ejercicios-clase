/*Clave de 3 caracteres: 1 Mayus, 1 Minus y 1 Numero
Autor: Santiago Martín */

#include <stdio.h>

void main(){
	char c1,c2,c3;
	printf("Introduzca la clave de 3 caracteres separados por guiones: ");
	scanf("%c-%c-%c",&c1,&c2,&c3);
	if ((('A'<=c1)&&(c1<='Z'))&&(('a'<=c2)&&(c2<='z'))&&(('0'<=c3)&&(c3<='9'))){
		printf("Clave correcta\n");
	}else{
		if ((('A'<=c1)&&(c1<='Z'))&&(('a'<=c3)&&(c3<='z'))&&(('0'<=c2)&&(c2<='9'))){
			printf("Clave correcta\n");
		}else{
			if ((('A'<=c2)&&(c2<='Z'))&&(('a'<=c1)&&(c1<='z'))&&(('0'<=c3)&&(c3<='9'))){
				printf("Clave correcta\n");
			}else{
				if ((('A'<=c2)&&(c2<='Z'))&&(('a'<=c3)&&(c3<='z'))&&(('0'<=c1)&&(c1<='9'))){
					printf("Clave correcta\n");
				}else{
					if ((('A'<=c3)&&(c3<='Z'))&&(('a'<=c1)&&(c1<='z'))&&(('0'<=c2)&&(c2<='9'))){
						printf("Clave correcta\n");
					}else{
						if ((('A'<=c3)&&(c3<='Z'))&&(('a'<=c2)&&(c2<='z'))&&(('0'<=c1)&&(c1<='9'))){
							printf("Clave correcta\n");
						}else{
							printf("Clave incorrecta\n");
						}
					}
				}
			}
		}
	}
			
	
	
	
	
}