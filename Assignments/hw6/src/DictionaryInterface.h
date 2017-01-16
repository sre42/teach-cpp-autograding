//  Created by Frank M. Carrano and Tim Henry.
//  Copyright (c) 2013 __Pearson Education__. All rights reserved.

/** An interface for the ADT dictionary. (Distinct search keys.)
    Listing 18-1
 @file  DictionaryInterface.h */

#ifndef _DICTIONARY_INTERFACE
#define _DICTIONARY_INTERFACE

#include <exception>
#include <vector>

template<class KeyType, class ItemType>
class DictionaryInterface {
public:
    /** Sees whether this dictionary is empty.
     @return True if the dictionary is empty;
        otherwise returns false. */
    virtual bool isEmpty() const = 0;

    /** Gets the number of items in this dictionary.
     @return The number of items in the dictionary. */
    virtual int getNumberOfItems() const = 0;

    /** Inserts an item into this dictionary according to the item’s search key.
     @pre  The search key of the new item differs from all search
        keys presently in the dictionary.
     @post  If the insertion is successful, newItem is in its
        proper position within the dictionary.
     @param searchKey  The search key associated with the item to be inserted.
     @param newItem  The item to add to the dictionary.
     @return  True if item was successfully added, or false if not. */
    virtual bool add(const KeyType &searchKey, const ItemType &newItem) = 0;

    /** Removes an item with the given search key from this dictionary.
     @post  If the item whose search key equals searchKey existed in the dictionary,
        the item was removed.
     @param searchKey  The search key of the item to be removed.
     @return  True if the item was successfully removed, or false if not. */
    virtual bool remove(const KeyType &searchKey) = 0;

    /** Removes all entries from this dictionary. */
    virtual void clear() = 0;

    /** Retrieves an item with a given search key from a dictionary.
     @post  If the retrieval is successful, the item is returned.
     @param searchKey  The search key of the item to be retrieved.
     @return  The item associated with the search key.
     @throw  (Default)exception if the item does not exist. */
    virtual ItemType getItem(const KeyType &searchKey) const = 0;

    /** Sees whether this dictionary contains an item with a given
        search key.
     @post  The dictionary is unchanged.
     @param searchKey  The search key of the item to be retrieved.
     @return  True if an item with the given search key exists in the dictionary. */
    virtual bool contains(const KeyType &searchKey) const = 0;

    /** Traverses this dictionary and calls a given client function once for each item.
     @post  The given function’s action occurs once for each item in the
        dictionary and possibly alters the item.
     @param visit A client function. */
    virtual void traverse(void visit(ItemType &)) const = 0;


    virtual std::vector<ItemType> toVector() const = 0;

}; // end DictionaryInterface

#endif
