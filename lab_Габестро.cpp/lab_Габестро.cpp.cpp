// lab_Габестро.cpp.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "ukr");

    const int rows = 3;
    const int cols = 4;

    double array[rows][cols] = {
        {1.2, 2.3, 3.4, 4.5},
        {5.6, 6.7, 7.8, 8.9},
        {9.0, 1.1, 2.2, 3.3}
    };

    double max1 = array[0][0], max2 = array[0][1];
    double min1 = array[0][0], min2 = array[0][1];

    double product_max, diff_min;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            double curr = array[i][j];

            if (curr > max1) {
                max2 = max1;
                max1 = curr;
            }
            else if (curr > max2) {
                max2 = curr;
            }

            if (curr < min1) {
                min2 = min1;
                min1 = curr;
            }
            else if (curr < min2) {
                min2 = curr;
            }
        }
    }

    product_max = max1 * max2;
    diff_min = min1 - min2;

    double row_sums[rows] = { 0 };

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            row_sums[i] += array[i][j];
        }
    }

    cout << "Добуток двох максимальних елементів: " << product_max << endl;
    cout << "Різниця двох мінімальних елементів: " << diff_min << endl;
    cout << "Суми елементів рядків двовимірного масиву:" << endl;

    for (int i = 0; i < rows; ++i) {
        cout << "Сума рядка " << i + 1 << ": " << row_sums[i] << endl;
    }

    return 0;
}