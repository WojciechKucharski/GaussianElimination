#include "head.h"

bool menu();

int main(){
    run_tests();
    while(menu());
    return 0;
}

bool menu(){
    char buf[2048];
    printf("\n\nPodaj swoja macierz (wpisz q aby wyjsc): \n");
    gets(buf);
    if(buf[0] == 'q') return false;
    Matrix matrix;
    matrix_init_from_text(&matrix, buf);
    printf("\nTwoja macierz:\n");
    matrix_print(&matrix);
    double det = run_algorithm(&matrix);
    printf("\nTwoja macierz po Eliminacji Gaussa:\n");
    matrix_print(&matrix);
    printf("\nWyznacznik = %f\n", det);
    return true;
}
