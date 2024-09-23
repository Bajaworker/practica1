#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


// Checking for windows OS with 
// _WIN32 macro 
#ifdef _WIN32 
	#define LIMPIAR_PANTALLA system("cls")
	#define ESPERAR system("pause")

// Checking for linux OS with 
// __linux__ macro 
#elif __linux__ 
	#define LIMPIAR_PANTALLA system("clear")
	#define ESPERAR getchar()   

// Checking for mac OS with 
// __APPLE__ macro 
#elif __APPLE__ 
	#define LIMPIAR_PANTALLA system("clear")
	#define ESPERAR getchar()  
#endif


  
#include "Estructuras.h"
#include "Estudiantes.h"

typedef struct
{
	int min;
	int max;
}FiltroNUM;


typedef struct
{
	char min;
	char max;
}FiltroCHAR;

int captura_FiltroNUM(FiltroNUM*);
int captura_FiltroCHAR(FiltroCHAR*);
void filtro_semestre(FiltroNUM f_matricula, Alumno** alumnos, int n);

 
int main(void)
{
	Lista* UbiLis_1=NULL ; //UBICACION DE LA LISTA
	Lista* UbiLis_2=NULL ; //UBICACION DE LA LISTA 
	Lista* UbiLis_3=NULL ; //UBICACION DE LA LISTA 
	Lista* UbiLis_4=NULL ; //UBICACION DE LA LISTA
	
	FiltroNUM f_matricula;
	FiltroNUM f_semestre;
	FiltroCHAR f_inicial;

	int opcion;
    int n,i;
    Alumno **alumnos;
    alumnos = obtener_estudiantes(&n);

    //DEFAULTS
	f_matricula = (FiltroNUM){.min=0,.max=99999999};
	f_semestre  = (FiltroNUM){.min=0,.max=99999999};
	f_inicial 	= (FiltroCHAR){.min='a',.max='z'};

	do
	{
		LIMPIAR_PANTALLA;
		printf("\n    FILTRO MATRICULA -> MIN: %d MAX: %d",f_matricula.min,f_matricula.max);
		printf("\n    FILTRO SEMESTRE -> MIN: %d MAX: %d",f_semestre.min,f_semestre.max);
		printf("\n    FILTRO INICIAL -> MIN: %c MAX: %c",f_inicial.min,f_inicial.max);
		printf("\n\n ---MENU---");
		printf("\n [1]CAPTURAR FILTRO MATRICULA");
		printf("\n [2]CAPTURAR FILTRO SEMESTRE");
		printf("\n [3]CAPTURAR FILTRO INICIAL NOMBRE");
		printf("\n [4]MOSTRAR LISTA FILTRADA POR MATRICULA");
		printf("\n [5]MOSTRAR LISTA FILTRADA POR SEMESTRE");
		printf("\n [6]MOSTRAR LISTA FILTRADA POR INICIAL NOMBRE");
		printf("\n [7]MOSTRAR LISTA CON 3 FILTRO APLICADOS ");
		printf("\n [9]SALIR");
		printf("\n\n SELECCIONAR OPCION: ");

		fflush(stdin);
		scanf("%d",&opcion);
		switch(opcion)
		{
			case 1:
			        if (UbiLis_1 == NULL){
						UbiLis_1 = CrearLista();
						} else {
							EliminarLista(UbiLis_1);
							}
					captura_FiltroNUM(&f_matricula);
					printf("\n Min %d Max %d",f_matricula.min,f_matricula.max);
					break;
			case 2:
			        if (UbiLis_2==NULL){
						UbiLis_2 = CrearLista();
					} else {
						EliminarLista(UbiLis_2);
					}
					captura_FiltroNUM(&f_semestre);
					printf("\n Min %d Max %d",f_semestre.min,f_semestre.max);
					break;
			case 3:
		            if (UbiLis_3==NULL){
						UbiLis_3= CrearLista();
					} else {
						EliminarLista(UbiLis_3);
					}
					captura_FiltroCHAR(&f_inicial);
					printf("\n Min %c Max %c",f_inicial.min,f_inicial.max);
					break;
			case 4:
			        if (UbiLis_1==NULL){
						printf("\n La lista esta vacia");
					} else {
						ImprimirLista(UbiLis_1);
					}
					captura_FiltroCHAR(&f_inicial);
					printf("\n Min %c Max %c",f_inicial.min,f_inicial.max);
					break;
			case 5:
			        if (UbiLis_1==NULL){
						printf("\n La lista esta vacia");
					} else {
						ImprimirLista(UbiLis_2);
					}
					filtro_semestre(f_matricula,alumnos,sizeof(alumnos)/sizeof(alumnos[0]));
					printf("\n Min %d Max %d",f_matricula.min,f_matricula.max);
					break;
			case 6:
			        if (UbiLis_3==NULL){
						printf("\n La lista esta vacia");
					} else {
						ImprimirLista(UbiLis_3);
					}
					captura_FiltroNUM(&f_semestre);
					printf("\n Min %d Max %d",f_semestre.min,f_semestre.max);
					break;
			case 7:
			        if (UbiLis_4==NULL){
						printf("\n Ls lista esta vacia");
					} else {
						ImprimirLista(UbiLis_4);
					}
					captura_FiltroCHAR(&f_inicial);
					printf("\n Min %c Max %c",f_inicial.min,f_inicial.max);
					break;
			case 8:
					captura_FiltroCHAR(&f_inicial);
					printf("\n Min %c Max %c",f_inicial.min,f_inicial.max);
					break;		
			case 9:
					break;
			default:
					break;
		}
		printf("\n");
		ESPERAR;
	}while(opcion!=9);

	for(i=0;i<n;i++)
    {
		free((*(alumnos[i])).nombre);
		free((*(alumnos[i])).apellido);
		free(alumnos[i]);
    } 
	free(alumnos);
      	  
    printf("\n\n");
    return 0;
}



