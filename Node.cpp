#include "Node.h"

// constructor
Node::Node() // default for now
{
  recordNum = 0;
  idNum = 0;
  firstName = ""; // empty strings
  lastName = "";
  email = "";
  units = "";
  major = "";
  gradeLevel = "";
}

// destructor
Node::~Node()
{
  // nothing in here
}

// getters and setters
// get record number
int getRecord()
{
  return recordNum;
}

// get id number
int getID()
{
  return idNum;
}

// get first name
string getFirst()
{
  return firstName;
}

// get last name
string getLast()
{
  return lastName;
}

// get email
string getEmail()
{
  return email;
}

// get credits/units
string getUnits()
{
  return units;
}

// get major
string getMajor()
{
  return major;
}

// get grade level
string getLevel()
{
  return gradeLevel;
}

// setting record number
void setRecord(int newRecord)
{
  // max 3 digits
  recordNum = newRecord;
}

// setting id number
void setID (int newID)
{
  // max 9 digits
  idNum = newID;
}

// setting first name
void setFirst(string newFirst)
{
  firstName = newFirst;
}

// setting last name
void setLast(string newLast)
{
  lastName = newLast;
}

// setting email
void setEmail(string newEmail)
{
  email = newEmail;
}

// setting credits/units
void setUnits(string newUnits)
{
  // number of credits for class or AU for audit
  units = newUnits;
}

// setting major
void setMajor(string newMajor)
{
  major = newMajor;
}

// setting grade level
void setLevel(string newLevel)
{
  // freshman, sophomore, junior, or senior
  gradeLevel = newLevel;
}
