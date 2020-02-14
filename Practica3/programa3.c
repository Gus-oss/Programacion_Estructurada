#include<stdio.h>

int main ()
{
	char c; 
	printf("Ingresa character: "); 
	c = getchar();
	
	int a = (int) c;
	
	if(48 <= a && a <=57){ 
	printf("Es un numero"); 
	
	}else{ 
	   if(65<=a && a<=90){ 
	   printf(" se ingreso un dato alfanumerico");
      }else {
		if(97<=a && a<= 122)
		{ 
		    printf("Dato alfanumerico"); 
		    }else{ 
		    
		 printf(" es un simbolo");
	}
}
}

putchar(c);
printf("\n");
}
