#include <bits/stdc++.h>
#include "Matrix.h"
using namespace std;

int main()
{
    int student;

    int data1 [] = {1,2,3,4,5,6,7,8};
    int data2 [] = {13,233,3,4,5,6};
    int data3 [] = {10,100,10,100,10,100,10,100};
    int data4 [] = {1,1,2,2,3,4,5,6,7,8};
    int data5 [] = {13,233,3,4,5,6};
    int data6 [] = {10,100,10,100,10,100,10,100,10,100,1,14};
    int data7 [] = {1,2,3,4,5,6,7,8,9};
    int data8 [] = {1,3,5,3,4,10,5,10,7};
    int data9 [] = {1,0,0,0,1,0,0,0,1};

    Matrix mat1(4, 2, data1);
    Matrix mat2(2, 3, data2);
    Matrix mat3(4, 2, data3);
    Matrix mat4(5, 2, data4);
    Matrix mat5(2, 3, data5);
    Matrix mat6(3, 4, data6);
    Matrix mat7(3, 3, data7);
    Matrix mat8(3, 3, data8);
    Matrix mat9(3, 3, data9);
    mat1.set_data(data3);
    cout << mat1;

    cout << " \nMAT 1 : \n" << mat1 ;
    cout << " \nMAT 2 : \n" << mat2 ;
    cout << " \nMAT 3 : \n" << mat3 ;
    cout << " \nMAT 4 : \n" << mat4 ;
    cout << " \nMAT 5 : \n" << mat5 ;
    cout << " \nMAT 6 : \n" << mat6 ;
    cout << " \nMAT 7 : \n" << mat7 ;
    cout << " \nMAT 8 : \n" << mat8 ;
    cout << " \nMAT 9 : \n" << mat9 ;
    cout << endl << "Enter Student No. : ";
    cin >> student ;
    if (student == 1)
    {
        cout << "\nPlus : \n" ;
        cout << "Matrix 1 + Matrix 3 : \n" << mat1 + mat3 << endl;
        cout << "Matrix 1 + Matrix 2 : \n" << mat1 + mat2 << endl;

        cout << "\nMinus  \n" ;
        cout << "Matrix 1 - Matrix 3 : \n" << mat1 - mat3 << endl;
        cout << "Matrix 1 - Matrix 2 : \n" << mat1 - mat2 << endl;


        cout << "\nAdd Scalar \n" ;
        cout << "Matrix 1 + 5 :\n" ;
        cout << mat1 + 5;


        cout << "\nSubtract Scalar \n" ;
        cout << "Matrix 1 - 5 :\n" ;
        cout << mat1 - 5 ;

        cout << "\nMultiply Scalar \n" ;
        cout << "Matrix 1 * 5 :\n" ;
        cout << mat1 * 5 ;

        cout << "\nMatrix multiplication : \n" ;
        cout << "Matrix 1 * Matrix 2 \n" ;
        cout << mat1 * mat2 ;

        cout << "\nMatrix 3 * Matrix 4 : \n" ;
        cout << mat3 * mat4 ;


    }
    if (student == 2)
    {
        cout << "\n+= : \n" ;
        cout << "Matrix 1 += Matrix 3 : \n" << (mat1 += mat3) << endl;
        cout << "Matrix 1 : \n" << mat1 << endl ;
        mat1 -= mat3;
        cout << "Matrix 1 += Matrix 2 : \n" << (mat1 += mat2) << endl;

        cout << "\n-= : \n" ;
        cout << "Matrix 1 -= Matrix 3 : \n" << (mat1 -= mat3) << endl;
        cout << "Matrix 1 : \n" << mat1 << endl ;
        mat1 += mat3;
        cout << "Matrix 1 -= Matrix 2 : \n" << (mat1 -= mat2) << endl;


        cout << "\n+= Scalar : \n" ;
        cout << "Matrix 1 += 5 :\n" ;
        cout << (mat1 += 5);
        cout << "Matrix 1 : \n" << mat1 << endl ;
        mat1 -= 5 ;


        cout << "\n-= Scalar : \n" ;
        cout << "Matrix 1 -= 5 :\n" ;
        cout << (mat1 -= 5 );
        cout << "Matrix 1 : \n" << mat1 << endl ;
        mat1 += 5 ;

        cout << "\Matrix ++  : \n" ;
        cout << "Matrix 7++ :\n" ;
        cout << (mat7++);
        cout << "Matrix 7 : \n" << mat7 << endl ;
        mat7-- ;

        cout << "\Matrix --  : \n" ;
        cout << "Matrix 7-- :\n" ;
        cout << (mat7--);
        cout << "Matrix 7 : \n" << mat7 << endl ;
        mat7++ ;

        cout << "\++ Matrix  : \n" ;
        cout << "++ Matrix 7 :\n" ;
        cout << (++mat7);
        cout << "Matrix 7 : \n" << mat7 << endl ;
        --mat7 ;

        cout << "\-- Matrix  : \n" ;
        cout << "-- Matrix 7 :\n" ;
        cout << (--mat7);
        cout << "Matrix 7 : \n" << mat7 << endl ;
        ++mat7 ;

        cout << "\istream >> Matrix  : \n" ;
        cout << "Matrix 7 : \n" << mat7 << endl ;
        cout << "cin >> Matrix 7 :\n" ;
        cin >> mat7;
        cout << "Matrix 7 : \n" << mat7 << endl ;

    }
    if (student == 3)
    {
        cout << "\n\nIs Equal: \n" ;
        cout << (mat1==mat2) << "      " << (mat1!=mat2) << endl ;
        cout << (mat2==mat5) << "      " << (mat2!=mat5) << endl ;
        cout << (mat3==mat6) << "      " << (mat3!=mat6) << endl ;
        cout << (mat1==mat4) << "      " << (mat1!=mat4) << endl ;
        cout << (mat6==mat3) << "      " << (mat6!=mat3) << endl ;
        cout << (mat6==mat8) << "      " << (mat6!=mat8) << endl ;
        cout << (mat2==mat1) << "      " << (mat2!=mat1) << endl ;

        cout << "\n\nIs Square: \n" ;
        cout << "Matrix 1 : " << mat1.isSquare() << endl ;
        cout << "Matrix 7 : " << mat7.isSquare() << endl ;

        cout << "\n\nSymmetric: \n" ;
        cout << "Mat 1 : " << mat1.isSymetric() << endl ;
        cout << "Mat 2 : " << mat2.isSymetric() << endl ;
        cout << "Mat 3 : " << mat3.isSymetric() << endl ;
        cout << "Mat 4 : " << mat4.isSymetric() << endl ;
        cout << "Mat 5 : " << mat5.isSymetric() << endl ;
        cout << "Mat 6 : " << mat6.isSymetric() << endl ;
        cout << "Mat 7 : " << mat7.isSymetric() << endl ;
        cout << "Mat 8 : " << mat8.isSymetric() << endl ;
        cout << "Mat 9 : " << mat9.isSymetric() << endl ;

        cout << "\n\nIdentity: \n" ;
        cout << "Mat 1 : " << mat1.isIdentity() << endl ;
        cout << "Mat 2 : " << mat2.isIdentity() << endl ;
        cout << "Mat 3 : " << mat3.isIdentity() << endl ;
        cout << "Mat 4 : " << mat4.isIdentity() << endl ;
        cout << "Mat 5 : " << mat5.isIdentity() << endl ;
        cout << "Mat 6 : " << mat6.isIdentity() << endl ;
        cout << "Mat 7 : " << mat7.isIdentity() << endl ;
        cout << "Mat 8 : " << mat8.isIdentity() << endl ;
        cout << "Mat 9 : " << mat9.isIdentity() << endl ;

        cout << "\n\nTranspose:\n" ;
        cout << "Mat 1 \n" << mat1  << endl ;  mat1.transpose() ;
        cout << "Transpose of 1: \n" << mat1 <<endl ;
        mat1.transpose();

        cout << "Mat 7 \n" << mat7  << endl ;  mat7.transpose() ;
        cout << "Transpose of 7: \n" << mat7 <<endl ;
        mat7.transpose();

        cout << "Mat 8 \n" << mat8  << endl ;  mat8.transpose() ;
        cout << "Transpose of 8: \n" << mat8 <<endl ;
        mat8.transpose();

        cout << "Mat 9 \n" << mat9  << endl ;  mat9.transpose() ;
        cout << "Transpose of 9: \n" << mat9 <<endl ;
        mat9.transpose() ;

    }

/*
    mat1.deleteMatrix();
    mat2.deleteMatrix();
    mat3.deleteMatrix();
    mat4.deleteMatrix();
    mat5.deleteMatrix();
    mat6.deleteMatrix();
    mat7.deleteMatrix();
    mat8.deleteMatrix();
    mat9.deleteMatrix();
*/
    return 0;
}






