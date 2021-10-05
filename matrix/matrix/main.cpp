#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    // размер первой матрицы
    
    cout << "введите размер 1-ой матрицы: ";
    int row1, col1;
    cin >> row1 >> col1;
    double matrix1[row1][col1];
    cout << endl;

    // размер второй матрицы
    
    cout << "введите размер 2-ой матрицы: ";
    int row2, col2;
    cin >> row2 >> col2;
    double matrix2[row2][col2];
    cout << endl;
    
    // проверка правила умножения
    
    if (col1 != row2) {
        cout << "матрицы перемножить нельзя кол-во строк и столбцов не совпадает" << "\n\n";
        return 0;
    }
    
    // ввод элементов первой матрицы
    
    cout << "введите элементы 1-ой матрицы: " << endl;
    for (int i = 0; i < row1; i++)
        for (int j = 0; j < col1; j++)
            cin >> matrix1[i][j];
    cout << endl;
    
    // ввод элементов второй матрицы
    
    cout << "введите элементы 2-ой матрицы: " << endl;
    for (int i = 0; i < row2; i++)
        for (int j = 0; j < col2; j++)
            cin >> matrix2[i][j];
    cout << endl;
    
    // вывод первой матрицы
    
    cout << "1-ая матрица: " << "\n\n";
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            cout << matrix1[i][j] << "\t";
        }
        cout << endl;
    }

    cout << endl;

    // вывод второй матрицы
    
    cout << "2-ая матрица: " << "\n\n";
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            cout << matrix2[i][j] << "\t";
        }
        cout << endl;
    }
    
    cout << endl;
    
    // ввод третьей матрицы
        
    double matrix3[row1][col2];
    
    for (int i = 0; i < row1; i++) {            // цикл с помощью которого присваивается значение каждому первому эл-ту новой
                                                // строки матрицы
        for (int j = 0; j < col2; j++) {        // цикл с помощью которого значение присваивается сначала первому потом второму
            int w = 0;                          // и тд эл-там строки матрицы
            
            for (int q = 0; q < row2; q++) {    // цикл который перемножает эл-ты 1-ой и 2-ой матриц и передаёт их в третью
                matrix3[i][j] += matrix1[i][q] * matrix2[w][j];
                w++;
            }
        }
    }
    
    // вывод третьей матрицы
    
    cout << "произведение матриц равно: " << "\n\n";
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            cout << matrix3[i][j] << "\t";
        }
        cout << endl;
    }
    
    cout << endl;
    return 0;
}

//cout << "\nrow1 = " << row1 << "\ncol2 = " << col2 << "\ncol1 = " << col1 << "\nrow2 = " << row2 << "\n\n";
