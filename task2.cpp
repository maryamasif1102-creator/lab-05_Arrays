#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 25, 30, 45, 50};
    int target = 30;
    bool found = false;

    // Traversal and Search
    cout << "Traversing array: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
        if (arr[i] == target) {
            found = true;
        }
    }
    cout << endl;

    if (found) {
        cout << "Target " << target << " found in the array!" << endl;
    } else {
        cout << "Target not found." << endl;
    }
    return 0;
}
