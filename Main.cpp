// main.cpp
// Author: Morgun Leonard

#include "InvestmentCalculator.h"
#include <iostream>
#include <stdexcept>

int main() {
    char continueTesting = 'y'; // Variable to control the loop for testing different values

    while (continueTesting == 'y') {
        double initialInvestment, monthlyDeposit, annualInterestRate;
        int numberOfYears;

        std::cout << "************ Data Input ************\n";

        try {
            // Get initial investment amount from user
            std::cout << "Initial Investment Amount: ";
            if (!(std::cin >> initialInvestment) || initialInvestment < 0) {
                throw std::invalid_argument("Invalid input for Initial Investment Amount.");
            }

            // Get monthly deposit amount from user
            std::cout << "Monthly Deposit: ";
            if (!(std::cin >> monthlyDeposit) || monthlyDeposit < 0) {
                throw std::invalid_argument("Invalid input for Monthly Deposit.");
            }

            // Get annual interest rate from user
            std::cout << "Annual Interest (Compounded): ";
            if (!(std::cin >> annualInterestRate) || annualInterestRate < 0) {
                throw std::invalid_argument("Invalid input for Annual Interest.");
            }

            // Get number of years for investment from user
            std::cout << "Number of Years: ";
            if (!(std::cin >> numberOfYears) || numberOfYears <= 0) {
                throw std::invalid_argument("Invalid input for Number of Years.");
            }

            // Prompt user to press any key to continue
            std::cout << "Press any key to continue . . .\n";
            std::cin.ignore(); // Ignore remaining input
            std::cin.get(); // Wait for user input

            // Create an instance of InvestmentCalculator with the user inputs
            InvestmentCalculator calculator(initialInvestment, monthlyDeposit, annualInterestRate, numberOfYears);

            // Calculate growth without monthly deposits and display results
            calculator.calculateWithoutMonthlyDeposits();
            // Calculate growth with monthly deposits and display results
            calculator.calculateWithMonthlyDeposits();
            // Display all results
            calculator.displayResults();

            // Ask user if they want to test different values
            std::cout << "Would you like to test different values? (y/n): ";
            std::cin >> continueTesting;
        }
        catch (const std::invalid_argument& e) {
            // Handle invalid input errors
            std::cerr << "Error: " << e.what() << std::endl;
            std::cin.clear(); // Clear the error state of cin
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore invalid input
            continueTesting = 'y'; // Continue testing with new values
        }
    }

    return 0;
}
