#include <bits/stdc++.h>
#include "Matrix.h"
using namespace std;

Matrix::Matrix()
{
    row = 0;
    col = 0 ;
    data = 0;
}

Matrix::Matrix(int r , int c , int arr[])
{
    row = r ;
    col = c ;
    data = new int [row * col];
    for (int i = 0; i < row * col; i++)
    {
        data [i] = arr [i];
    }
}
Matrix::~Matrix()
{
    deleteMatrix();
}


int Matrix::get_row() { return row ; }
int Matrix::get_col() { return col ; }
int* Matrix::get_data(){ return data;}
void Matrix::set_row(int r){ row = ((r > 0) ? r : 1);}
void Matrix::set_col(int c){ col = ((c > 0) ? c : 1);}
void Matrix::set_data(int arr[])
{
    data = arr ;
}

/// Student No. 1

Matrix operator+ (Matrix mat1 , Matrix mat2)
{
    int mat10[100] = {0} ;
    if (mat1.row == mat2.row && mat1.col == mat2.col)
    {
        for ( int i = 0 ; i < mat1.row * mat1.col ; i++)
        {
            mat10[i] = mat1.data[i] + mat2.data[i]    ;
        }
    }
    Matrix output (mat1.row, mat1.col, mat10) ;
    return output ;
    if (mat1.row != mat2.row || mat1.col == mat2.col)
    {
        cout << "Error , There are different in dimensions \n" ;
        Matrix output(mat1.row, mat1.col, mat10);
        return output ;
    }
}
Matrix operator- (Matrix mat1 , Matrix mat2)
{
    int mat11[100] = {0} ;
    if (mat1.row == mat2.row && mat1.col == mat2.col)
    {
        for ( int i = 0 ; i < mat1.row * mat1.col ; i++)
        {
            mat11[i] = mat1.data[i] - mat2.data[i]    ;
        }
    }
    Matrix output (mat1.row, mat1.col, mat11) ;
    return output ;
    if (mat1.row != mat2.row || mat1.col == mat2.col)
    {
        cout << "Error , There are different in dimensions \n" ;
        Matrix output(mat1.row, mat1.col, mat11);
        return output ;
    }
}
Matrix operator+ (Matrix mat1,int scalar)
{
    int mat12 [100] = {0} ;
    {
        for ( int i = 0 ; i < mat1.row * mat1.col ; i++)
        {
            mat12[i] = mat1.data[i] + scalar ;
        }
        Matrix output (mat1.row, mat1.col, mat12) ;
        return output ;
    }
}
Matrix operator- (Matrix mat1,int scalar)
{
    int mat13 [100] = {0} ;
    {
        for ( int i = 0 ; i < mat1.row * mat1.col ; i++)
        {
            mat13[i] = mat1.data[i] - scalar ;
        }
        Matrix output (mat1.row, mat1.col, mat13) ;
        return output ;
    }
}
Matrix operator* (Matrix mat1,int scalar)
{
    int mat14 [100] = {0} ;
    {
        for ( int i = 0 ; i < mat1.row * mat1.col ; i++)
        {
            mat14[i] = mat1.data[i] * scalar ;
        }
        Matrix output (mat1.row, mat1.col, mat14) ;
        return output ;
    }
}
Matrix operator* (Matrix mat1 , Matrix mat2)
{
    int mat15 [100] = {0}, z = 0, j = 0, i = 0, counter1 = 0, counter2 =0 ;
    if (mat1.col == mat2.row)
    {
        for (int matCount = 0 ; matCount < mat1.row ; matCount++)
        {
            for (int x = 0 ; x < mat2.col ; x++ )
            {
                for (int ColCount = 0 ; ColCount < mat1.col ; ColCount++ )
                {
                    mat15 [z] += mat1.data[i] * mat2.data[j] ;
                    i++ ;
                    j = j + mat2.col ;
                }
                counter1 = counter1 + 1 ;
                j = counter1 ;
                i = counter2 ;
                z++ ;
            }
            counter1 = 0 ;
            j = counter1 ;
            counter2 = counter2 + mat1.col ;
            i = counter2 ;
        }
        Matrix output (mat1.row, mat2.col, mat15 );
        return output ;
    }
    if (mat1.col != mat2.row) ;
    {
        cout << " The Matrix1 column isn't equal matrix2 row  " << endl ;
    }
    Matrix output (mat1.row, mat2.col, mat15 );
    return output ;
}


