#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
int main() {
    vector<double> Vector;
    vector<vector<double>> Matrix(3, vector<double>(3));

    cout << "Enter the elements of the vector:" << endl;
    for (int i = 0; i < 3; i++) {
        double val;
        cin >> val;
        Vector.push_back(val);
    }

    cout << "Enter the Elements of the matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            double val;
            cin >> val;
            Matrix[i][j] = val;
        }
    }

    vector<double> Result(3);
    for (int i = 0; i < 3; i++) {
        Result[i] = 0;
        for (int j = 0; j < 3; j++) {
            Result[i] += Vector[j] * Matrix[i][j];
        }
    }

    cout << "Result is : [ ";
    for (int i = 0; i < 3; i++) {
        cout <<Result[i]<<setw(4);
    }
    cout << "] ";
    cout << endl;

    system("pause>0");
}