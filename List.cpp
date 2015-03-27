#include "List.h"

// At startup of the program a menu must be displayed. The menu must provide six options.
void menu()
{
  cout << "Welcome Professor/TA! What would you like to do today?" << endl;
  cout << "1. Import Course List" << endl;
  cout << "2. Load Master List" << endl;
  cout << "3. Store Master List" << endl;
  cout << "4. Mark Absences" << endl;
  cout << "5. Generate Report" << endl;
  cout << "6. Exit" << endl;
  cout << "Input: " << endl;
}

// Runs through the master linked list, displays each student’s name,
// and prompts if he/she was absent for the current day.
void markAbsent(Node *masterList) // need something in this parameter
{
  
}

// Reads the .csv course file and overwrites the master linked list.
void getCourseList(Node *report)
{
  // need to include ifstream
  ifstream file("file.csv");
  string value = "";
  // check if there is a file
  if(file != NULL) // got the file
  {
    // overwrite the master linked list
    
  }
  else // .csv file was not found
  {
    // you dont do anything
  }
}

// Populates the master linked list with previous nodes from master.txt.
void printMasterList() // do i need anything in this parameter?
{
  // read from the master.txt and display what is in master.txt
  // check if the master.txt has anything
  if() // is not empty
  {
    // print out the txt
  }
}

/* Prompts for an ID number or name of student to edit. 
 * Prompts for the date of absence to edit.
 * Leads to submenu -> 
 * 1. Generate report for all students. 
 * 2. Generate report for students with absences that match or exceed (the number entered by the user). 
 * 3. Generate date report.
*/
void generateReport(Node *report)
{
  int choice = 0;
  // give the 3 choices
  cout << "1. Generate report for all students." << endl;
  cout << "2. Generate report for students with absences that match or exceed." << endl;
  cout << "3. Generate date report." << endl;
  cout << "Choice: ";
  cin >> choice;
  cout << endl;
  
  if (choice == 1)
  {
    // generate report for all students
    for() // do i have to use for loop? or while loop?
    {
      
    }
  }
  // if the user chose #2 then ask for the absences number
  else if(choice == 2)
  {
    int absences = 0;
    cout << "Please enter the number of absences: ";
    cin >> absences;
    
    // generate the report
    for () // do i have to use for loop? or while loop?
    {
      
    }
  }
  else if(choice == 3)
  {
    // generate date report
    
  }
  else
  {
    // if the users input number other than 1,2, or 3
    // ask them do re input the number
    cout << "Please choose from these three choices."<< endl;
    generateReport(*report); // recursion
  }
}

// Stores the contents of the master linked list’s nodes to master.txt.
void storeMasterList() // do i need anything in this parameter?
{
  // get the contents which is from csv file
  getCourseList(Node *report);
  
  // move it to master.txt
  // how? is the questions -_-;;;
}
