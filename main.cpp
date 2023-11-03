#include<iostream>

int main() {
    const int arraySize = 5; 
    int arr[arraySize]; 

    
    std::cout << "Enter " << arraySize << " integer numbers:" << std::endl;
    for (int i = 0; i < arraySize; i++) {
        std::cin >> arr[i];
    }


    std::cout << "Array in reverse order: ";
    for (int i = arraySize - 1; i >= 0; i--) {
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;
	return 0;
}