/*Write a program to perform folloWing operations on matrix using functions
and sWitch case: (a)addition (b) subtraction (c) multiplication (d) transpose*/
#include <iostream>
using namespace std;
void printMatrix(int mat[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << mat[i][j] << "\t";
        cout << "\n";
    }
    cout << "\n";
}
void performOperation(int mat1[3][3], int mat2[3][3], int op)
{
    int resultMat[3][3] = {0};
    switch (op)
    {
    case 1:
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                resultMat[i][j] = mat1[i][j] + mat2[i][j];
        break;
    case 2:
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                resultMat[i][j] = mat1[i][j] - mat2[i][j];
        break;
    case 3:
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                for (int k = 0; k < 3; k++)
                    resultMat[i][j] += mat1[i][k] * mat2[k][j];
        break;
    case 4:
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                resultMat[i][j] = mat2[j][i];
        break;
    default:
        cout << "Invalid operation\n";
        break;
    }
    printMatrix(resultMat);
}
int main()
{
    int mat1[3][3] = {
        {13, 22, 33},
        {43, 65, 46},
        {73, 87, 79}};
    int mat2[3][3] = {
        {17, 15, 31},
        {20, 92, 2},
        {35, 35, 3}};
    *operations are : *1 = add * 2 = subtract * 3 = multiply * 4 = transpose
                                                                       cout
                                                                   << "Given matrices are: \n";
    printMatrix(mat1);
    printMatrix(mat2);
    cout << "Addition: mat1 + mat2\n";
    performOperation(mat1, mat2, 1);
    cout << "Subtraction: mat1 - mat2\n";
    performOperation(mat1, mat2, 2);
    cout << "Multiplication: mat1 . mat2\n";
    performOperation(mat1, mat2, 3);
    cout << "Transpose of mat2 is:\n";
    performOperation(mat1, mat2, 4);
    return 0;
}