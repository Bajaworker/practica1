#ifndef ESTRUCTURAS_H
#define ESTRUCTURAS_H

#include <stdio.h>
#include <stdlib.h>

#define VALIDO 1
#define INVALIDO 0


typedef struct date
{
	int year;
	int month;
	int day;
}Date;

typedef struct alumno
{
	int matricula;
	int semestre;
	char *nombre;
	char *apellido;
	Date fecha;
}Alumno;

typedef struct nodo
{
	Alumno *alumno;
	struct nodo *siguiente;
}Nodo;

typedef struct lista
{
	Nodo *inicio;
	Nodo *fin;
	int cantidad;
}Lista;

//PROTOTIPOS - ESTRUCTURAS UTILIZADAS: ALUMNO,DATE
Alumno crear_alumno(int,int,char*,char*,int,int,int);
void imprimir_alumno(Alumno);

//PROTOPOS
Lista* CrearLista();
void InsertarFinal(Lista*, Alumno*);
Nodo* CrearNodo(Alumno* ); 
void AgregarFinal(Nodo**);
void ImprimirLista(Lista*);
void EliminarLista(Lista*);




#endif