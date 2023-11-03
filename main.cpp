#include<iostream>

int main() {
    const int numMonths = 6;
    double profits[numMonths];


    for (int i = 0; i < numMonths; i++) {
        std::cout << "Enter the profit for month " << i + 1 << ": ";
        std::cin >> profits[i];
    }

    double totalProfit = 0.0;

    for (int i = 0; i < numMonths; i++) {
        totalProfit += profits[i];
    }

    double averageProfit = totalProfit / numMonths;

    std::cout << "Total profit for 6 months: " << totalProfit << std::endl;
    std::cout << "Average profit for 6 months: " << averageProfit << std::endl;
	return 0;
}