#ifndef INVESTMENT_CALCULATOR_H_
#define INVESTMENT_CALCULATOR_H_

#include <vector>

// Author: Morgun Leonard

// Class to calculate investment growth with and without monthly deposits
class InvestmentCalculator {
public:
    // Constructor to initialize the investment calculator with user input values
    InvestmentCalculator(double initialInvestment, double monthlyDeposit, double annualInterestRate, int numberOfYears);

    // Method to calculate investment growth without monthly deposits
    void calculateWithoutMonthlyDeposits();

    // Method to calculate investment growth with monthly deposits
    void calculateWithMonthlyDeposits();

    // Method to display the calculated results
    void displayResults() const;

private:
    double initialInvestment;  // Initial investment amount
    double monthlyDeposit;     // Monthly deposit amount
    double annualInterestRate; // Annual interest rate
    int numberOfYears;         // Number of years for investment

    // Struct to store yearly data for display
    struct YearlyData {
        int year;      // Year number
        double balance; // Year-end balance
        double interest; // Year-end earned interest
    };

    std::vector<YearlyData> withoutDepositsData; // Data for growth without monthly deposits
    std::vector<YearlyData> withDepositsData;    // Data for growth with monthly deposits
};

#endif // INVESTMENT_CALCULATOR_H_

