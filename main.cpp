#include<iostream>

int main() {
    const int numMonths = 12; // Number of months
    double profits[numMonths]; // Array to store profits

    // Input profits for each month
    for (int i = 0; i < numMonths; i++) {
        std::cout << "Enter profit for month " << i + 1 << ": ";
        std::cin >> profits[i];
    }

    double maxProfit = profits[0]; 
    double minProfit = profits[0]; 
    int maxMonth = 0; 
    int minMonth = 0; 
    double totalProfit = 0.0; 

    for (int i = 1; i < numMonths; i++) {
        if (profits[i] > maxProfit) {
            maxProfit = profits[i];
            maxMonth = i;
        }
        if (profits[i] < minProfit) {
            minProfit = profits[i];
            minMonth = i;
        }
        totalProfit += profits[i];
    }

    double averageProfit = totalProfit / numMonths;

  
    std::cout << "Month with the maximum profit: " << maxMonth +  1 << std::endl;
    std::cout << "Month with the minimum profit: " << minMonth + 1 << std::endl;
    std::cout << "Average profit for the year: " << averageProfit << std::endl;
	return 0;
}