#include <bits/stdc++.h>
using namespace std;

// Function to find maximum pairwise product using a naive approach
int MaxPairwiseProductNaive(int A[], int n) {
    int maxProduct = 0;

    // Iterate over all pairs (i, j) where i < j
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int currentProduct = A[i] * A[j];
            if (currentProduct > maxProduct) {
                maxProduct = currentProduct;
            }
        }
    }

    return maxProduct;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int A[n];
    cout << "Enter the elements:\n";
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }

    int result = MaxPairwiseProductNaive(A, n);
    cout << "The maximum pairwise product is: " << result << "\n";

    return 0;
}
