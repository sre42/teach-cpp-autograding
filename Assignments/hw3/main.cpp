#include <iostream>
#include "SortedDoublyLinkedList.hpp"

using namespace std;


int main() {


    SortedDoublyLinkedList<int> basicList;
    basicList.add(44);
    basicList.add(88);
    basicList.add(55);
    basicList.add(66);
    basicList.add(77);
    basicList.add(88);
    basicList.add(99);
    basicList.add(999);
    basicList.remove(66);

    vector<int> vector1 = basicList.toVector();
    
    for (auto v : vector1) {
        cout << v << endl;
    }


    return 0;
}