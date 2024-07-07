/**
 * @file shoppingCart.cpp
 * @author Hakim Abdisalam
 * StartID: oc3378es
 * @brief shopping Cart implementation file
 * @version 0.1
 * @date 2024-07-07
 * Instructor: Jerome Covington
 * Due date: 07/08/2024
 * 
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "shoppingCart.h"

// Default constructor
// Total price initialized to 0
ShoppingCart::ShoppingCart() : Bag(), totalPrice(0.0) {}

// Get the total price of items in the cart
double ShoppingCart::getTotalPrice() const
{
    return totalPrice;
}

/**
 * @brief Add an item to the shopping cart
 * 
 * @param newEntry : Item to add
 * @pre item to add is a valid entry
 * @post shopping bag is updated with new entry, totalPrice updated
 * @return true if item successfully added, false otherwise
 */
bool ShoppingCart::add(const Item &newEntry)
{
    bool added = Bag::add(newEntry);   // Using add function in super class
    if (added)
    {
        // update the total price
        totalPrice += newEntry.getUnitPrice() * newEntry.getQuantity();
    }
    return added;
}

/**
 * @brief Remove an item from the shopping cart
 * 
 * @param anEntry : Item to Remove
 * @pre item to Remove is a valid entry
 * @post entry is removed from shopping bag, totalPrice updated
 * @return true if item successfully Removed, false otherwise
 */
bool ShoppingCart::remove(const Item &anEntry)
{
    // For removing, first get the index of item in the bag
    int indexfind = getIndexOf(anEntry);

    bool canRemoveItem = !isEmpty() && (indexfind > -1);
    if (canRemoveItem)
    {
        // On valid entry, update tottal price 
        totalPrice -= items[indexfind].getUnitPrice() * items[indexfind].getQuantity();

        itemCount--;
        items[indexfind] = items[itemCount];
    }
    return canRemoveItem;
}

/**
 * @brief Clears the shopping bag and updates totalPrice to 0
 * 
 */
void ShoppingCart::clear()
{
    Bag::clear();
    totalPrice = 0.0;
}

/**
 * @brief Changes the quantity of an item in the shopping cart
 * 
 * @param anEntry : Item to change
 * @param newQuantity : Quantity to be used for updation
 * @pre item to add is a valid entry, newQuantity > 0
 * @post shopping bag is updated with modified entry, totalPrice updated
 * @return true if item successfully modified, false otherwise
 */
bool ShoppingCart::changeQuantity(const Item &anEntry, int newQuantity)
{
    int locatedIndex = getIndexOf(anEntry);
    bool canChange = !isEmpty() && (locatedIndex > -1);
    if (canChange)
    {
        // Check if new quantity > 0
        if (newQuantity <= 0)
        {
            cout << newQuantity << " is not a valid input." << endl;
            return false;
        }
        else
        {
            // Since quantity needs to modify, subtract its price from total first
            totalPrice -= items[locatedIndex].getUnitPrice() * items[locatedIndex].getQuantity();

            // Set new queantity and then update total price again
            items[locatedIndex].setQuantity(newQuantity);
            totalPrice += items[locatedIndex].getUnitPrice() * newQuantity;
            cout << "The quantity has been modified." << endl;
        }
    }
    else
    {
        cout << "No such item in your shopping cart!" << endl;
    }
    return canChange;
}