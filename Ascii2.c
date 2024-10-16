//Ascii

#include <stdio.h>

void main(){
	char c1,c2,c3;
	int diferencia;
	printf("Ingresa tres caracteres separados por comas: ");
	scanf("%c,%c,%c",&c1,&c2,&c3);
	diferencia= 'a'-'A';
	if ('A'<=c1 && c1<='Z'){
		c1 = c1 +diferencia;
	}if ('A'<=c2 && c2<='Z'){
		c2 = c2 + diferencia;
	}if ('A'<=c3 && c3<='Z'){
		c3 = c3 + diferencia;
	}if ((c1>=c2 && c1>=c3) && (c2>=c3)){
		printf("%c,%c,%c\n",c3,c2,c1);
	}else{
		if ((c1>=c2 && c1>=c3) && (c3>=c2)){
			printf("%c,%c,%c\n",c2,c3,c1);
		}else{
			if ((c2>=c1 && c2>=c3) && (c1>=c3)){
				printf("%c,%c,%c\n",c3,c1,c2);
			}else{
				if ((c2>=c1 && c2>=c3) && (c3>=c1)){
					printf("%c,%c,%c\n",c1,c3,c2);
				}else{
					if ((c3>=c1 && c3>=c2) && (c1>=c2)){
						printf("%c,%c,%c\n",c2,c1,c3);
					}else{
						if ((c3>=c1 && c3>=c2) && (c2>=c1)){
							printf("%c,%c,%c\n",c1,c2,c3);
						}
					}
				}
			}
		}
	}
	
		
	
	
}