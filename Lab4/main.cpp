#include <iostream>
#include <string>
#include "matrix.h"

using namespace std;

template <typename T1>
void demoTemplate(Matrix<T1>& M, T1 array1[][MAXCOLS], T1 array2[][MAXCOLS]);

int main()
{
    string str1[MAXROWS][MAXCOLS] =
    {
   {"Congra", "y", "ar"},
   {"alm", "don", "La"}
    };
    string str2[MAXROWS][MAXCOLS] =
    {
   {"tulations", "ou", "e"},
   {"ost", "e    the", "b!"}
    };


    Matrix<string> stringMatrix;

    int _int1[MAXROWS][MAXCOLS] =
    {
        {1,2,3},
        {4,5,6}
    };
    int _int2[MAXROWS][MAXCOLS] =
    {
        {6,5,4},
        {3,2,1}
    };
    Matrix<int> intMatrix;

    float _float1[MAXROWS][MAXCOLS] =
    {
        {1.6f,2.5f,3.4f},
        {4.3f,5.2f,6.1f}
    };
    float _float2[MAXROWS][MAXCOLS] =
    {
        {6.1f,5.2f,4.3f},
        {3.4f,2.5f,1.6f}
    };
    Matrix<float> floatMatrix;


    cout << "\nDemonstrating with string matrix:" << endl;
    demoTemplate(stringMatrix, str1, str2);
    cout << "\n" << endl;

    cout << "\nDemonstrating with int matrix:" << endl;
    demoTemplate(intMatrix, _int1, _int2);
    cout << "\n" << endl;

    cout << "\nDemonstrating with int matrix:" << endl;
    demoTemplate(floatMatrix, _float1, _float2);
    cout << "\n" << endl;


    return 0;
}


template <typename T1>
void demoTemplate(Matrix<T1>& M, T1 array1[][MAXCOLS], T1 array2[][MAXCOLS])
{
    M.setMatrix(array1);
    cout << "\nMatrix set to first array" << endl;
    M.printMatrix();

    M.addMatrix(array2);
    cout << "\nMatrix incremented by second array" << endl;
    M.printMatrix();
}
