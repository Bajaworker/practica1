#ifndef ESTUDIANTES_H
#define ESTUDIANTES_H

#include "Estructuras.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Alumno** obtener_estudiantes(int *);
Alumno csv_a_alumno(char *linea_csv);
void getLine(const char *texto, int lineNumber, char *line);
#endif