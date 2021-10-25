#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


// Matrix Headers
struct Matrix {
    int n_rows;
    int n_cols;
    double det_factor;
    double* data;
};
typedef struct Matrix Matrix;
void matrix_init(Matrix*, int, int);
void matrix_init_from_text(Matrix*, char*);
double matrix_value_get(Matrix*, int, int);
void matrix_value_set(Matrix*, int, int, double);
void matrix_print(Matrix*);
void matrix_add_rows(Matrix*, int, int, double);
void matrix_swap_rows(Matrix*, int, int);

// Algorithm Header
double run_algorithm(Matrix*);

// Test Header
void run_tests();
