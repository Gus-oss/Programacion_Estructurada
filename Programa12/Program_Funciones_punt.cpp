/*lIBRERIAS A USAR*/
/*********************************************************************************/
#include<stdio.h>
#include<string.h>
/*********************************************************************************/
void LITput(int *PUNTOUT);
/*Declaracion*/
/*********************************************************************************/
void CLAput(int *PUNTOUT);
struct Datos{
	char MAT[50];
	char NOM[70];
	char APE[70];
	char CUMPLE[70];
	char ESC[70];
	char GRA[70];
	char CARR[70];
	char GENER[70];
}ALUMNOS[70];
/********************************************************************************/
/*Cuerpo del programa*/
/********************************************************************************/
int main()
{
	int N;
	int *PUNTOUT;
	printf("*****************************************\n");
	printf("Bienvenido Usuario\n");
	printf("Favo r de ingresar los alumnos a registrar:  \n\n");
	printf("*****************************************\n");
	scanf("%d",&N);
	PUNTOUT=&N;
	LITput(PUNTOUT);
	CLAput(PUNTOUT);

	return 0;
}
/***********************************************************************************/
/*Primer void*/
/**********************************************************************************/
void LITput(int *PUNTOUT)
{
	int I;
	for(I=0;I<*PUNTOUT;I++)
	{
		printf("ºAlumno %dº\n",I+1);
		printf("Ingresar la matericula del alumno:\n");
		fflush(stdin);
		gets(ALUMNOS[I].MAT);
		printf("Ingresa tu nombre:\n");
		fflush(stdin);
		gets(ALUMNOS[I].NOM);
		printf("Ingresa tu apellido:\n");
		fflush(stdin);
		gets(ALUMNOS[I].APE);
		printf("Ingresa tu fecha de cumple:\n");
		fflush(stdin);
		gets(ALUMNOS[I].CUMPLE);
		printf("Ingresa tu escuela:\n");
		fflush(stdin);
		gets(ALUMNOS[I].ESC);
		printf("Ingresa tu grado :\n");
		fflush(stdin);
		gets(ALUMNOS[I].GRA);
		printf("Ingresa tu carrera:\n");
		fflush(stdin);
		gets(ALUMNOS[I].CARR);
		printf("Ingresa tu genero:\n");
		fflush(stdin);
		gets(ALUMNOS[I].GENER);
	}
/***************************************************************************************/
/*Segundo void*/
/***************************************************************************************/
}
void CLAput(int *PUNTOUT)
{
	int I;
	for(I=0;I<*PUNTOUT;I++)
	{
		printf("Datos alumno %d\n",I+1);
		printf("Id: %s\n",ALUMNOS[I].MAT);
		printf("Nombre: %s\n",ALUMNOS[I].NOM);
		printf("Apellido: %s\n",ALUMNOS[I].APE);
		printf("Fecha cumple: %s\n",ALUMNOS[I].CUMPLE);
		printf("Escuela: %s\n",ALUMNOS[I].ESC);
		printf("Grado: %s\n",ALUMNOS[I].GRA);
		printf("Carrera: %s\n",ALUMNOS[I].CARR);
		printf("Genero: %s\n\n",ALUMNOS[I].GENER);	
	}
}
/***************************************************************************************/
/*Fin del programa*/
