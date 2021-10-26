import numpy as np

def generate(n):
    A = np.random.rand(n,n)
    d = np.linalg.det(A)
    a = str(A).replace("[[", "").replace("]]","").replace("[","").replace("]", ";").replace(" ",",").replace(",,",",").replace("\n,","")
    return "{"+f"\n   Matrix matrix;char buf[2048] = \"{a}\";\n   matrix_init_from_text(&matrix, buf);\n   double true_det = {d};\n   double calculated_det = run_algorithm(&matrix);\n   assert(abs(true_det - calculated_det) < 0.001);\n"+"}\n"
    
for i in range(1,5):
    print(generate(i))
    print(generate(i))