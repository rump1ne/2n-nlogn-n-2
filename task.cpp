#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

//Функция для поиска числа в двумерном массиве с использованием алгоритма 2n
bool linearSearch(const vector<vector<int>>& arr, int target) {
    int rows = arr.size();
    int cols = arr[0].size();

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] == target) {
                return true;
            }
        }
    }

    return false;
}

//Функция для поиска числа в отсортированном одномерном массиве с использованием алгоритма logn
bool binarySearch(const vector<int>& arr, int target) {
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (arr[mid] == target) {
            return true;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return false;
}

//Функция для поиска числа в двумерном массиве с использованием алгоритма n^ 2
bool quadraticSearch(const vector<vector<int>>& arr, int target) {
    int rows = arr.size();
    int cols = arr[0].size();

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] == target) {
                return true;
            }
        }
    }

    return false;
}

int main() {
    //Создаём двумерный массив
    vector<vector<int>> arr = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    //Получаем от пользователя номер для поиска
    int target;
    cout << "Введите номер для поиска: ";
    cin >> target;

    //Поиск номера с использованием различных алгоритмов
    bool found_2n = linearSearch(arr, target);
    bool found_logn = binarySearch({1, 2, 3, 4, 5, 6, 7, 8, 9}, target);
    bool found_n2 = quadraticSearch(arr, target);

    //Выводим результат
    cout << "Используя алгоритм 2n: ";
    found_2n ? cout << "Найден" : cout << "Не найден";
    cout << endl;

    cout << "Используя алгоритм logn: ";
    found_logn ? cout << "Найден" : cout << "Не найден";
    cout << endl;

    cout << "Используя алгоритм n^2: ";
    found_n2 ? cout << "Найден" : cout << "Не найден";
    cout << endl;

    return 0;
}
