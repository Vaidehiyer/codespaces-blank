/**
 * @file project1_task2.cpp
 * @author Hakim Abdisalam
 * StartID: oc3378es
 * @brief Tester file for Modified  Fraction class
 * @version 0.1
 * @date 2024-07-07
 * Instructor: Jerome Covington
 * Due date: 07/08/2024
 *
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <iostream>
#include "newfraction1.h"

int main()
{
    int num1, denom1, num2, denom2;

    // Input first fraction
    std::cout << "Enter the first fraction: numerator denominator" << std::endl;
    std::cin >> num1 >> denom1;
    Fraction f1(num1, denom1);

    // Input second fraction
    std::cout << "Enter the second fraction: numerator denominator" << std::endl;
    std::cin >> num2 >> denom2;
    Fraction f2(num2, denom2);

    // Display the entered fractions
    std::cout << "The two fractions entered are" << std::endl;
    std::cout << "f1 = ";
    f1.display();
    std::cout << "f2 = ";
    f2.display();

    // Perform arithmetic operations
    Fraction sum = add(f1, f2);
    Fraction diff = subtract(f1, f2);
    Fraction prod = multiply(f1, f2);
    Fraction quot = divide(f1, f2);

    // Display the results
    std::cout << "The arithmetic operations on these two fractions:" << std::endl;
    std::cout << "f1 + f2 = ";
    sum.display();
    std::cout << "f1 - f2 = ";
    diff.display();
    std::cout << "f1 * f2 = ";
    prod.display();
    std::cout << "f1 / f2 = ";
    quot.display();

    return 0;
}
