#include "List.h"

// At startup of the program a menu must be displayed. The menu must provide six options.
void List::menu()
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
void List::markAbsent(Node *masterList) // need something in this parameter
{
	// ask the user whether the student was absent or not
	// first display each student's anem
	while (masterList != NULL)
	{
		// first name
		cout << "First Name: ";
		cout << (*masterList).getFirst() << endl;

		// last name
		cout << "Last Name: ";
		cout << (*masterList).getLast() << endl;

		masterList -> next;
	}
	int choice = 0;
	// then ask the user who was absent
	cout << "Was anyone absent today?" << endl;
	cout << "1. Yes" << endl;
	cout << "2. No" << endl;
	cin >> choice;

	if(choice == 1)
	{
		string name;
		// ask who
		cout << "Who was absent today? Enter the student's first name." << endl;
		cin >> name;

		// check if there are any match names
		while ((name != ((*masterList).getFirst())) && masterList != NULL)
		{
			// move on. keep searching
			masterList -> next;
		}
		// check if the while loop broke because there was a amatch
		if(name == (*masterList).getFirst())
		{
			int numAbsent = (*masterList).getAbsent();
			(*masterList).setAbsent(numAbsent++);
		}
		// there was no match
		// you dont have to do anything just say there was no match
		cout << "There was no match." << endl;
		// make sure they enter the right name or choose the correct number
		markAbsent(masterList); // recursion
	}
	// choice was no
	else if (choice == 2)
	{
		// you dont have to do anything since there was no absences
	}
	else // did not choose either 1 or 2
	{
		cout << "Please choose either 1 or 2." << endl;
		markAbsent(masterList); // recursion
	}
}

// Reads the .csv course file and overwrites the master linked list.
void List::getCourseList(Node *masterList)
{
	// need to include ifstream
	ifstream file("file.csv");
	string value = "";
	// check if there is a file
	// as long as file can be read then continue
	while(file.good()) // got the file
	{
		// file is there
		// get all the lines and set it
		string value;

		// record
		getline (file, value, ',');
		(*masterList).setRecord(atoi(value.c_str()));

		// ID
		getline (file, value, ','); 
		(*masterList).setID(atoi(value.c_str()));

		// first name
		getline (file, value, ' '); 
		(*masterList).setFirst(value);

		// last name
		getline (file, value, ',');
		(*masterList).setLast(value);

		// email
		getline (file, value, ','); 
		(*masterList).setEmail(value);

		// unit/credit
		getline (file, value, ','); 
		(*masterList).setUnits(value);

		// major
		getline (file, value, ','); 
		(*masterList).setMajor(value);

		// level
		getline (file, value, '\n'); 
		(*masterList).setLevel(value);

		// move to the next one
		*masterList -> next;
	}
	// does not exist then you dont do anything?
}

// Populates the master linked list with previous nodes from master.txt.
void List::printMasterList(Node *masterList)
{
	// read from the master.txt and display what is in master.txt
	ifstream master;
	master.open("master.txt", ios::in);

	// check if the master.txt exists
	if(master.fail()) // is empty
	{
		// print out the txt
		cout << "File does not exists." << endl;
		// create master.txt
		cout << "Creating new master.txt" << endl;
		// open master.txt file
		master.open("master.txt", ios::out);

		// check if there is a file
		// as long as file can be read then continue
		while(masterList != NULL) // got the file
		{
			// file is there
			string value;

			// record
			cout << "Record: ";
			getline(master, value, ',');
			(*masterList).setRecord(atoi(value.c_str()));

			// ID
			cout << "ID Number: ";
			getline(master, value, ',');
			(*masterList).setID(atoi(value.c_str()));

			// first name
			cout << "First Name: ";
			getline(master, value, ',');
			(*masterList).setFirst(value);

			// last name
			cout << "Last Name: ";
			getline(master, value, ',');
			(*masterList).setLast(value);

			// email
			cout << "Email: ";
			getline(master, value, ',');
			(*masterList).setEmail(value);

			// unit/credit
			cout << "Unit: ";
			getline(master, value, ',');
			(*masterList).setUnits(value);

			// major
			cout << "Major: ";
			getline(master, value, ',');
			(*masterList).setMajor(value);

			// level
			cout << "Level: ";
			getline(master, value, ',');
			(*masterList).setLevel(value);

			masterList -> next;
		}

		// close the text file
		master.close();
	}
	else
	{
		master.close();
		cout << "File already exist." << endl;
	}
}

