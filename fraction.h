/**
 * @file fraction.h
 * @author Hakim Abdisalam
 * StartID: oc3378es
 * @brief Fraction header file
 * @version 0.1
 * @date 2024-07-07
 * Instructor: Jerome Covington
 * Due date: 07/08/2024
 * 
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>   // Provides ostream and istream

using namespace std;

class Fraction
{
private:
    int numerator;   // Varibale to store numerator
    int denominator; // Variable to store denominator

public:
    /**
     * @brief Constructor initializes a Fraction object
     *
     * @param num : Numerator
     * @param denom : Denominator for the fraction
     */
    Fraction(int num = 0, int denom = 1);

    /**
     * @brief Setter for numerator
     *
     * @param num  The numerator part of the fraction
     * @pre numerator is not empty or null
     * @post numerator is set to num
     */
    void setNumerator(int num);

    /**
     * @brief Setter for denominator
     *
     * @param denom    The denominator part of the fraction
     * @pre denominator is not empty or null
     * @post denominator is set to num
     */
    void setDenominator(int denom);

    /**
     * @brief Get function that returns the numerator of the fraction
     *
     * @return int  An integer representing The numerator part of the fraction
     */
    int getNumerator();

    /**
     * @brief Get function that returns the denominator of the fraction.
     *
     * @return int An integer representing The denominator part of the fraction
     */
    int getDenominator();

    /**
     * @brief Displays the fraction in required format
     * Format: numerator/denominator
     *
     */
    void display();
};

#endif // FRACTION_H