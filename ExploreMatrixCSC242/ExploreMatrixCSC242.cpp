// ExploreMatrixCSC242.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <random>
#include <iostream>
#include <cmath>

const int ROWS = 4;
const int COLS = 4;
double matrix[ROWS][COLS];

int main() {
    // Create a random number generator
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> dis(0, 1);

    // Fill the matrix with random numbers
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            matrix[i][j] = std::round(dis(gen));
        }
    }

    // Output the matrix
    for (int i = 0; i < ROWS; i++) {
        std::cout << std::endl;
        for (int j = 0; j < COLS; j++) {
            std::cout << matrix[i][j] << " ";

        }
    }
    std :: cout << ""<<  std::endl;
    //evaluate consecutive zeros in each row
    for (int i = 0; i < ROWS; i++) {
        
            if (matrix[i][0] == 0 && matrix[i][1] == 0 && matrix[i][2] == 0 && matrix[i][3] == 0) {
                std::cout << "All 0's on row " << i << std::endl;
            }
            if (matrix[i][0] == 1 && matrix[i][1] == 1 && matrix[i][2] == 1 && matrix[i][3] == 1)
            {
                std::cout << "All 1's on row" << i << std::endl;
            }    
    }
    //evaluate consecutive zeros in each column
    for (int i = 0; i < ROWS; i++) {

        if (matrix[0][i] == 0 && matrix[1][i] == 0 && matrix[2][i] == 0 && matrix[3][i] == 0) {
            std::cout << "All 0's on column " << i << std::endl;
        }
        if (matrix[0][i] == 1 && matrix[1][i] == 1 && matrix[2][i] == 1 && matrix[3][i] == 1)
        {
            std::cout << "All 1's on column" << i << std::endl;
        }
    }


    //evaluate consecutive zeros in each diagonal
    

        if (matrix[1][1] == 0 && matrix[2][2] == 0 && matrix[3][3] == 0 && matrix[4][4] == 0) {
            std::cout << "All 0's on diagonal 1 " << std::endl;
        }
        if (matrix[1][1] == 1 && matrix[2][2] == 1 && matrix[3][3] == 1 && matrix[4][4] == 1)
        {
            std::cout << "All 1's on diagonal 1"  << std::endl;
        }

        if (matrix[3][0] == 0 && matrix[2][1] == 0 && matrix[1][2] == 0 && matrix[0][3] == 0) {
            std::cout << "All 0's on diagonal 2 " << std::endl;
        }
        if (matrix[3][0] == 0 && matrix[2][1] == 0 && matrix[1][2] == 0 && matrix[0][3] == 1)
        {
            std::cout << "All 1's on diagonal 2" << std::endl;
        }
    

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
