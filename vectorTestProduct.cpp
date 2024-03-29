// vectorTestProduct.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <math.h>
#include <stdlib.h>

int main()
{
	double **a, *vector;
	int size = 5;
	vector = (double*)malloc(size * sizeof(double));
	a = (double **)malloc(size * sizeof(double));
	for (int i = 0; i < size; i++) {
		a[i] = (double*)malloc(size * sizeof(double));
	}
	initializeMatrix(a, size);
	initializeVector(vector, size);
	double *result = resultMatrix(a, vector, size);
	printMatrix(a, vector, result, size);

	freeMemory(a, vector, result);
    return 0;
}
