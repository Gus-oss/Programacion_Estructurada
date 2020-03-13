#include<stdio.h>
//Este programa calcula los n primeros multiplos del numero n
//donde n va a ser ingresada por el usuario 

int main()
{
	//***********************************************
	//Declaracion de variables
	int n, i, b;
	//***********************************************
	//Cuerpo del programa
	//**********************************************
	printf("Ingresa el numero: \n");
	scanf("%d", &b);
	printf("Ingresa el numero de multiplos: \n"); 
	scanf("%d", &n);
	for(i=1; i<=n;i++){
	printf("%d * %d = %d \n" ,b ,i ,b*i ); 
    }
    //***********************************************
 
return 0; 
	
}
