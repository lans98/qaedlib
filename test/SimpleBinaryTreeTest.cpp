#include <iostream>
#include <memory>

#include "SimpleBinaryTree.hpp"

#define new_shared make_shared

using namespace std;

int main() {
  auto sbt = make_unique<qaed::SBT<int>>();

  sbt->add(6);
  sbt->add(1);
  sbt->add(5);
  sbt->add(7);
  sbt->add(8);
  sbt->add(4);
  sbt->add(3);
  cout << sbt->countNodes() << endl;

  sbt->printLn();
  sbt->printIterative();
  cout << '\n';
  qaed::SBT<int>::Node* father = 0;
  try {
    father = sbt->getFatherOf(7);
    cout << father->data << endl;
  } catch (std::exception& e) {
    cout << e.what() << endl;
  } 

  qaed::SBT<int>::Node* bro = 0;
  try {
    bro = sbt->getBrotherOf(7);
    cout << bro->data << endl;
  } catch (std::exception& e) {
    cout << e.what() << endl;
  }

  qaed::SBT<int>::Node* uncle = 0;
  try {
    uncle = sbt->getUncleOf(5);
    cout << uncle->data << endl;
  } catch (std::exception e) {
    cout << e.what() << endl;
  }

  cout << "getHeight: " << sbt->getHeight() << endl;

  cout << "printByLevel: ";
  sbt->printBFS();
  cout << endl;

  return 0;
}
