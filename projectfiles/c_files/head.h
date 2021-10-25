#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


// Matrix Headers
struct Matrix {
    int n_rows;
    int n_cols;
    int det_sign;
    double* data;
};
typedef struct Matrix Matrix;
void matrix_init(Matrix*, int, int);
void matrix_init_from_text(Matrix*, char*);
double matrix_value_get(Matrix*, int, int);
void matrix_value_set(Matrix*, int, int, double);
void matrix_print(Matrix*);

// Algorithm Header
