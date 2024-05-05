#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

double det(vector<vector<double>> matrix, int n) {
    if (n == 1) {
        return matrix[0][0];
    }
    else if (n == 2) {
        return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
    }
    else {
        double det_sum = 0;
        for (int i = 0; i < n; i++) {
            vector<vector<double>> minor(n - 1, vector<double>(n - 1));
            for (int j = 1; j < n; j++) {
                for (int k = 0, column = 0; k < n; k++) {
                    if (k != i) {
                        minor[j - 1][column] = matrix[j][k];
                        column++;
                    }
                }
            }
            det_sum += pow(-1, i) * matrix[0][i] * det(minor, n - 1);
        }
        return det_sum;
    }
}

int main() {
    int n{ 3 }; vector<vector<double>> matrix(n, vector<double>(n));
    cout << "Enter the elements of the matrix by order : " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    double determinant = det(matrix, n);
    cout << "Determinant is equal to"<< setw(4) <<determinant << endl;
    system("pause>0");
}