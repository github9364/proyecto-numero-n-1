#include<stdio.h>

int main()
{
	float a, b, c, c1, c2, c3;
	
	printf("Este programa suma, resta, multiplica y divide 2 numeros \n");
	
	printf("Ingresa el primer numero : \n");
	scanf("%f",&a);
	
	printf("Ingresa el segundo numero : \n");
	scanf("%f",&b);
	
	c=a+b;
	c1=a-b;
	c2=a*b;
	
	if(c3 < 0)
	{
		printf(" \n Error en la division \n ");
	}
	else
	{
		c3=a/b;
		printf("\n El resultado de la division es: %.2f ",c3);
	}
	
	printf("\n El resultado de la suma es: %.2f ",c);
	printf("\n El resultado de la resta es: %.2f ",c1);
	printf("\n El resultado de la multiplicacion es: %.2f ",c2);
	
	return 0;
}
