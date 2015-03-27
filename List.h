#include "Node.h"

// need to include anything else?
// should also include everything that are from Node.h
#include <iostream>
#include <ifstream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ifstream;

// class
class List
{
  // friend the node class
  friend class Node;
  
  // public
  public:
    // constructor
    List(); // default
    
    // destructor
    ~List();
    
    // other functions
    void menu();
    void markAbsent();
    void getCourseList();
    void printMasterList();
    void generateReport();
    void storeMasterList();
    
  private:
    Node *list;
};
