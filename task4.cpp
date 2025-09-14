#include <iostream>
using namespace std;

bool Dupe(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int arr[] = {3, 1, 4, 2, 5, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (Dupe(arr, n)){
        cout << "The array contains duplicates" << endl;
    }
    else{
        cout << "No duplicates" << endl;
    }

}
