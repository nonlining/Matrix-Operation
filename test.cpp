#include "Matrix.h"
#include <iostream>

using namespace std;

int main()
{
    //show identity matrix
    Matrix Indntity = eye(3);
    cout << "Indentity\n";
    Indntity.show();
    
    //matrix multiplication
    double a[3][2] = {{1, 2}, {10, 11}, {3, 4}};
    double b[2][3] = {{1, 5, 3}, {6 ,4, 2}};
    Matrix Ma((double*)a, 3, 2), Mb((double*)b, 2, 3);
    Matrix Mc;
    Mc = Ma * Mb;
    cout << "a*b=\n";
    Mc.show();
    
    cout << "c*5=\n";
    Mc = Mc * 5;
    Mc.show();
    
    Mc[2][2] = 1;
    cout << "Determinant\n";
    //Determinant
    cout << "det = " << Mc.det() << endl;
    //Inverse
    cout << "Inverse\n";
    Matrix inv_c = Mc.inv();
    inv_c.show();
    
    //c*inv_c
    cout << "c*inv_c\n";
    (Mc * inv_c).show();
}
