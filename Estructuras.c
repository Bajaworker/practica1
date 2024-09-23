#include "Estructuras.h"
/*
NO STRUCTURES HERE 
*/
//FUNTIONS 
Alumno crear_alumno(int m,int s,char* n,char* a,int y,int mt,int d)
{
	Alumno alumno;
	alumno.matricula = m;
	alumno.semestre = s;
	alumno.nombre = n;
	alumno.apellido = a;
	alumno.fecha.year = y;
	alumno.fecha.month = mt;
	alumno.fecha.day = d;
	return alumno;	
}

void imprimir_alumno(Alumno alumno)
{
	printf(" %d",alumno.matricula);
	printf(" %d",alumno.semestre);
	printf(" %s",alumno.nombre);
	printf(" %s",alumno.apellido);
	printf(" %d",alumno.fecha.year);
	printf(" %d",alumno.fecha.month);
	printf(" %d",alumno.fecha.day);
}

