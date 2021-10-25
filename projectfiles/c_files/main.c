#include "head.h"


int main(){
    while(true){
    char buf[2048];
    printf("\n\nPodaj swoja macierz: \n");
    gets(buf);

    Matrix matrix;
    matrix_init_from_text(&matrix, buf);
    matrix_print(&matrix);
    }
    return 0;
}
