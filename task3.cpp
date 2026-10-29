#include <iostream>
using namespace std;

int main() {
    int arr[5] = {29, 10, 14, 37, 13};
    int n = 5;

    // Find Max and Min
    int maxVal = arr[0], minVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal) maxVal = arr[i];
        if (arr[i] < minVal) minVal = arr[i];
    }

    // Bubble Sort (Ascending Order)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Output Results
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    cout << "Maximum Value: " << maxVal << endl;
    cout << "Minimum Value: " << minVal << endl;

    return 0;
}
