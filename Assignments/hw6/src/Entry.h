#pragma once

template<class KeyType, class ItemType>
class Entry {
private:
    KeyType searchKey;
    ItemType item;

protected:
    void setKey(const KeyType &searchKey);

public:
    Entry();

    Entry(KeyType searchKey, ItemType newEntry);

    ItemType getItem() const;

    KeyType getKey() const;

    void setItem(const ItemType &newEntry);

    bool operator==(const Entry<KeyType, ItemType> &rightHandItem) const;

    bool operator>(const Entry<KeyType, ItemType> &rightHandItem) const;
};


template<class KeyType, class ItemType>
Entry<KeyType, ItemType>::Entry() { }

template<class KeyType, class ItemType>
Entry<KeyType, ItemType>::Entry(KeyType itemKey, ItemType newEntry)
        : item(newEntry), searchKey(itemKey) { }

template<class KeyType, class ItemType>
ItemType Entry<KeyType, ItemType>::getItem() const {
    return item;
}


template<class KeyType, class ItemType>
KeyType Entry<KeyType, ItemType>::getKey() const {
    return searchKey;
}


template<class KeyType, class ItemType>
void Entry<KeyType, ItemType>::setItem(const ItemType &newEntry) {
    item = newEntry;
}

template<class KeyType, class ItemType>
void Entry<KeyType, ItemType>::setKey(const KeyType &itemKey) {
    searchKey = itemKey;
}

template<class KeyType, class ItemType>
bool Entry<KeyType, ItemType>::operator==(const Entry<KeyType, ItemType> &rightHandItem) const {
    return (searchKey == rightHandItem.getKey());
}  // end operator==


template<class KeyType, class ItemType>
bool Entry<KeyType, ItemType>::operator>(const Entry<KeyType, ItemType> &rightHandItem) const {
    return (searchKey > rightHandItem.getKey());
}