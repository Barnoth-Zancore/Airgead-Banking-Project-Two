// InvestmentCalculator.cpp
// Author: Morgun Leonard

#include "InvestmentCalculator.h"
#include <iostream>
#include <iomanip>

// Constructor to initialize the investment calculator with user input values
InvestmentCalculator::InvestmentCalculator(double initialInvestment, double monthlyDeposit, double annualInterestRate, int numberOfYears)
    : initialInvestment(initialInvestment), monthlyDeposit(monthlyDeposit), annualInterestRate(annualInterestRate), numberOfYears(numberOfYears) {}

// Method to calculate investment growth without monthly deposits
void InvestmentCalculator::calculateWithoutMonthlyDeposits() {
    double balance = initialInvestment; // Initialize balance with the initial investment
    withoutDepositsData.clear(); // Clear any previous data

    // Loop through each year
    for (int year = 1; year <= numberOfYears; ++year) {
        // Calculate yearly interest
        double interest = balance * (annualInterestRate / 100);
        // Update balance by adding the earned interest
        balance += interest;
        // Store the year, balance, and interest in the data vector
        withoutDepositsData.push_back({ year, balance, interest });
    }
}

// Method to calculate investment growth with monthly deposits
void InvestmentCalculator::calculateWithMonthlyDeposits() {
    double balance = initialInvestment; // Initialize balance with the initial investment
    withDepositsData.clear(); // Clear any previous data

    // Loop through each year
    for (int year = 1; year <= numberOfYears; ++year) {
        double yearlyInterest = 0; // Initialize yearly interest

        // Loop through each month
        for (int month = 1; month <= 12; ++month) {
            // Calculate monthly interest
            double monthlyInterest = (balance + monthlyDeposit) * (annualInterestRate / 100 / 12);
            // Update balance by adding the monthly deposit and earned interest
            balance += monthlyDeposit + monthlyInterest;
            // Accumulate monthly interest for the year
            yearlyInterest += monthlyInterest;
        }
        // Store the year, balance, and yearly interest in the data vector
        withDepositsData.push_back({ year, balance, yearlyInterest });
    }
}

// Method to display the calculated results
void InvestmentCalculator::displayResults() const {
    // Display results without additional monthly deposits
    std::cout << "Balance and Interest Without Additional Monthly Deposits\n";
    std::cout << "Year\tYear End Balance\tYear End Earned Interest\n";
    for (const auto& data : withoutDepositsData) {
        std::cout << data.year << "\t$" << std::fixed << std::setprecision(2) << data.balance << "\t\t$" << data.interest << "\n";
    }

    // Display results with additional monthly deposits
    std::cout << "\nBalance and Interest With Additional Monthly Deposits\n";
    std::cout << "Year\tYear End Balance\tYear End Earned Interest\n";
    for (const auto& data : withDepositsData) {
        std::cout << data.year << "\t$" << std::fixed << std::setprecision(2) << data.balance << "\t\t$" << data.interest << "\n";
    }
}
