/**
 * @file bag.cpp
 * @author Hakim Abdisalam
 * StartID: oc3378es
 * @brief Bag implementation file
 * @version 0.1
 * @date 2024-07-07
 * Instructor: Jerome Covington
 * Due date: 07/08/2024
 * 
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "bag.h"
#include <vector>

template <class ItemType>
Bag<ItemType>::Bag() : itemCount(0), maxItems(DEFAULT_CAPACITY)
{
} // end default constructor

template <class ItemType>
bool Bag<ItemType>::add(const ItemType &newEntry)
{
    bool hasRoomToAdd = (itemCount < maxItems);
    if (hasRoomToAdd)
    {
        items[itemCount] = newEntry;
        itemCount++;
    } // end if
    return hasRoomToAdd;
} // end add

template <class ItemType>
vector<ItemType> Bag<ItemType>::toVector() const
{
    vector<ItemType> bagContents;
    for (int i = 0; i < itemCount; i++)
        bagContents.push_back(items[i]);
    return bagContents;
} // end toVector

template <class ItemType>
int Bag<ItemType>::getCurrentSize() const
{
    return itemCount;
} // end getCurrentSize

template <class ItemType>
bool Bag<ItemType>::isEmpty() const
{
    return itemCount == 0;
} // end isEmpty

template <class ItemType>
bool Bag<ItemType>::contains(const ItemType &anEntry) const
{
    bool found = false;
    int curIndex = 0; // Current array index
    while (!found && (curIndex < itemCount))
    {
        if (anEntry == items[curIndex])
        {
            found = true;
        }           // end if
        curIndex++; // Increment to next entry
    }               // end while
    return found;
} // end contains

template <class ItemType>
int Bag<ItemType>::getIndexOf(const ItemType &target) const
{
    bool found = false;
    int result = -1;
    int searchIndex = 0;
    // If the bag is empty, itemCount is zero, so loop is skipped
    while (!found && (searchIndex < itemCount))
    {
        if (items[searchIndex] == target)
        {
            found = true;
            result = searchIndex;
        }
        else
        {
            searchIndex++;
        } // end if
    }     // end while
    return result;
} // end get IndexOf

template <class ItemType>
bool Bag<ItemType>::remove(const ItemType &anEntry)
{
    int locatedIndex = getIndexOf(anEntry);
    bool canRemoveItem = !isEmpty() && (locatedIndex > -1);
    if (canRemoveItem)
    {
        itemCount--;
        items[locatedIndex] = items[itemCount];
    } // end if
    return canRemoveItem;
} // end remove

template <class ItemType>
void Bag<ItemType>::clear()
{
    itemCount = 0;
} // end clear

template <class ItemType>
int Bag<ItemType>::getFrequencyOf(const ItemType &anEntry) const
{
    int frequency = 0;
    int curIndex = 0; // Current array index
    while (curIndex < itemCount)
    {
        if (items[curIndex] == anEntry)
        {
            frequency++;
        }           // end if
        curIndex++; // Increment to next entry
    }               // end while
    return frequency;
} // end getFrequencyOf
