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

{
   Matrix matrix;char buf[2048] = "0.35752441";
   matrix_init_from_text(&matrix, buf);
   double true_det = 0.35752441143413594;
   double calculated_det = run_algorithm(&matrix);
   assert(abs(true_det - calculated_det) < 0.001);
}

{
   Matrix matrix;char buf[2048] = "0.98401035";
   matrix_init_from_text(&matrix, buf);
   double true_det = 0.9840103468221212;
   double calculated_det = run_algorithm(&matrix);
   assert(abs(true_det - calculated_det) < 0.001);
}

{
   Matrix matrix;char buf[2048] = "0.32817753,0.86109813;0.62208115,0.57591955";
   matrix_init_from_text(&matrix, buf);
   double true_det = -0.34666905574104623;
   double calculated_det = run_algorithm(&matrix);
   assert(abs(true_det - calculated_det) < 0.001);
}

{
   Matrix matrix;char buf[2048] = "0.27009144,0.04118931;0.66795056,0.02787355";
   matrix_init_from_text(&matrix, buf);
   double true_det = -0.019984013899855074;
   double calculated_det = run_algorithm(&matrix);
   assert(abs(true_det - calculated_det) < 0.001);
}

{
   Matrix matrix;char buf[2048] = "0.54697063,0.3880282,0.15311401;0.86578782,0.97127198,0.67840933;0.74423053,0.43950018,0.66578959";
   matrix_init_from_text(&matrix, buf);
   double true_det = 0.11044434838881294;
   double calculated_det = run_algorithm(&matrix);
   assert(abs(true_det - calculated_det) < 0.001);
}

{
   Matrix matrix;char buf[2048] = "0.38677518,0.85671143,0.70388892;0.58673031,0.38617282,0.44182106;0.85150051,0.16182691,0.59893708";
   matrix_init_from_text(&matrix, buf);
   double true_det = -0.08157594367015504;
   double calculated_det = run_algorithm(&matrix);
   assert(abs(true_det - calculated_det) < 0.001);
}

{
   Matrix matrix;char buf[2048] = "0.6825774,0.91130342,0.1581664,0.63787033;0.80689218,0.93380928,0.98676721,0.03589441;0.81039026,0.05941637,0.29033878,0.37430151;0.26791626,0.03342493,0.56513422,0.86128957";
   matrix_init_from_text(&matrix, buf);
   double true_det = 0.619674162305356;
   double calculated_det = run_algorithm(&matrix);
   assert(abs(true_det - calculated_det) < 0.001);
}

{
   Matrix matrix;char buf[2048] = "0.12224301,0.69631743,0.03339317,0.38397789;0.12413883,0.26522826,0.15410693,0.18168067;0.04379366,0.35554551,0.23141415,0.90414338;0.3754586,0.37826257,0.63623302,0.26525792";
   matrix_init_from_text(&matrix, buf);
   double true_det = 0.0032549991680659355;
   double calculated_det = run_algorithm(&matrix);
   assert(abs(true_det - calculated_det) < 0.001);
}
}
