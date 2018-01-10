/*
  Author: Aryan Gupta
  Date: 12/16/17
  This program allows a user to create a student list and uses a linked list to store and manage the data
 */

#include "Node.h"
#include "Student.h"
#include <cstring>
#include <iostream>

using namespace std;

void addStudent();
void deleteStudent();
void printList();
void average();

int main() {

  //instructions
  cout << "\n";
  cout << "---------------------------------------------------------" << endl;
  cout << "| To create a student list use the following commands   |" << endl;
  cout << "| Type (ADD) to create a new entry for a student        |" << endl;
  cout << "| Type (DELETE) to remove a student from the list       |" << endl;
  cout << "| Type (PRINT) to print all the students in the list    |" << endl;
  cout << "| Type (AVERAGE) to see the average GPA of all students |" << endl;
  cout << "| Type (QUIT) whenever you are done or want to leave    |" << endl;
  cout << "| **NOTE** Type all commands WITHOUT the parentheses () |" << endl;
  cout << "---------------------------------------------------------" << endl;
  cout << "\n";
  cout << "\n";
  cout << "\n";
  cout << "---------------------------------------------------------" << endl;
  
  // keep running till user wants to quit
  bool quit = false;
  while(quit == false) {

    // holds the users input
    char command[1000];

    cout << "Type one of the commands listed above: ";
    cin.getline(command, 1000);
    cout << "\n";
    
    // if user wants to add a student
    if(strcmp(command, "ADD") == 0) {
      cout << "New student entry." << endl;
      // all the information needed for a student
      char *firstName = new char[20];
      char *lastName = new char[20];
      int ID;
      float GPA;

      // enter the information  
      cout << "Enter the student's 6 digit ID number: " << endl;
      cin >> ID;
      cout << "Enter the student's first name: " << endl;
      cin.getline(firstName, 20);
      cout << "Enter the student's last name: " << endl;
      cin.getline(lastName, 20);
      cout << "Enter the student's GPA: " << endl;
      cin >> GPA;
      
      
      cout << "---------------------------------------------------------" << endl;
    }
    // if user wants to remove a student
    else if (strcmp(command, "DELETE") == 0) {
      cout << "Deleting student." << endl;
      cout << "---------------------------------------------------------" << endl;
    }
    // if user wants to see all the students currently stored in the list
    else if (strcmp(command, "PRINT") == 0) {
      cout << "Printing all students in the list." << endl;
      cout << "---------------------------------------------------------" << endl;
    }
    // if user wants to see the average of all the students GPA's
    else if (strcmp(command, "AVERAGE") == 0) {
      cout << "Averaging all GPA's" << endl;
      cout << "---------------------------------------------------------" << endl;
    }
    // if user wants to quit the program
    else if (strcmp(command, "QUIT") == 0) {
      cout << "Terminating program" << endl;
      cout << "---------------------------------------------------------" << endl;
      quit = true;
    }
    // the user entered an invalid command
    else {    
      cout << "Invalid command, try again. ";
    }
  }
}
