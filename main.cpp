#include <iostream>
#include <ctime>

int main() {
    const int arraySize = 10; 
    int arr[arraySize]; 

 
    std::srand(static_cast<unsigned>(std::time(nullptr)));

    for (int i = 0; i < arraySize; i++) {
        arr[i] = std::rand() % 100; 
    }

  
    std::cout << "Random array: ";
    for (int i = 0; i < arraySize; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    int minElement = arr[0]; 
    int maxElement = arr[0]; 

    
    for (int i = 1; i < arraySize; i++) {
        if (arr[i] < minElement) {
            minElement = arr[i];
        }
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }

   
    std::cout << "Minimum element: " << minElement << std::endl;
    std::cout << "Maximum element: " << maxElement << std::endl;

    return 0;
}
