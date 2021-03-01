#include "matrix.h"
#include <iostream>
#include <string>
using namespace std;

template <typename T>
Matrix<T>::Matrix()
{
   rows = MAXROWS;
   cols = MAXCOLS;
   for (int i=0; i< rows; i++)
   {
      for(int j=0; j< cols; j++)
      {
	 TArray[i][j] = '\0';
      }
   }
}

template <typename T>
void Matrix<T>::printMatrix()
{
   for (int i=0; i< rows; i++)
   {
      for(int j=0; j< cols; j++)
      {
	 cout << TArray[i][j] << "   ";
      }
      cout << endl;
   }
}

template <typename T>
void Matrix<T>::setMatrix(T otherArray[][MAXCOLS])
{
   for (int i=0; i< rows; i++)
   {
      for(int j=0; j< cols; j++)
      {
	 TArray[i][j] = otherArray[i][j];
      }
   }
}

template <typename T>
void Matrix<T>::addMatrix(T otherArray[][MAXCOLS])
{
   for (int i=0; i< rows; i++)
   {
      for(int j=0; j< cols; j++)
      {
	 TArray[i][j] += otherArray[i][j];
      }
   }
}

template <typename T>
void Matrix<T>::addMatrix(Matrix otherMatrix)
{
   addMatrix(otherMatrix.TArray);
}
template class Matrix <int>;
template class Matrix <char>;
template class Matrix <float>;
template class Matrix <string>;
