/**
 * @file project1_task1.cpp
 * @author Hakim Abdisalam
 * StartID: oc3378es
 * @brief Tester file for Fraction class
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
#include "fraction.h"

int main()
{
    // Test default constructor
    Fraction frac1;
    std::cout << "Default fraction: ";
    frac1.display();

    // Test parameterized constructor
    Fraction frac2(3, 4);
    std::cout << "Parameterized constructor fraction: ";
    frac2.display();

    // Test set functions
    frac1.setNumerator(5);
    frac1.setDenominator(6);
    std::cout << "After setting numerator to 5 and denominator to 6: ";
    frac1.display();

    // Test get functions
    std::cout << "Numerator: " << frac1.getNumerator() << std::endl;
    std::cout << "Denominator: " << frac1.getDenominator() << std::endl;

    return 0;
}
