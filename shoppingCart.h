/**
 * @file shoppingCart.h
 * @author Hakim Abdisalam
 * StartID: oc3378es
 * @brief shopping Cart header file
 * @version 0.1
 * @date 2024-07-07
 * Instructor: Jerome Covington
 * Due date: 07/08/2024
 * 
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#ifndef _SHOPPING_CART_H
#define _SHOPPING_CART_H

#include "bag.h"
#include "item.h" // class defined in Task 1
#include <iostream>

using namespace std;

class ShoppingCart : public Bag<Item>
{
private:
    double totalPrice; // Total price of items in the cart

public:
    // Default constructor
    ShoppingCart();

    // Get the total price of items in the cart
    double getTotalPrice() const;

    // Override add method to update totalPrice
    bool add(const Item &newEntry) override;

    // Override remove method to update totalPrice
    bool remove(const Item &anEntry) override;

    // Override clear method to reset totalPrice
    void clear() override;

    // Change the quantity of an item in the cart
    bool changeQuantity(const Item &anEntry, int newQuantity);
};

#endif // _SHOPPING_CART_H
