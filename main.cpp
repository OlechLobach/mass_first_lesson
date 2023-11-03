#include<iostream>

int main() {
    const int numSides = 5;
    double sides[numSides]; 

    std::cout << "Enter the lengths of the sides of the pentagon:" << std::endl;
    for (int i = 0; i < numSides; i++) {
        std::cout << "Side " << i + 1 << ": ";
        std::cin >> sides[i];
    }

    double perimeter = 0.0;

    for (int i = 0; i < numSides; i++) {
        perimeter += sides[i];
    }

    std::cout << "Perimeter of the pentagon: " << perimeter << std::endl;

	return 0;
}