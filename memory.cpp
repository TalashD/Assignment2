#include <iostream>
using namespace std;

int main() {
    int* arr = new int[5];
    
    for (int i = 0; i < 5; i++) {
        arr[i] = i + 1;
    }

    cout << "Array contents: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;

    return 0;
}
