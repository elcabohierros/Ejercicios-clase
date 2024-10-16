//Carretera en metros  +

#include <stdio.h>

void main(){
	int km,hm,dm,m,total;
	printf("Escribe los kilometros, los hectometros,los decametros y los metros que mide una carretera separado por comas: ");
	scanf("%d,%d,%d,%d",&km,&hm,&dm,&m);
	km=1000*km;
	hm=100*hm;
	dm=dm*10;
	total=km+hm+dm+m;
	printf("La distancia de la carretera en metros es: %d",total);
	
	
	
}