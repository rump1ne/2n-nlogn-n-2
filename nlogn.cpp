#include <iostream>
#define N 3
using namespace std;



bool search(int row[], int target) 
{
    int left = 0;
    int right = n - 1;

    while (left <= right) 
    {
    int mid = left + (right - left) / 2;
    if (row[mid] == target) {
    return true;
    }
    else if (row[mid] < target) 
    {
    left = mid + 1;
    }
    else {
    right = mid - 1;
    }
    }

    return false;
}


bool number(int matrix[n][n], int target) 
{

    for (int i = 0; i < n; ++i) 
    { 
    if (search(matrix[i], target)) 
    {
    return true;
    }
    }

    return false;
}

int main() {
    int arr[n][n] = 
  {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
    };

    int target;
    cout << "Enter the desired number: ";
    cin >> target;
    if (number(arr, target)) {
    cout << "Number " << target << " Found in the matrix." << endl;
    }
    else {
    cout << "Number " << target << " Not found in the matrix." << endl;
    }

    return 0;
}
