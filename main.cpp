#include<iostream>

int main() {
    const int N = 10;
    double arr[N];

    for (int i = 0; i < N; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    double sumOfNegatives = 0.0;
    double productBetweenMinMax = 1.0;
    double productOfEvenElements = 1.0;
    double sumBetweenFirstAndLastNegatives = 0.0;
    int firstNegativeIndex = -1;
    int lastNegativeIndex = -1;

   
    for (int i = 0; i < N; i++) {
        if (arr[i] < 0) {
            sumOfNegatives += arr[i];
            if (firstNegativeIndex == -1) {
                firstNegativeIndex = i;
            }
            lastNegativeIndex = i;
        }
    }

    double minElement = arr[0];
    double maxElement = arr[0];

    for (int i = 1; i < N; i++) {
        if (arr[i] < minElement) {
            minElement = arr[i];
        }
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }

    for (int i = firstNegativeIndex + 1; i < lastNegativeIndex; i++) {
        productBetweenMinMax *= arr[i];
    }

    for (int i = 0; i < N; i += 2) {
        productOfEvenElements *= arr[i];
    }

    for (int i = firstNegativeIndex + 1; i < lastNegativeIndex; i++) {
        sumBetweenFirstAndLastNegatives += arr[i];
    }

    std::cout << "Sum of negative elements: " << sumOfNegatives << std::endl;
    std::cout << "Product of elements between minimum and maximum: " << productBetweenMinMax << std::endl;
    std::cout << "Product of elements with even indexes: " << productOfEvenElements << std::endl;
    std::cout << "Sum of elements between the first and last negative elements: " << sumBetweenFirstAndLastNegatives << std::endl;

	return 0;
}