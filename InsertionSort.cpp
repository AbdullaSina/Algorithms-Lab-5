#include <bits/stdc++.h>
using namespace std;

// Function prototype
void InsertionSort(int A[], int n);

// Main function (for testing)
int main() {
    int A[] = {5, 2, 4, 6, 1, 3};
    int n = sizeof(A) / sizeof(A[0]);

    InsertionSort(A, n);

    // Print sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; ++i) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}

// Insertion Sort function
void InsertionSort(int A[], int n) {
    for (int j = 1; j < n; ++j) {
        int value = A[j];
        int i = j - 1;
        while (i >= 0 && A[i] > value) {
            // Swap A[i] and A[i + 1]
            int temp = A[i];
            A[i] = A[i + 1];
            A[i + 1] = temp;
            i = i - 1;
        }
        A[i + 1] = value;
    }
}
