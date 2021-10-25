#include <assert.h>
#include "head.h"

void run_tests(){
{
    Matrix matrix;
    char buf[2048] = "1,1;1,1";
    matrix_init_from_text(&matrix, buf);
    double true_det = 0.0;
    double calculated_det = run_algorithm(&matrix);
    assert(abs(true_det - calculated_det) < 0.001);
}
{
    Matrix matrix;
    char buf[2048] = "0,0;0,0";
    matrix_init_from_text(&matrix, buf);
    double true_det = 0.0;
    double calculated_det = run_algorithm(&matrix);
    assert(abs(true_det - calculated_det) < 0.001);
}
{
    Matrix matrix;
    char buf[2048] = "1,2;1,2";
    matrix_init_from_text(&matrix, buf);
    double true_det = 0.0;
    double calculated_det = run_algorithm(&matrix);
    assert(abs(true_det - calculated_det) < 0.001);
}

}
