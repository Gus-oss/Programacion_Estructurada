/*Librerias utilizadas*/ 
/**********************/
#include<stdio.h>
#include<string.h>
/**********************/



/*Declaracion de variables*/
struct Datos{
	char MAT[70];
	char NOM[70];
	char APELLIDO[70];
	char CUMPL[70];
	char ESC[70];
	char GRAD[70];
	char CARRERA[70];
	char GEN[70]; 
}ALUMNOS[30];
/**********************************************************/
/* Inicio de programa */ 
int main()
{
	int P,I;
	printf("***************************************\n");
	printf("Bienvenido usuario\n");
	printf("Tecle los alumnos que dese registrar:  \n");
	printf("***************************************\n");
	scanf("%d",&P);
	/*****************************************************/
	/* primer for*/
	for(I=0;I<P;I++)
	{
		printf("Alumno: %d\n",I+1);
		printf("Tecle la matricula del alumno:\n");
		fflush(stdin);
		gets(ALUMNOS[I].MAT);
		printf("Tecle el nombre del alumno:\n");
		fflush(stdin);
		gets(ALUMNOS[I].NOM);
		printf("Tecle el apellido del alumno:\n");
		fflush(stdin);
		gets(ALUMNOS[I].APELLIDO);
		printf("Tecle su feha de nacimiento:\n");
		fflush(stdin);
		gets(ALUMNOS[I].CUMPL);
		printf("Tecle el nombre de la escuela:\n");
		fflush(stdin);
		gets(ALUMNOS[I].ESC);
		printf("Tecle su grado :\n");
		fflush(stdin);
		gets(ALUMNOS[I].GRAD);
		printf("Tecle el nombre de la carrera:\n");
		fflush(stdin);
		gets(ALUMNOS[I].CARRERA);
		printf("Tecle su genero:\n");
		fflush(stdin);
		gets(ALUMNOS[I].GEN);
	}
	/*************************************************************/
	/* segundo for*/
	for(I=0;I<P;I++)
	{
		printf("Datos alumno %d\n",I+1);
		printf("MATRICULA: %s\n",ALUMNOS[I].MAT);
		printf("NOMBRE DEL ALUMNO: %s\n",ALUMNOS[I].NOM);
		printf("APELLIDO DEL ALUMNO: %s\n",ALUMNOS[I].APELLIDO);
		printf("FECHA DE CUMPLEAÑOS DEL ALUMNO: %s\n",ALUMNOS[I].CUMPL);
		printf("ESCUELA DEL ALUMNO: %s\n",ALUMNOS[I].ESC);
		printf("GRADO DEL ALUMNO: %s\n",ALUMNOS[I].GRAD);
		printf("CARRERA DEL ALUMNO: %s\n",ALUMNOS[I].CARRERA);
		printf("GENERO DEL ALUMNO: %s\n",ALUMNOS[I].GEN);	
	}
	/*************************************************************/
	/*Fin del programa*/
	return 0;
}
/*****************************************************************/
