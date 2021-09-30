#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    cout << "введите размер 1-ой матрицы: ";
    int row1, col1;
    cin >> row1 >> col1;
    double matrix1[row1][col1];
    cout << endl;

    cout << "введите размер 2-ой матрицы: ";
    int row2, col2;
    cin >> row2 >> col2;
    double matrix2[row2][col2];
    cout << endl;
    
    if (col1 != row2) {
        cout << "матрицы перемножить нельзя кол-во строк и столбцов не совпадает" << "\n\n";
        return 0;
    }
    
    cout << "введите элементы 1-ой матрицы: " << endl;
    for (int i = 0; i < row1; i++)
        for (int j = 0; j < col1; j++)
            cin >> matrix1[i][j];
    cout << endl;
    
    cout << "введите элементы 2-ой матрицы: " << endl;
    for (int i = 0; i < row2; i++)
        for (int j = 0; j < col2; j++)
            cin >> matrix2[i][j];
    cout << endl;
    
    cout << "1-ая матрица: " << "\n\n";
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            cout << matrix1[i][j] << "\t";
        }
        cout << endl;
    }

    cout << endl;

    cout << "2-ая матрица: " << "\n\n";
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            cout << matrix2[i][j] << "\t";
        }
        cout << endl;
    }
    
    cout << endl;
    
    double matrix3[row1][col2];
    row1 = 0;
    for (int counter = 0; counter < col1; counter++) {
        for (col2 = 0; col2 < col1; col2++) {
            row2 = 0;
            for (int j = 0; j < col1; j++) {
                matrix3[row1][col2] += matrix1[row1][col1] * matrix2[row2][col2];
                row2++;
            }
        }
        row1++;
        col2 = 0;
    }
    
    // вывод 3 матрицы не работает
    cout << "произведение матриц равно: " << "\n\n";
    for (int i = 0; i < col2; i++) {
        int counter = 0;
        for (int j = 0; j < col2; j++) {
            counter++;
            cout << matrix3[i][j] << "\t";
            if (counter >= col2)
                cout << endl;
        }
    }
    
    cout << endl;
    return 0;
}
