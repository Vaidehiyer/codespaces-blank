/**
 * @file newfraction2.cpp
 * @author Hakim Abdisalam
 * StartID: oc3378es
 * @brief Modified Fraction implementation file
 * @version 0.1
 * @date 2024-07-07
 * Instructor: Jerome Covington
 * Due date: 07/08/2024
 *
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "newfraction2.h"

/**
 * @brief Constructor initializes a Fraction object
 *
 * @param num : Numerator for the fraction
 * @param denom : Denominator for the fraction
 * @pre numerator and denominator are not null or empty
 * @post A Fraction object is created with the given values
 */
Fraction::Fraction(int num, int denom) : numerator(num), denominator(denom)
{
    // Ensure denominator is not zero
    if (denominator == 0)
    {
        cerr << "Denominator cannot be zero. Setting to 1." << endl;
        denominator = 1;
    }
}

/**
 * @brief Setter for numerator
 *
 * @param num  The numerator part of the fraction
 * @pre numerator is not empty or null
 * @post numerator is set to num
 */
void Fraction::setNumerator(int num)
{
    numerator = num;
}

/**
 * @brief Setter for denominator
 *
 * @param denom    The denominator part of the fraction
 * @pre denominator is not empty or null
 * @post denominator is set to num
 */
void Fraction::setDenominator(int denom)
{
    if (denom != 0)
    {
        denominator = denom;
    }
    else
    {
        cerr << "Denominator cannot be zero. Setting to 1." << endl;
        denominator = 1;
    }
}

/**
 * @brief Get function that returns the numerator of the fraction
 *
 * @return int  An integer representing The numerator part of the fraction
 */
int Fraction::getNumerator()
{
    return numerator;
}

/**
 * @brief Get function that returns the denominator of the fraction.
 *
 * @return int An integer representing The denominator part of the fraction
 */
int Fraction::getDenominator()
{
    return denominator;
}

/**
 * @brief Displays the fraction in required format
 * Format: numerator/denominator
 *
 */
void Fraction::display()
{
    cout << numerator << "/" << denominator << endl;
}

// Member function for addition
Fraction Fraction::operator+(Fraction &other)
{
    int num = numerator * other.denominator + other.numerator * denominator;
    int denom = denominator * other.denominator;
    return Fraction(num, denom);
}

// Member function for subtraction
Fraction Fraction::operator-(Fraction &other)
{
    int num = numerator * other.denominator - other.numerator * denominator;
    int denom = denominator * other.denominator;
    return Fraction(num, denom);
}

// Nonmember function for multiplication
Fraction operator*(Fraction &f1, Fraction &f2)
{
    int num = f1.getNumerator() * f2.getNumerator();
    int denom = f1.getDenominator() * f2.getDenominator();
    return Fraction(num, denom);
}

// Nonmember function for division
Fraction operator/(Fraction &f1, Fraction &f2)
{
    int num = f1.getNumerator() * f2.getDenominator();
    int denom = f1.getDenominator() * f2.getNumerator();
    return Fraction(num, denom);
}

// Nonmember function for output
ostream &operator<<(ostream &os, Fraction &f)
{
    os << f.getNumerator() << "/" << f.getDenominator();
    return os;
}

// Friend function for input
// Library facilities used: iostream
// Friend of: Fraction class
istream &operator>>(istream &is, Fraction &f)
{
    is >> f.numerator >> f.denominator;
    if (f.denominator == 0)
    {
        cerr << "Denominator cannot be zero. Setting to 1." << endl;
        f.denominator = 1;
    }
    return is;
}