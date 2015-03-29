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
int Node::getRecord()
{
  return recordNum;
}

// get id number
int Node::getID()
{
  return idNum;
}

// get first name
string Node::getFirst()
{
  return firstName;
}

// get last name
string Node::getLast()
{
  return lastName;
}

// get email
string Node::getEmail()
{
  return email;
}

// get credits/units
string Node::getUnits()
{
  return units;
}

// get major
string Node::getMajor()
{
  return major;
}

// get grade level
string Node::getLevel()
{
  return gradeLevel;
}

// setting record number
void Node::setRecord(int newRecord)
{
  // max 3 digits
  recordNum = newRecord;
}

// setting id number
void Node::setID (int newID)
{
  // max 9 digits
  idNum = newID;
}

// setting first name
void Node::setFirst(string newFirst)
{
  firstName = newFirst;
}

// setting last name
void Node::setLast(string newLast)
{
  lastName = newLast;
}

// setting email
void Node::setEmail(string newEmail)
{
  email = newEmail;
}

// setting credits/units
void Node::setUnits(string newUnits)
{
  // number of credits for class or AU for audit
  units = newUnits;
}

// setting major
void Node::setMajor(string newMajor)
{
  major = newMajor;
}

// setting grade level
void Node::setLevel(string newLevel)
{
  // freshman, sophomore, junior, or senior
  gradeLevel = newLevel;
}
