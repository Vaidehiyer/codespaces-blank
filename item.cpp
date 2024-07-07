/**
 * @file item.cpp
 * @author Hakim Abdisalam
 * StartID: oc3378es
 * @brief Item implementation file
 * @version 0.1
 * @date 2024-07-07
 * Instructor: Jerome Covington
 * Due date: 07/08/2024
 * 
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "item.h"

// Default constructor
Item::Item() : name(""), unitPrice(0.0), quantity(0) {}

// Constructor that initializes all data members
Item::Item(const std::string &name, double unitPrice, int quantity)
    : name(name), unitPrice(unitPrice), quantity(quantity) {}

/**
 * @brief Setter for name
 * 
 * @param name : name of the item
 */
void Item::setName(const std::string &name)
{
    this->name = name;
}

/**
 * @brief Setter for unit price
 * 
 * @param unitPrice  : price per unit
 */
void Item::setUnitPrice(double unitPrice)
{
    this->unitPrice = unitPrice;
}

/**
 * @brief Settr for quantity
 * 
 * @param quantity 
 */
void Item::setQuantity(int quantity)
{
    this->quantity = quantity;
}

/**
 * @brief Getter for item name
 * 
 * @return std::string 
 */
std::string Item::getName() const
{
    return name;
}

/**
 * @brief Getter for unit price
 * 
 * @return double 
 */
double Item::getUnitPrice() const
{
    return unitPrice;
}

/**
 * @brief Getter for quantity
 * 
 * @return int 
 */
int Item::getQuantity() const
{
    return quantity;
}

/**
 * @brief Overloaded equality operator
 * 
 * @param other : pointer to Other Item object
 * @return true 
 * @return false 
 */
bool Item::operator==(const Item &other) const
{
    return (name == other.name && unitPrice == other.unitPrice && quantity == other.quantity);
}

/**
 * @brief Overloaded outstream operator
 * 
 * @param os : pointer to ostream object
 * @param item : Pointer to other Item
 * @return std::ostream& 
 */
std::ostream &operator<<(std::ostream &os, const Item &item)
{
    os << "Item: " << item.name << ", Unit Price: $" << item.unitPrice << ", Quantity: " << item.quantity;
    return os;
}

/**
 * @brief Overloaded instream operator
 * 
 * @param is : pointer to istream object
 * @param item : Pointer to other Item
 * @return std::istream& 
 */
std::istream &operator>>(std::istream &is, Item &item)
{
    std::cout << "Enter item name: ";
    is >> item.name;
    std::cout << "Enter unit price: ";
    is >> item.unitPrice;
    std::cout << "Enter quantity: ";
    is >> item.quantity;
    return is;
}