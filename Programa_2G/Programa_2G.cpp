/* Segundo programa de laboratorio de programacion estructurada */ 
#include<stdio.h>
#include<stdbool.h>
/*#include<conio.h> */
int main()                             /*Declaracion de variables */ 
{   
   int a=2;
   int b= 3; 
   int c;
   float g= 2.6, f=3.1; 
   double h= 2.55, j=3.44;
   char A=4; 
   bool Q=true, W= false;
   c= a+b;
    
   printf("Imprecion de operaciones con numeros enteros:\n");
   printf("%d + %d = %d\n", a,b,c);   /* Imprecion de operaciones con numeros enteros*/ 
   printf("%d - %d = %d\n", a,b, a-b);
   printf("%d * %d = %d\n", a,b,a*b);
   printf("%d / %d = %f\n", a,b, a/b );
   
   printf("Imprecion de operaciones con numeros flotantes:\n");
   printf("%f + %f = %.2f\n", g,f,g+f);  /*Imprecion de operaciones con flotantes */   
   printf("%f - %f = %.2f\n", g,f,g-f);
   printf("%f * %f = %.2f\n", g,f,g*f);
   printf("%f / %f = %.2f\n", g,f,g/f);
   
   printf("Imprecion de operaciones con numeros double :\n");
   printf("%f + %f = %f\n", h,j,h+j);   /* Imprecion de operaciones con numeros double*/ 
   printf("%f - %f = %f\n", h,j, h-j);
   printf("%f * %f = %f\n", h,j,h*j);
   printf("%f / %f = %f\n", h,j, h/j );
   
   printf("Imprecion de operaciones con numeros con char;\n "); 
   printf("A <<1  = %d\n", A,A<<1);   /* Imprecion de operaciones con numeros char */ 
   printf("A >>1 = %d\n", A, A>>1);
   printf("A * 1 = %d\n", A,A*1);
   
   printf("Imprecion de operaciones con numeros con boleanos;\n "); 
   printf("Q && W = %d\n", Q&&W);   /* Imprecion de operaciones con numeros double*/ 
   printf("Q == W = %d\n", Q==W);
   printf("Q || W = %d\n", Q||W)             ;
   /*system("pause" );  */ 
   return 0; 
   
}
