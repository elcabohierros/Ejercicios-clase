//Ejercicio clase
 #include <stdio.h>
 
 void main(){
	 int num1;
	 int num2;
	 printf("Ingrese un numero: ");
	 scanf("%d",&num1);
	 num2 = num1 * -1;
	 printf("Tus numeros en positivo y negativo: %d, %d\n",num1,num2);
	 printf("Tus numeros en hexadecimal\n");
	 printf("%d = %x\n",num1,num1);
	 printf("%d = %x\n",num2,num2);
 }