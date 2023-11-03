#include<iostream>

int main() {
    const int numberOfMonths = 12;
    double profits[numberOfMonths];

   
    for (int i = 0; i < numberOfMonths; i++) {
        std::cout << "Enter profit for month " << i + 1 << ": ";
        std::cin >> profits[i];
    }

    int startMonth, endMonth;
    double minProfit, maxProfit;

    
    std::cout << "Enter the start month (from 1 to 12): ";
    std::cin >> startMonth;
    std::cout << "Enter the end month (from 1 to 12): ";
    std::cin >> endMonth;

  
    if (startMonth < 1 || startMonth > 12 || endMonth < 1 || endMonth > 12 || startMonth > endMonth) {
        std::cerr << "Invalid month input." << std::endl;
        return 1; 
    }

    minProfit = maxProfit = profits[startMonth - 1];

    for (int i = startMonth; i <= endMonth; i++) {
        if (profits[i - 1] < minProfit) {
            minProfit = profits[i - 1];
        }
        if (profits[i - 1] > maxProfit) {
            maxProfit = profits[i - 1];
        }
    }

 
    int minMonth, maxMonth;

    for (int i = startMonth; i <= endMonth; i++) {
        if (profits[i - 1] == minProfit) {
            minMonth = i;
        }
        if (profits[i - 1] == maxProfit) {
            maxMonth = i;
        }
    }

   
    std::cout << "Minimum profit (" << minProfit << ") was in month " << minMonth << std::endl;
    std::cout << "Maximum profit (" << maxProfit << ") was in month " << maxMonth << std::endl;

	return 0;
}