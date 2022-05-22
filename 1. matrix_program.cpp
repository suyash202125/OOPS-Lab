#include <iostream>
using namespace std;

//function for displaying the matrix.
void display_matrix(int** matrix, int rows, int columns){
    
    cout << "The desired matrix is: " << endl;

    // loop for outputing the matrix
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void matrix(){
    //declaring variables of rows and columns that I want in my matrix
    int rows, columns;

    cout << "Enter the number of rows in the matrix: ";
    cin >> rows; // taking input of number of rows i want in my matrix

    cout << "Enter the number of columns in the matrix: ";
    cin >> columns; // taking input of number of columns i want in my matrix

    cout << endl;

    //declaring a double pointer and allocating rows of pointer in heap for matrix 'mat'
    int **mat = new int*[rows];

    // allocating columns to each row of pointers in heap of matrix 'mat'
    for(int i = 0; i < rows; i++){
        mat[i] = new int[columns];
    }

    //assigning values at each index
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            cout << "Enter the number you want at row " << i + 1 << " column " << j + 1 << " in the desired matrix: ";
            cin >> mat[i][j];
            
        }                
    }
    cout << endl;

    //calling the display function to display the matrix 'mat'
    display_matrix(mat, rows, columns);
}


int main(){
    
    //calling the matrix function
    matrix();

    return 0;
}