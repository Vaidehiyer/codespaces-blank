/**
 * @file newfraction1.h
 * @author Hakim Abdisalam
 * StartID: oc3378es
 * @brief MOdified Fraction header file
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
     * @param denom : Denominator for the Fraction
     */
    Fraction(int num = 0, int denom = 1);

    /**
     * @brief Setter for numerator
     *
     * @param num  The numerator part of the Fraction
     * @pre numerator is not empty or null
     * @post numerator is set to num
     */
    void setNumerator(int num);

    /**
     * @brief Setter for denominator
     *
     * @param denom    The denominator part of the Fraction
     * @pre denominator is not empty or null
     * @post denominator is set to num
     */
    void setDenominator(int denom);

    /**
     * @brief Get function that returns the numerator of the Fraction
     *
     * @return int  An integer representing The numerator part of the Fraction
     */
    int getNumerator();

    /**
     * @brief Get function that returns the denominator of the Fraction.
     *
     * @return int An integer representing The denominator part of the Fraction
     */
    int getDenominator();

    /**
     * @brief Displays the Fraction in required format
     * Format: numerator/denominator
     *
     */
    void display();
};

/**
 * @brief Non member function for add operation
 * 
 * @param f1 : First fraction
 * @param f2 : Second fraction
 * @return Fraction : Added result as Fraction
 */
Fraction add(Fraction& f1, Fraction& f2);

/**
 * @brief Non member function for Subtract operation
 * 
 * @param f1 : First fraction
 * @param f2 : Second fraction
 * @return Fraction : Subtracted result as Fraction
 */
Fraction subtract(Fraction& f1, Fraction& f2);

/**
 * @brief Non member function for Multipli operation
 * 
 * @param f1 : First fraction
 * @param f2 : Second fraction
 * @return Fraction : Multiplied result as Fraction
 */
Fraction multiply(Fraction& f1, Fraction& f2);

/**
 * @brief Non member function for Divide operation
 * 
 * @param f1 : First fraction
 * @param f2 : Second fraction
 * @return Fraction : Divided result as Fraction
 */
Fraction divide(Fraction& f1, Fraction& f2);

#endif // Fraction_H