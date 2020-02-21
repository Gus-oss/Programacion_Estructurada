#include<stdio.h>

int main()
{
	int opcion, n1,n2,n3 ; 
	printf("Gustavo DE Jesús Escobar Mata\n");
	
	printf("1.- Suma\n2.-Resta\n3.-Multiplicacion\n4.-Divicion\n5.-Salir\n");
	printf("Ingrese opcion");
	scanf("%d", &opcion); 
	
	switch(opcion)
	{
		case 1: 
		printf("Ingrese el numero 1\n");
		scanf("%d" ,&n1);
		printf("Introduzca el numero 2\n");
		scanf("%d", &n2);
		n3=n1+n2;
		printf(" %d + %d = %d\n",n1,n2,n3);
		break;
	}
	switch(opcion)
	{
		case 2:
		printf("Ingrese el numero 1\n");
		scanf("%d" ,&n1);
		printf("Introduzca el numero 2\n");
		scanf("%d", &n2);
		n3=n1-n2;
		printf(" %d- %d = %d\n", n1,n2,n3);
		break;
	}
	switch(opcion)
	{
		case 3:
		printf("Ingrese el numero 1\n");
		scanf("%d" ,&n1);
		printf("Introduzca el numero 2\n");
		scanf("%d", &n2);
		n3=n1*n2;
		printf(" %d* %d = %d\n", n1,n2,n3);
		break;
	}
	switch(opcion)
	{
		case 4:
		printf("Ingrese el numero 1\n");
		scanf("%d" ,&n1);
		printf("Introduzca el numero 2\n");
		scanf("%d", &n2);
		n3=n1/n2;
		printf(" %d/ %d = %d\n", n1,n2,n3);
		break;
	}
  
 return 0;
}
