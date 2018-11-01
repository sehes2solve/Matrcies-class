#ifndef MATRIX_H
#define MATRIX_H
#include <bits/stdc++.h>
#include "Matrix.h"
using namespace std;



class Matrix
{
    public:
        Matrix();
        Matrix(int r , int c , int arr[]);
        Matrix(const Matrix& mat);
        int get_row();
        int get_col();
        int* get_data();
        void set_row(int r);
        void set_col(int c);
        void set_data(int* arr);
        Matrix&operator=(const Matrix& mat2);
        void deleteMatrix();
        virtual ~Matrix();

        // Student No.1
        friend Matrix operator+ (Matrix mat1 , Matrix mat2) ;
        friend Matrix operator- (Matrix mat1 , Matrix mat2) ;
        friend Matrix operator+ (Matrix mat1,int scalar) ;
        friend Matrix operator- (Matrix mat1,int scalar) ;
        friend Matrix operator* (Matrix mat1,int scalar) ;
        friend Matrix operator* (Matrix mat1 , Matrix mat2) ;


        // Student No.2
        Matrix operator+= (Matrix mat);
        Matrix operator-= (Matrix mat);
        Matrix operator+= (int scalar);
        Matrix operator-= (int scalar);
        Matrix operator++ (int);
        Matrix operator-- (int);
        Matrix operator++ ();
        Matrix operator-- ();
        friend istream& operator>> (istream& in, Matrix& mat);


        // Student No.3
        friend  ostream& operator<< (ostream& out, Matrix mat ) ;
        bool   operator== (Matrix mat2) ;
        bool   operator!= (Matrix mat2) ;
        bool   isSquare   ();
        bool   isIdentity ();
        bool   isSymetric ();
        void transpose();

    private:
        int* data ;       // Pointer to 1-D array that will simulate matrix
        int row, col;
};

#endif
