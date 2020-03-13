#include<stdio.h>
//Este poograma calcula la suma de L numeros ingresados por el usuario
int main() 
{
	//*************************
	// Declaracion de variables
	int i=1; 
	int num, L;
	int sum = 0;
	//*************************
	//cuerpo del programa
	printf("Ingresa el numero de elementos");
	scanf("%d", &L);
	do{
		printf("Ingrese el numero: \n");
		scanf("%d", &num);
		sum = sum + num ;
		
		i++ ; 
	}while (i<=L);
	//*************************
	printf("La suma de los elementos ingresados es: %d", sum);
	return 0; 
	
}