/* Prompts for an ID number or name of student to edit. 
 * Prompts for the date of absence to edit.
 * Leads to submenu -> 
 * 1. Generate report for all students. 
 * 2. Generate report for students with absences that match or exceed (the number entered by the user). 
 * 3. Generate date report.
*/
void List::generateReport(Node *report)
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
		while(report != NULL) // do i have to use for loop? or while loop?
		{
			cout << "Record: " << (*report).getRecord() << endl;
			cout << "ID: " << (*report).getID() << endl;
			cout << "Name: " << (*report).getFirst() << ", " << (*report).getLast() << endl;
			cout << "Email: " << (*report).getEmail() << endl;
			cout << "Units: " << (*report).getUnits() << endl;
			cout << "Major: " << (*report).getMajor() << endl;
			cout << "Level: " << (*report).getLevel() << endl;
			report -> next;
		}
	}
	// if the user chose #2 then ask for the absences number
	else if(choice == 2)
	{
		int absences = 0;
		cout << "Please enter the number of absences: ";
		cin >> absences;
    
		// generate the report
		while (report != NULL) // do i have to use for loop? or while loop?
		{
			// check which studnets have the same number of absences that user input
			if (report->absent == absences)
			{
				// it is same then print that student information
				cout << "Record: " << (*report).getRecord() << endl;
				cout << "ID: " << (*report).getID() << endl;
				cout << "Name: " << (*report).getFirst() << ", " << (*report).getLast() << endl;
				cout << "Email: " << (*report).getEmail() << endl;
				cout << "Units: " << (*report).getUnits() << endl;
				cout << "Major: " << (*report).getMajor() << endl;
				cout << "Level: " << (*report).getLevel() << endl;
			}
			// move to the next one and do it again until it is NULL
			report -> next;
		}
	}
	else if(choice == 3)
	{
		int index = 1;
		int length = sizeof(report->date);
		int dateNum = 0;
		// generate date report
		// print out the dates of absences
		while (report != NULL)
		{
			// go through for loop to print the date (array)
			for (index = 1; index <= length; index++)
			{
				cout << "Dates: " << endl;
				cout << index << ": " << report->date[dateNum] << endl;
			}
		}
	}
	else
	{
		// if the users input number other than 1,2, or 3
		// ask them do re input the number
		cout << "Please choose from these three choices."<< endl;
		generateReport(report); // recursion
	}
}

// Stores the contents of the master linked list’s nodes to master.txt.
void List::storeMasterList(Node *masterList) // do i need anything in this parameter?
{
	// get the contents which is from csv file
	// read from the master.txt and display what is in master.txt
	ifstream master;
	master.open("master.txt", ios::in);

	// check if the master.txt exists
	if(master.fail()) // is empty
	{
		// print out the txt
		cout << "File does not exists." << endl;
		// create master.txt
		cout << "Creating new master.txt" << endl;
		// open master.txt file
		master.open("master.txt", ios::out);

		// check if there is a file
		// as long as file can be read then continue
		while(masterList != NULL) // got the file
		{
			// file is there
			string value;

			// record
			cout << "Record: ";
			cout << (*masterList).getRecord() << endl;

			// ID
			cout << "ID Number: ";
			cout << (*masterList).getID() << endl;

			// first name
			cout << "First Name: ";
			cout << (*masterList).getFirst() << endl;

			// last name
			cout << "Last Name: ";
			cout << (*masterList).getLast() << endl;

			// email
			cout << "Email: ";
			cout << (*masterList).getEmail() << endl;

			// unit/credit
			cout << "Unit: ";
			cout << (*masterList).getUnits() << endl;

			// major
			cout << "Major: ";
			cout << (*masterList).getMajor() << endl;

			// level
			cout << "Level: ";
			cout << (*masterList).getLevel() << endl;

			masterList -> next;
		}

		// close the text file
		master.close();
	}
	else
	{
		master.close();
		cout << "File already exist." << endl;
	}
}
