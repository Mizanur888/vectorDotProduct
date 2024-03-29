// stdafx.cpp : source file that includes just the standard includes
// vectorTestProduct.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"

#include <math.h>
#include <stdlib.h>
// TODO: reference any additional headers you need in STDAFX.H
// and not in this file


void freeMemory(double **matrix, double *vector, double *result) {
	free(matrix);
	free(vector);
	free(result);
}

void initializeMatrix(double **A, int n) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j) {
				A[i][j] = 2;
				A[i][j - 1] = 1;
			}

			else if (i + 1 == j) {
				A[i][j] = 1;
			}

			else {
				A[i][j] = 0;
			}
		}
	}
}

void initializeVector(double *vector, int n) {
	for (int i = 0; i < n; i++) {
		vector[i] = 1;
	}
}
double *resultMatrix(double **matrix, double *vector, int n) {
	double *result = (double*)malloc(n * sizeof(double));
	for (int i = 0; i < n; i++) {
		double resultValue = 0.0;
		for (int j = 0; j < n; j++) {
			resultValue += matrix[i][j] * vector[i];
		}
		result[i] = resultValue;
	}

	return result;
}
void printMatrix(double **A, double *vector, double * result, int n) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("  %.2lf", A[i][j]);
		}
		printf("     %.2lf  ", vector[i]);

		if (n / 2 == i) {
			printf("=");
		}
		if (n / 2 == i) {
			printf("    %.2lf  ", result[i]);
		}
		else
			printf("     %.2lf  ", result[i]);
		printf("\n");

	}
}
