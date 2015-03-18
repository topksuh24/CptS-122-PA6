#include "Node.h"

// need to include anything else?

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
