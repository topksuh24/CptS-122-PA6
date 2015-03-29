
#ifndef LIST_H
#define LIST_H

#include "Node.h"

// should also include everything that are from Node.h
#include <iostream>
#include <fstream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::ios;
using std::string;
using std::ifstream;

// class
class List
{
	// friend the node class
	//friend class Node;
  
	// public
	public:    
		// other functions
		void menu();
		void markAbsent(Node *masterList);
		void getCourseList(Node *report);
		void printMasterList(Node *report);
		void generateReport(Node *report);
		void storeMasterList(Node *report);
    
	private:
		Node *list;
		Node *master; // do i need this?
};

#endif
