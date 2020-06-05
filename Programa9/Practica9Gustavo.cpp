/*Librerias utilizadas*/
/**********************/
#include<stdio.h>
#include<string.h>
/**********************/

int main()
{
	/****************************************************************************************************************************/
	/* Declaracion de variables*/
	char Alumnos[][70]={"","","","","","","","",""};
	char DATOS[50];
	int I;
	int O=0;
	int J=0;
    /***************************************************************************************************************************/
    /*Presentacion del programa al usuario*/
    printf("*************************************************************************************************************\n");
    printf("Bienvendio Usuario:\n");
	printf("Favor de ingresar los valores solicitados del alumno:\n");
	printf("***************************************************************************************************************");
	printf("1: MatriculaAlumno\n2: PrimerNombre\n3: Apellido\n4: Cumpleaños\n5: Escuela\n6: Grado\n7: Carrera\n8: Genero\n\n");
	/**************************************************************************************************************************/
	/*Cuerpo del programa*/
	do{	
	printf("Datos alumno %d\n",J+1);
		for(I=0;I<9;I++)
		{	
			printf("Dato [%d]\n",I+1);	
			fflush(stdin);
			scanf("%s",DATOS);
			strcpy(Alumnos[I],DATOS);
		}
	
		printf("Datos Alumno%d\n",J);
		for(I=0;I<9;I++)
		{	
			printf("Dato: %d %s\n",I+1,Alumnos[I]);	
	
		}
	
		printf("1=Agregar otro alumno  2=salir\n");
		scanf("%d",&O);
		if(O==1)
		{
			J=J+1;
			
		}
	}while(O==1);
	/***************************************************************************************************************************/     
	/*Fin del programa*/     
	return 0;
}
    /***************************************************************************************************************************/
