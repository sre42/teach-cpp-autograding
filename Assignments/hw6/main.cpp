#include <iostream>
#include <map>
#include "Entry.h"
#include "HashedEntry.h"

#include "HashedDictionary.h"

using namespace std;

//This function can be passed into the traverse()
void display1(string &anItem) {
    cout << "Displaying item - " << anItem << endl;
}

void dictionaryTestFromText() {

    cout << "Running example \"test\" code from the Text book\n";
    DictionaryInterface<int, string> *testDictionary = new HashedDictionary<int, string>();

    testDictionary->add(60, "F");
    testDictionary->add(70, "G");
    testDictionary->add(40, "D");
    testDictionary->add(80, "H");
    testDictionary->add(30, "C");
    testDictionary->add(50, "E");
    testDictionary->add(10, "A");
    testDictionary->add(20, "B");

    cout << "Traversing data items in sorted search-key order:\n";
    testDictionary->traverse(display1);

    testDictionary->remove(10);
    testDictionary->remove(80);
    testDictionary->remove(40);

    cout << "\nAfter Removing 10/A, 40/D & 80/H, traverse data items in sorted search-key order:\n";
    testDictionary->traverse(display1);

    cout << "\nTrying to remove 40/D again\n";
    if (testDictionary->remove(40))
        cout << "Removed second 40 :-(\n\n";
    else
        cout << "Could not remove second 40 :-)\n\n";

    cout << "Getting key/item 20/B: " << testDictionary->getItem(20) << endl;

    cout << "Getting key/item 70/G: " << testDictionary->getItem(70) << endl;

    cout << "Getting key/item 50/E: " << testDictionary->getItem(50) << endl;

    cout << "Contains key/item 80/H: " << testDictionary->contains(80) << endl;

    cout << "Contains key/item 00/??: " << testDictionary->contains(00) << endl;

    testDictionary->clear();

    cout << "\nTrying to traverse after clear\n";
    testDictionary->traverse(display1);
    cout << "If nothing displayed, that is good!\n";

    if (testDictionary->remove(20))
        cout << "Removed 20 from an empty dictionary :-(\n\n";
    else
        cout << "Could not remove 20 from an empty dictionary :-)\n\n";
}


void runHashedEntryExamples() {

    cout << "Running simple examples using Basic Entry and Hashed Entry\n";
    Entry<int, string> e1(1, "data1");
    Entry<int, string> e2(2, "data2");

    cout << e1.getItem() << endl;
    cout << e1.getKey() << endl;


    HashedEntry<int, string> he1(3, "data3");
    cout << he1.getItem() << endl;
    cout << he1.getKey() << endl;
}

void runOurDictionaryStuff() {

    cout << "Running example code after our Dictionary has been implemented\n";
    auto dict1 = new HashedDictionary<int, string>();


    dict1->add(10, "10");
    dict1->add(20, "20");
    cout << dict1->contains(10);
    cout << '\n';
    cout << dict1->getItem(10);


    HashedDictionary<int, string> *castedPointer = dynamic_cast<HashedDictionary<int, string> *>(dict1);

    cout << '\n';
    cout << castedPointer->getItem(10);

    (*castedPointer)[10] = "40";


    cout << '\n';

    cout << castedPointer->getItem(10);

    HashedDictionary<int, string> dictObject;
    dictObject.add(10, "10");
    dictObject.add(20, "20");
    cout << '\n';
    cout << dictObject.getItem(10);
    dictObject[10] = "40";
    cout << '\n';
    cout << dictObject.getItem(10);
}

int main() {

    //Uncomment the below to test stuff out.
    runHashedEntryExamples();
    dictionaryTestFromText();
    runOurDictionaryStuff();

    return 0;
}