/// Student No.2
Matrix::Matrix(const Matrix& mat)
{
    row = mat.row ;
    col = mat.col ;
    data = new int[mat.row*mat.col];
    for (int i = 0; i < mat.row*mat.col ; i++)
    {
        data[i] = mat.data[i];
    }
}
Matrix Matrix::operator+= (Matrix mat)
{
	if (col == mat.col && row == mat.row)
	{
		for (int i = 0; i < col*row; i++)
			data[i] += mat.data[i];
		return *this;
	}
	else
	{
		cout << "Matrcies can't be added." << endl;
		return *this;
	}
}
Matrix Matrix::operator-= (Matrix mat)
{
    if (col == mat.col && row == mat.row)
	{
		for (int i = 0; i < col*row; i++)
			data[i] -= mat.data[i];
		return *this;
	}
	else
	{
		cout << "Matrcies can't be subtracted." << endl;
		return *this;
	}
}
Matrix Matrix::operator+= (int scalar)
{
	for (int i = 0; i < col*row; i++)
		data[i] += scalar;
	return *this;
}
Matrix Matrix::operator-= (int scalar)
{
	for (int i = 0; i < col*row; i++)
		data[i] -= scalar;
	return *this;
}
Matrix Matrix::operator++ (int)
{
	Matrix temp = *this;
	for (int i = 0; i < col*row; i++)
		data[i] ++;
	return temp;
}
Matrix Matrix::operator-- (int)
{
	Matrix temp = *this;
	for (int i = 0; i < col*row; i++)
		data[i] --;
	return temp;
}
Matrix Matrix::operator++ ()
{
	for (int i = 0; i < col*row; i++)
		data[i] ++;
	return *this;
}
Matrix Matrix::operator-- ()
{
	for (int i = 0; i < col*row; i++)
		data[i] --;
	return *this;
}
istream& operator >> (istream& in, Matrix& mat)
{
	for (int i = 0; i < mat.row*mat.col; i++)
		in >> mat.data[i];
	return in;
}


/// Student No.3

Matrix& Matrix::operator=(const Matrix& mat2)
{
    if ( &mat2 == this ){
        return *this;
    }
    this -> row = mat2.row ;
    this -> col = mat2.col ;
    if(data != 0)
    {
        delete [] data;
        data = 0;
    }
    data = new int[mat2.row*mat2.col];
    for (int i = 0; i < mat2.row*mat2.col ; i++)
    {
        data[i] = mat2.data[i];
    }
    return *this;
}

ostream& operator<< (ostream& out, Matrix mat)
{
    int element =0 ;
    for (int i=0 ; i < mat.row ; i ++)
    {
        for ( int j = 0 ; j< mat.col ; j++ )
        {
            out << mat.data[element++] << "  " ;
        }
        out << endl ;
    }
    return out ;
}

bool Matrix::operator== (Matrix mat2)
{
    bool same = false;
    if ( this->row == mat2.row && this->col == mat2.col)
    {
        for(int i=0 ; i<mat2.row * mat2.col ; i++)
            if (this->data[i] == mat2.data[i])
               same = true ;
            else
             { same = false ; break ;}
    }
    return same ;
}

bool Matrix::operator!= (Matrix mat2)
{
    bool not_equal;
    if ( *this == mat2)
        not_equal = false ;
    else
        not_equal = true  ;
    return not_equal ;
}

bool Matrix::isSquare ()
{
    if (row == col) return true ;
        else return false ;
}

bool Matrix::isSymetric ()
{
    bool symmetric = false ;
    Matrix temp (row , col , data) ;
    transpose() ;
    Matrix temp_after_transpose (row,col,data) ;
    if (isSquare())
    {
        if ( temp == temp_after_transpose )
            symmetric = true  ;
        else
            symmetric = false ;
    }
    transpose();
    return symmetric ;


}

bool Matrix::isIdentity ()
{
    bool identity = true;
    if (isSquare())
    {
        for (int i = 0 ; i < row*row ; i++)
            if( i%(row+1) == 0 )
            {
                if(data[i] != 1)   // for the Diagonal elements
                    identity = false ;
            }
            else
            {
                if(data[i] != 0)   // not in the diagonal
                    identity = false;
            }
    }
    else
        identity = false ;
    return identity ;
}

void Matrix::transpose()
{
    int transpose[100] , add = col , digit = 0;

    for(int i=0 ; i<col ; i++)
    {
        for(int j=0 ; j<row ; j++)
        {
            transpose[digit++] = data[i+add*j] ;
        }
    }
    swap(row,col);

    for(int i=0 ; i<digit ; i++)
        data[i] = transpose[i] ;
}





void Matrix::deleteMatrix()
{
    delete[] (*this).data ;
    data = 0;
}



