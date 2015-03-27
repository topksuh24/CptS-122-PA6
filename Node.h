
#ifndef NODE_H
#define NODE_H

// includes
#include <iostream>
#include <ifstream>
#include <string>

//usings
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ifstream;

using std::string;

// class
class Node
{
  // public
  public:
    // constructor
    Node(); // default for now
    
    // destructor
    ~Node();
    
    // getters and setters
    int getRecord();
    int getID();
    string getFirst();
    string getLast();
    string getEmail();
    string getUnits();
    string getMajor();
    string getLevel();
    
    void setRecord(int newRecord);
    void setID (int newID);
    void setFirst(string newFirst);
    void setLast(string newLast);
    void setEmail(string newEmail);
    void setUnits(string newUnits);
    void setMajor(string newMajor);
    void setLevel(string newLevel);
    
  private:
    int recordNum;
    int idNum;
    string firstName; // not sure if you have to put it this way
    string lastName; // not sure if you have to put it this way
    string email;
    string units; // number of credits for class or AU for audit
    string major;
    string gradeLevel; // freshman, sophomore, junior, or senior
};

#endif
