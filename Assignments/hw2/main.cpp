
#include <iostream>
#include "DLinkedStack.hpp"

using namespace std;

int main() {

  DLinkedStack<int> basicStack;
  basicStack.push(44);
  basicStack.push(88);
  basicStack.push(55);
  basicStack.push(66);
  basicStack.push(77);
  basicStack.push(88);
  basicStack.push(99);
  basicStack.push(999);

  cout << basicStack.peek() << endl;

  basicStack.pop();
  cout << basicStack.peek() << endl;

  cout << "toVector:" << endl;

  vector<int> vector1 = basicStack.toVector();

  for (auto v : vector1) {
    cout << v << endl;
  }

  return 0;
}