#include <iostream>
using namespace std;

int main()
{
    int a[10][10], b[10][10], mult[10][10]={0}, r1, c1, r2, c2, i, j, k;

    cout << "Enter rows and columns for first matrix: \n";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for second matrix: \n";
    cin >> r2 >> c2;
    // If column of first matrix in not equal to row of second matrix,
    // ask the user to enter the size of matrix again.
    if(c1!=r2)
    {
        cout << "Error! column of first matrix not equal to row of second.";
        return 0;
    }
    // Storing elements of first matrix.
    cout << endl << "Enter elements of matrix 1:" << endl;
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c1; ++j)
        {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> a[i][j];
        }

    // Storing elements of second matrix.
    cout << endl << "Enter elements of matrix 2:" << endl;
    for(i = 0; i < r2; ++i)
        for(j = 0; j < c2; ++j)
        {
            cout << "Enter element b" << i + 1 << j + 1 << " : ";
            cin >> b[i][j];
        }
    // Multiplying matrix a and b and storing in array mult.
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
            for(k = 0; k < c1; ++k)
            {
                mult[i][j] += a[i][k] * b[k][j];
            }
    // Displaying the multiplication of two matrix.
    cout << endl << "Output Matrix: " << endl;
    for(i = 0; i < r1; ++i)
    for(j = 0; j < c2; ++j)
    {
        cout << "   " << mult[i][j];
        if(j == c2-1)
            cout << endl<<endl;
    }

    return 0;
}
