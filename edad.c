//Edad

#include <stdio.h>

void main(){
	int edad=0,res=1;
	printf("Introduce tu edad: ");
	res=scanf("%d",&edad);
	
	while (res==0){
		while(getchar()!='\n');
		printf("Introduce tu edad: ");
		res=scanf("%d",&edad);
	}
	
	
	
	
}