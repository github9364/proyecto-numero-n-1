#include<stdio.h>

int main()
{
	int a, b, c, c1, c2, c3;
	
	printf("Este programa suma, resta, multiplica y divide 2 numeros \n");
	
	printf("Ingresa el primer numero : \n");
	scanf("%d",&a);
	
	printf("Ingresa el segundo numero : \n");
	scanf("%d",&b);
	
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
		printf("\n El resultado de la division es: %d ",c3);
	}
	
	printf("\n El resultado de la suma es: %d ",c);
	printf("\n El resultado de la resta es: %d ",c1);
	printf("\n El resultado de la multiplicacion es: %d ",c2);
	
	return 0;
}