int captura_FiltroNUM(FiltroNUM* filtro)
{
	int tmp;
	printf("\n Captura valor minimo: ");
	fflush(stdin);
	scanf("%d",&(filtro->min));
	printf("\n Captura valor maximo: ");
	fflush(stdin);
	scanf("%d",&(filtro->max));
	
	if(filtro->min > filtro->max)
	{
		tmp = filtro->max;
		filtro->max = filtro->min;
		filtro->min = tmp;
	}
	return 0;
}

int captura_FiltroCHAR(FiltroCHAR* filtro)
{
	char tmp;
	printf("\n Captura valor minimo: ");
	fflush(stdin);
	scanf("%c",&(filtro->min));
	printf("\n Captura valor maximo: ");
	fflush(stdin);
	scanf("%c",&(filtro->max));

	filtro->min = tolower(filtro->min);
	filtro->max = tolower(filtro->max);
		
	if(filtro->min > filtro->max)
	{
		tmp = filtro->max;
		filtro->max = filtro->min;
		filtro->min = tmp;
	}
	return 0;
}

Nodo* CrearNodo(Alumno* alumno){
    Nodo* NuevoNodo = (Nodo*)malloc(sizeof(Nodo));

	
    NuevoNodo->alumno->matricula = alumno->matricula;
	NuevoNodo->alumno->semestre = alumno->semestre;
	NuevoNodo->alumno->nombre = alumno->nombre;
	NuevoNodo->alumno->apellido = alumno->apellido;

	NuevoNodo->alumno->fecha.year= alumno->fecha.year;
	NuevoNodo->alumno->fecha.month = alumno->fecha.month;
	NuevoNodo->alumno->fecha.day = alumno->fecha.day;
    NuevoNodo->siguiente = NULL;
    return NuevoNodo;
}

Lista* CrearLista(){
    Lista* NuevaLista = (Lista*)malloc(sizeof(Lista));
    NuevaLista->cantidad = 0;
    NuevaLista->fin = NULL;
    NuevaLista ->inicio = NULL;
    return NuevaLista;
}

/*Necesito modificar esta funcion para que trabaje con las funciones filtro y crear una lista con nodos de
estudiantes  */
void InsertarFinal(Lista* lista){
    int datoIngresado=0;
    Nodo* NuevoNodo =NULL;
    
	//E
    printf("\n Ingrese un numero :");
    fflush(stdin);
    scanf("%d", &datoIngresado );

    NuevoNodo = CrearNodo(datoIngresado);
    if ((lista->cantidad) == 0){
        lista->inicio = NuevoNodo;
        lista->fin =  NuevoNodo;
        lista->cantidad++;
        }else {
            lista->fin->siguiente = NuevoNodo;
            lista->fin = NuevoNodo;
            lista->cantidad++;
            }
}

void ImprimirLista(Lista* lista ){
    Nodo* NodoActual = NULL;
    Nodo* NodoAnterior = NULL;
    

    if (lista->cantidad==0){
        printf("\nLa lista esta vacia");

    }else {
        NodoActual = lista->inicio;
        do {
            printf("\n\n %d", NodoActual->alumno->semestre);
			printf("\n %s", NodoActual->alumno->nombre);
			printf("\n %s", NodoActual->alumno->apellido);

            printf("\n %d", NodoActual->alumno->fecha.year);
			printf("\n %d", NodoActual->alumno->fecha.month);
			printf("\n %d", NodoActual->alumno->fecha.day);

            NodoAnterior = NodoActual;
            NodoActual = NodoActual->siguiente;
        }while(NodoActual != NULL);
    }


}

void EliminarLista(Lista* lista){
     Nodo* NodoActual = NULL;
     Nodo* NodoAnterior = NULL;
    

    if (lista->cantidad==0){
        printf("\nLa lista esta vacia");
        free(lista);
        lista = NULL;
    }else {
        NodoActual = lista->inicio;
        do { 
            NodoAnterior = NodoActual;
            NodoActual = NodoAnterior->siguiente;
            free(NodoAnterior);
        }while(NodoActual != NULL);
        free(lista);
        lista = NULL;
        printf("\n Memoria liberada");

    }   
}

// Función para filtrar por semestre
void filtro_semestre(FiltroNUM f_matricula, Alumno** alumnos, int n) {
    int i;
    for (i = 0; i < n; i++) {
        if (alumnos[i].semestre >= f_matricula.min && alumnos[i].semestre <= f_matricula.max) {
			imprimir_alumno(alumnos[i]);  // Imprime el alumno si está en el rango de semestre
			printf("\n");
			
		}
	}
}


