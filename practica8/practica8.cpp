#include<stdio.h>
// este programa calcula los numeros primos y no primos 
int main()
{
	//¨********************************************
	//Declaracion de variables
	int L,i,v;
	int A[100];
	//*******************************************
	// Cuerpo del programa
	printf("Ingresa el numero de elementos: \n");
	scanf("%d",&L);
	if(L<100&&L>0){
		for (i=0;i<L; i++){
			printf("Ingresa el valor:%d\n", i+1);
			scanf("%d", &v);
			if(!(v%2==0)){
				printf("El numero %d es primo\n", i);
				A[i]= v;
				

			} else {
			A[i]=0 ;
		}
	}
		for (i=0; i<L; i++){
			printf("Posicion [%d] y el numero es: %d\n ", i, A[i]);
		}
		} else {
			printf("Ingrese un valor menor o igual a 100");
		}
	//**********************************************	
	return 0;
 }
