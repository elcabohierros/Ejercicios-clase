//float y double

#include<stdio.h>

void main (){
	float f1,f2;
	double d1,d2;
	f1 =110.1;
	d1=110.1;
	printf("Ingrese dos numeros con un decimal: ");
	scanf("%f %lf",&f2,&d2);
	printf("El float: %f\n",f1);
	printf("El double: %lf\n",d1);
	printf("El float que tu has escrito: %f\n",f2);
	printf("El double que tu has escrito: %lf\n",d2);
}