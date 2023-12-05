#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Function to search for a number in a two-dimensional array using the 2n algorithm
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

// Function to search for a number in a sorted one-dimensional array using the logn algorithm
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

// Function to search for a number in a two-dimensional array using the n^2 algorithm
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
    // Create a two-dimensional array
    vector<vector<int>> arr = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Get the number to search for from the user
    int target;
    cout << "Enter a number to search for: ";
    cin >> target;

    // Search for the number using different algorithms
    bool found_2n = linearSearch(arr, target);
    bool found_logn = binarySearch({1, 2, 3, 4, 5, 6, 7, 8, 9}, target);
    bool found_n2 = quadraticSearch(arr, target);

    // Print the results
    cout << "Using the 2n algorithm: ";
    found_2n ? cout << "Found" : cout << "Not found";
    cout << endl;

    cout << "Using the logn algorithm: ";
    found_logn ? cout << "Found" : cout << "Not found";
    cout << endl;

    cout << "Using the n^2 algorithm: ";
    found_n2 ? cout << "Found" : cout << "Not found";
    cout << endl;

    return 0;
}
