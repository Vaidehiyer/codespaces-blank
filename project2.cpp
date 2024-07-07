/**
 * @file project2.cpp
 * @author Hakim Abdisalam
 * StartID: oc3378es
 * @brief Project 2 Test file
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
#include <string>
#include "shoppingCart.h"
#include "item.h"
#include "bag.h"
#include <iomanip>

using namespace std;

/**
 * @brief Helper function to display initial shopping caart
 *
 * @param cart : pointer to ShoppingCart obj
 */
void displayCart(const ShoppingCart &cart)
{
    // Header lines
    cout << "\nHere is your order:\n";
    cout << "-------------------------------------------------\n";
    cout << left << setw(20) << "Name" << setw(15) << "Unit Price" << setw(10) << "Quantity" << endl;

    vector<Item> items = cart.toVector(); // A vector containing all items

    // For each item, display its name, price & quantity
    for (const auto &item : items)
    {
        cout << left << setw(20) << item.getName()
             << "$" << setw(14) << item.getUnitPrice()
             << setw(11) << item.getQuantity() << endl;
    }

    // Display total charge
    cout << "The total charge is $" << cart.getTotalPrice() << endl;
    cout << "--------------------------------------------------\n";
}

int main()
{
    ShoppingCart cart;                  // ShoppingCart object
    string name;                        // to store item name
    double unitPrice;                   // to store unit proce
    int quantity;                       // to store quantity
    char continueShopping, modifyOrder; // Variables to store user approvals for modifying/continuing
    int modifyChoice;                   // Variable to store the choice number

    // Header of the application
    cout << "\nWelcome to XXX SHOPPING CENTER." << endl;
    cout << "Enter the item you selected as the following order:\nname unitPrice quantity" << endl;
    cout << "(Name cannot contain any space. Otherwise, errors happen!)" << endl;

    // Loop to retrive Item details
    do
    {
        cout << "--> ";
        cin >> name >> unitPrice >> quantity;
        cart.add(Item(name, unitPrice, quantity));
        cout << "Want to continue y/n--> ";
        cin >> continueShopping;
        cout << "\n";
    } while (continueShopping == 'y');

    // display initial cart
    displayCart(cart);

    // Ask if want any modifications?
    cout << "\nWant to modify your order? y/n--> ";
    cin >> modifyOrder;

    // Loop to repeatedly ask for modifications
    while (modifyOrder == 'y')
    {
        // Ask to select any option
        cout << "What do you want? Enter 1: add 2: remove 3: change quantity\n--> ";
        cin >> modifyChoice;

        switch (modifyChoice)
        {

        // Add a new to the cart if user selected 1
        case 1:
            cout << "Enter the item to add as the following order:\nname unitPrice quantity\n--> ";
            cin >> name >> unitPrice >> quantity;
            cart.add(Item(name, unitPrice, quantity));
            cout << "The item has been added." << endl;
            break;

        // Remove an item from the cart if user selected 2
        case 2:
            cout << "Enter the item to remove as the following order:\nname unitPrice quantity\n--> ";
            cin >> name >> unitPrice >> quantity;
            if (cart.remove(Item(name, unitPrice, quantity)))
            {
                cout << "The item has been removed." << endl;
            }
            else
            {
                cout << "No such item in your shopping cart!" << endl;
            }
            break;

        // Modify existing item in the cart if user selects 3
        case 3:
            cout << "Enter the item to change as the following order:\nname unitPrice quantity\n--> ";
            cin >> name >> unitPrice >> quantity;
            cout << "Enter a new quantity --> ";
            int newQuantity;
            cin >> newQuantity;
            while (newQuantity <= 0)
            {
                cout << newQuantity << " is not a valid input.\nEnter a new quantity --> ";
                cin >> newQuantity;
            }
            cart.changeQuantity(Item(name, unitPrice, quantity), newQuantity);
            break;
        default:
            cout << "Invalid choice. Try again." << endl;
        }

        cout << "\nWant to modify your order? y/n--> ";
        cin >> modifyOrder;
    }

    // Show the updated order details
    cout << "\n\nHere is your updated order:\n";
    cout << "-------------------------------------------------\n";
    cout << "You have ordered the following items:\n";
    cout << left << setw(20) << "Name" << setw(15) << "Unit Price" << setw(10) << "Quantity" << endl;

    vector<Item> items = cart.toVector();
    for (const auto &item : items)
    {
        cout << left << setw(20) << item.getName()
             << "$" << setw(14) << item.getUnitPrice()
             << setw(11) << item.getQuantity() << endl;
    }

    cout << "The total charge is $" << cart.getTotalPrice() << endl;
    cout << "Thanks for shopping in XXX SHOPPING CENTER.\n";
    cout << "---------------------------------------------------" << endl;

    return 0;
}
