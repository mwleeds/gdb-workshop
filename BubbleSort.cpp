// File: BubbleSort.cpp
// Worst Case: O(n^2)
// Best Case: O(n)

#include <iostream>

void printArray(int* arr, int size);
void bubbleSort(int* arr, int size);

int main() {
    int arrlength = 4;
    int* testarr = new int[arrlength];
    testarr[0] = 4; testarr[1] = 1; testarr[2] = 2; testarr[3] = 0;

    std::cout << "start: ";
    printArray(testarr, arrlength);

    bubbleSort(testarr, arrlength);

    std::cout << "end: ";
    printArray(testarr, arrlength);

    delete []testarr;
    return 0;
}

void printArray(int* arr, int size) {
    std::cout << "[";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i];
        if (i != size - 1) std::cout << ",";
    }
    std::cout << "]" << std::endl;
}

void bubbleSort(int* arr, int arrlength) {
    if (arrlength == 1) return;
    bool sorted = false;
    while (!sorted) {
        // assume it's sorted until proven otherwise
        sorted = true;
        for (int i = 1; i <= arrlength; i++) {
            if (arr[i] < arr[i-1]) {
                sorted = false;
                int temp = arr[i-1];
                arr[i-1] = arr[i];
                arr[i] = temp;
            }
        }
    }
}
