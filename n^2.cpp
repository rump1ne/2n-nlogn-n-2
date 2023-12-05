#include <iostream>
#define N 3

bool number(int array[n][n], int target) {
	for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (array[i][j] == target) {
                return true;
            }
        }
    }
    return false;
}
    
int main() {
setlocale(LC_ALL, "Russian");
	
	int array[n][n] = 
  {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	int target;
	std::cout << "Введите желаемый номер: ";
	std::cin >> target;
	if(number(array,target))
  { 
		std::cout << "Номер " << target << " Найден в матрице\n";
	}
	else 
  {
		std::cout << "Номер " << target << " Не найден в матрице\n";
	}
}
