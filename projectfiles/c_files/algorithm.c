#include "head.h"

bool shuffle_rows(Matrix*, int, int);

double run_algorithm(Matrix* matrix){
    int size = (*matrix).n_rows > (*matrix).n_cols ? (*matrix).n_cols : (*matrix).n_rows;
    if(size == 1) return matrix_value_get(matrix, 0, 0); // macierz 1x1, przypadek trywialny

    for(int i = 0; i < size - 1; i++){ //główna pętla
        for(int j = 1; j < size - i; j++){ //redukcja wartości w kolumnie "i"
            if(shuffle_rows(matrix, size, i)) return 0.0;
            double factor = matrix_value_get(matrix, i+j, i) / matrix_value_get(matrix, i, i); //obliczanie współczynnika
            matrix_add_rows(matrix, i + j, i, -factor); //zerowanie elementów w kolumnie "i"
        }
    }

    double det_value = 1;
    for(int i = 0; i < size; i++){
            det_value *= matrix_value_get(matrix, i, i); //wymnożenie liczb na przekątnej, wraz z ustalonym znakiem (zamiany wierszy)
    }
    return det_value * (*matrix).det_factor; //zwrócenie wartości
}

bool shuffle_rows(Matrix* matrix, int size, int i){ //zmiana kolejności wierszy aż element [i,i] będzie inny niż zero
    int h = 1;
    while(matrix_value_get(matrix, i, i) == 0.0){
        if(i == size - h){
            return true; //jeśli się nie uda, zwraca zero
        }
        matrix_swap_rows(matrix, i, size - h);
        h++;
    }
    return false; //zwraca zmianę znaku przy wyznaczniku
}
