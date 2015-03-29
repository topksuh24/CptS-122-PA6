
#ifndef LIST_H
#define LIST_H

#include "Node.h"

// need to include anything else?
// should also include everything that are from Node.h
#include <iostream>
#include <fstream>
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
    void markAbsent(Node *masterList);
    void getCourseList(Node *report, ifstream &file);
    void printMasterList(ifstream &master);
    void generateReport(Node *report);
    void storeMasterList();
    
  private:
    Node *list;
    Node *master; // do i need this?
};

#endif
