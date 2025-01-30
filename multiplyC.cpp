// C++: Calculate the multiplication of an array
#include <iostream>
using namespace std;
 
int multiplier(int arr[], int size) {
    int total = 1;
    for (int i = 0; i < size; i++) {
        total *= arr[i];
    }
    return total;
}
 
int main () {
    int numbers [] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof( numbers [0]);
    int result = multiplier(numbers, size);
    cout << "Multiplier in C++" << result << endl;
    return 0;
}
