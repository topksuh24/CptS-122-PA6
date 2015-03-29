/* Programmer: Kenneth Suh, Jwahoon Kim, Sungsoo Park
 * Assignment: Programming Assignment 6 - Attendance Tracker
 * Class: CptS 122 Lab Section 2
 * Date: March 17, 2015
 */

#include "List.h"

int main (void)
{
	// declaration for csv
	ifstream file("classList.csv");
	string copyIndex;
	file >> copyIndex;

	//class declaration
	List *courseList = new List();
	Node *masterList = new Node();

	int selection;

	// use do while loop
	do
	{
		// display the menu/choices
		courseList -> menu();
		cin >> selection;

		switch(selection)
		{
			case 1:
				// import course list
				while(file.good())
				{
					Node *inputNode = new Node();
					courseList -> getCourseList(masterList);
				}
				cout << "Data has been imported." << endl;
				break;

			case 2:
				// load master list
				while(masterList != NULL)
				{
					courseList -> printMasterList(masterList);
				}
				cout << "Master List is loaded." << endl;
				break;

			case 3:
				// store master list
				courseList -> storeMasterList(masterList);
				cout << "Master List is stored." << endl;
				break;

			case 4:
				// mark absences
				courseList -> markAbsent(masterList);
				cout << "You have marked absences." << endl;
				break;

			case 5:
				// generate report
				courseList -> generateReport(masterList);
				cout << "Report is generated." << endl;
				break;
		}
	} while(selection != 6);
	
	return 0;
}
