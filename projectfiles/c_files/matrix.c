#include "head.h"

int get_matrix_dimension(char*);
void assign_matrix_values(Matrix*, char*);

void matrix_init(Matrix* matrix, int n_rows, int n_cols){
    (*matrix).n_cols = n_cols;
    (*matrix).n_rows = n_rows;
    (*matrix).data = malloc(sizeof(double)*n_rows*n_cols);
    for(int i = 0; i < n_rows*n_cols; i++){
        (*matrix).data[i] = 0;
    }
}

void matrix_init_from_text(Matrix* matrix, char* buf){
    matrix_init(matrix, get_matrix_dimension(buf), get_matrix_dimension(buf));
    assign_matrix_values(matrix, buf);
}

double matrix_value_get(Matrix* matrix, int i, int j){
    return (*matrix).data[i * (*matrix).n_rows + j];
}

void matrix_value_set(Matrix* matrix, int i, int j, double value){
    (*matrix).data[i * (*matrix).n_rows + j] = value;
}

void matrix_print(Matrix* matrix){
    for(int i = 0; i < (*matrix).n_rows; i++){
        printf("|");
        for(int j = 0; j < (*matrix).n_cols; j++){
            printf("%f ", matrix_value_get(matrix, i, j));
        }
        printf("|\n");
    }
}

void assign_matrix_values(Matrix* matrix, char* buf){
    for(int j = 0; j < strlen(buf); j++){
        if(buf[j] == ';'){buf[j] = ',';}
    }
    char *pt;
    pt = strtok(buf, ",");
    int i = 0;
    while (pt != NULL) {
        matrix_value_set(matrix, i/(*matrix).n_rows, i % (*matrix).n_cols, atof(pt));
        pt = strtok(NULL, ",");
        i++;
    }
}

int get_matrix_dimension(char* buf){
    int dimension = 0;
    for(int i = 0; i < strlen(buf); i++){
        if(buf[i] == ';'){
            dimension++;
        }
    }
    return dimension + 1;
}
