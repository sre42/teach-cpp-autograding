
#include <iostream>
#include "triangle.hpp"

using namespace std;

int main() {

  Triangle<double> t1;
  Triangle<float> t2(4, 5, 6);
  Triangle<int> t3(2, 3, 400);

  vector<double> vec1 = t1.getSides();
  vector<float> vec2 = t2.getSides();
  vector<int> vec3 = t3.getSides();

  for (auto v:vec1)
    std::cout << v << ' ';
  cout << endl;

  for (auto v:vec2)
    std::cout << v << ' ';
  cout << endl;

  for (auto v:vec3)
    std::cout << v << ' ';
  cout << endl;

  return 0;
}
