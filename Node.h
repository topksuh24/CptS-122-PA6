
#ifndef NODE_H
#define NODE_H

// includes
#include <iostream>
#include <fstream>
#include <string>

//usings
using std::cin;
using std::cout;
using std::endl;
using std::ios;
using std::string;
using std::ifstream;
using std::string;

class List; // forward declaration

// class
class Node
{
	friend class List;

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
		int getAbsent();
    
		void setRecord(int newRecord);
		void setID (int newID);
		void setFirst(string newFirst);
		void setLast(string newLast);
		void setEmail(string newEmail);
		void setUnits(string newUnits);
		void setMajor(string newMajor);
		void setLevel(string newLevel);
		void setDate(string newDate, int index);
		void setAbsent(int newAbsent);
    
	private:
		Node *next;
		int recordNum;
		int idNum;
		string firstName; // not sure if you have to put it this way
		string lastName; // not sure if you have to put it this way
		string email;
		string units; // number of credits for class or AU for audit
		string major;
		string gradeLevel; // freshman, sophomore, junior, or senior
		int absent; // number of absences
		string date[]; // storing dates when the student is absent
};

#endif
