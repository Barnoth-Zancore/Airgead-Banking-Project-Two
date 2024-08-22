# Airgead Banking Investment Calculator

## Description
This application calculates the growth of an investment over time with and without additional monthly deposits. It allows users to input initial investment amount, monthly deposit, annual interest rate, and number of years.

## Usage
1. Run the program.
2. Enter the initial investment amount.
3. Enter the monthly deposit amount.
4. Enter the annual interest rate (as a percentage).
5. Enter the number of years.
6. View the calculated balances and interests with and without additional monthly deposits.
7. Optionally, test different values by following the prompts.

## Project Summary
This project involved creating an investment calculator for Airgead Banking, a fictional company that seeks to teach high school students about fiscal responsibility through an interactive system. The program calculates how investments grow over time, both with and without additional monthly deposits, considering the effects of compound interest. The primary problem it solves is demonstrating the power of compound interest and the benefits of consistent investment over time.

## Reflection

### 1. What problem was the project solving?
The project was designed to teach students about the importance of saving and investing by showing them how their money can grow over time through compound interest. It provides a clear, interactive way to see the impact of different variables, such as initial investment, monthly deposits, and interest rates.

### 2. What did I do particularly well?
One of the key strengths of this project was the clear and well-documented code. I ensured that the code was easy to follow, with appropriate inline comments and a consistent naming convention. The program also handles user input robustly, ensuring that only valid data is processed.

### 3. Where could I enhance my code?
While the current implementation meets all functional requirements, there are areas for potential enhancement:
- **Performance Optimization:** The program could be optimized further by reducing redundant calculations, especially within loops.
- **Security Improvements:** Implementing more comprehensive error handling and input validation could make the program more secure against invalid input or unexpected data types.
- **User Interface:** Enhancing the user interface with a graphical component or more detailed prompts could improve user experience.

### 4. Which pieces of the code did I find most challenging to write, and how did I overcome this?
The most challenging part of the code was implementing the compound interest calculation with monthly deposits. Managing the loop structures to correctly accumulate monthly interest and deposits required careful attention to detail. I overcame this challenge by breaking down the problem into smaller steps, thoroughly testing each component, and using online resources to verify the accuracy of my calculations.

### 5. What tools or resources am I adding to my support network?
Throughout this project, I relied on various tools and resources, including:
- **C++ Documentation:** To understand best practices and nuances of the language.
- **Online Forums:** Such as Stack Overflow, where I could see how others approached similar problems.
- **GitHub:** As a version control system, helping me manage and track changes effectively.

### 6. What skills from this project will be particularly transferable to other projects or course work?
Several skills from this project will be useful in other areas:
- **Object-Oriented Programming (OOP):** The use of classes and objects in C++ is a transferable skill that will be beneficial in any project requiring complex data structures or behavior.
- **Code Documentation:** Writing clear and concise comments and maintaining a readable codebase is crucial for any programming project.
- **Problem Decomposition:** Breaking down complex problems into manageable parts is a skill that will be valuable in any technical or analytical work.

### 7. How did I make this program maintainable, readable, and adaptable?
To ensure the program is maintainable, readable, and adaptable, I:
- **Used Clear Naming Conventions:** Variables and functions are named in a way that makes their purpose immediately apparent.
- **Provided Inline Comments:** Important sections of the code are explained with comments, making it easier for others (or myself) to understand the code in the future.
- **Separated Concerns:** The program logic is divided into different functions and classes, making it easier to modify or extend specific parts of the code without affecting the entire program.
- **Implemented Error Handling:** The code includes basic error handling to manage unexpected inputs and prevent crashes, contributing to its robustness and reliability.



## How to Run the Program
To compile and run the program, use the following commands:

```sh
g++ -o InvestmentCalculator main.cpp InvestmentCalculator.cpp
./InvestmentCalculator
