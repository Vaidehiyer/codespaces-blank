/**
 * @file bag.h
 * @author Hakim Abdisalam
 * StartID: oc3378es
 * @brief Bag header file
 * @version 0.1
 * @date 2024-07-07
 * Instructor: Jerome Covington
 * Due date: 07/08/2024
 * 
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#ifndef _BAG_H
#define _BAG_H
#include "bagInterface.h"

template <class ItemType>
class Bag : public BagInterface<ItemType>
{

public:
    Bag();
    int getCurrentSize() const;
    bool isEmpty() const;
    bool add(const ItemType &newEntry);
    bool remove(const ItemType &anEntry);
    void clear();
    bool contains(const ItemType &anEntry) const;
    int getFrequencyOf(const ItemType &anEntry) const;
    vector<ItemType> toVector() const;

protected:
    static const int DEFAULT_CAPACITY = 6; // Small size to test for a full bag
    ItemType items[DEFAULT_CAPACITY];      // Array of bag items
    int itemCount;                         // Current count of bag items
    int maxItems;                          // Max capacity of the bag
    // Returns either the index of the element in the array items that
    // contains the given target or -1, if the array does not contain
    // the target.
    int getIndexOf(const ItemType &target) const;

}; // end Bag

#include "bag.cpp"
#endif