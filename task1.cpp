#include <iostream>
using namespace std;

int main() {
    // 1D Array: A single row of 5 integers
    int scores[5] = {85, 90, 78, 92, 88};
    
    // 2D Array: A 2x3 table (2 rows, 3 columns)
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    cout << "1D Array first element: " << scores[0] << endl;
    cout << "2D Array element at row 1, col 2: " << matrix[1][2] << endl;
    return 0;
}