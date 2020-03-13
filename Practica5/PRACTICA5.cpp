#include<stdio.h>
// este programa calcula la suma de n elementos con while 

int main()
{
	//****************************************
	//Declaracion de variables
	int num, L, i=1; 
	int SUM = 0 ; 
	//****************************************
	//Cuerpo del programa
	printf("Ingresa un numero de elementos: \n"); 
	scanf("%d", &num);
	while(i<=num){
		printf("Ingresa el numero%d: \n",i); 
		scanf("%d", &L); 
		
		SUM= SUM + L ;
		i++ ;

	}
	//***************************************
	printf("Suma de los elementos: %d", SUM);
	return 0;
}
