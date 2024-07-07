/**
 * @file item.h
 * @author Hakim Abdisalam
 * StartID: oc3378es
 * @brief Item header file
 * @version 0.1
 * @date 2024-07-07
 * Instructor: Jerome Covington
 * Due date: 07/08/2024
 * 
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#ifndef ITEM_H
#define ITEM_H

#include <iostream>    // For input/output functios
#include <string>

class Item {
private:
    std::string name;       // name of item
    double unitPrice;       // Price per unit
    int quantity;           // Number of items

public:
    
    /**
     * @brief Construct a new Item object
     * 
     */
    Item();

    /**
     * @brief Construct a new Item object
     * 
     * @param name : Name of item
     * @param unitPrice : Unit price
     * @param quantity : Quantity
     * @pre all params are of valid types and not empty
     * @post A new Item object is created with relevant valeus
     */
    Item(const std::string& name, double unitPrice, int quantity);

    // Set functions
    void setName(const std::string& name);
    void setUnitPrice(double unitPrice);
    void setQuantity(int quantity);

    // Get functions
    std::string getName() const;
    double getUnitPrice() const;
    int getQuantity() const;

    // Operator overloading
    bool operator==(const Item& other) const;
    friend std::ostream& operator<<(std::ostream& os, const Item& item);
    friend std::istream& operator>>(std::istream& is, Item& item);
};

#endif // ITEM_H
