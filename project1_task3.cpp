/**
 * @file project1_task3.cpp
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
#include "newfraction2.h"

int main()
{
    Fraction f1, f2;

    // Input first fraction
    std::cout << "Enter the first fraction: numerator denominator" << std::endl;
    std::cin >> f1;    // Notice we use the stream operator directly here

    // Input second fraction
    std::cout << "Enter the second fraction: numerator denominator" << std::endl;
    std::cin >> f2;

    // Display the entered fractions
    std::cout << "The two fractions entered are" << std::endl;
    std::cout << "f1 = " << f1 << std::endl;
    std::cout << "f2 = " << f2 << std::endl;

    // Perform arithmetic operations (operator overlpaded)
    Fraction sum = f1 + f2;
    Fraction diff = f1 - f2;
    Fraction prod = f1 * f2;
    Fraction quot = f1 / f2;

    // Display the results
    std::cout << "The arithmetic operations on these two fractions:" << std::endl;
    std::cout << "f1 + f2 = " << sum << std::endl;
    std::cout << "f1 - f2 = " << diff << std::endl;
    std::cout << "f1 * f2 = " << prod << std::endl;
    std::cout << "f1 / f2 = " << quot << std::endl;

    return 0;
}
