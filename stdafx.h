// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>



// TODO: reference additional headers your program requires here
void initializeMatrix(double **arr, int n);
void printMatrix(double **arr, double *vector, double *result, int n);
void initializeVector(double *vector, int n);
double *resultMatrix(double **matrix, double *vector, int n);
void freeMemory(double **matrix, double *vector, double *result);


