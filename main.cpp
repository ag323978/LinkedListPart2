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

// function prototypes
void addNode(Student* student, Node* &head);
void deleteNode();
void printList(Node* next);
void average();

int main() {

  Node* head = NULL;
  
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

    // all the information required for a student
    char* firstName = new char[50];
    char* lastName = new char[50];
    int ID;
    float GPA;
    
    cout << "Type one of the commands listed above: ";
    cin.getline(command, 1000);
    cout << "\n";
    
    // if user wants to add a student
    if(strcmp(command, "ADD") == 0) {
      cout << "---New student entry---" << endl;
      
      // enter the information  
      cout << "Enter the student's first name: ";
      cin.getline(firstName, 50);
      cout << "Enter the student's last name: ";
      cin.getline(lastName, 50);
      cout << "Enter the student's 6 digit ID number: ";
      cin >> ID;
      cout << "Enter the student's GPA: ";
      cin >> GPA;

      /*
	create a makeshift student and 
	put all the inputted information
	in it 
      */
      Student* student = new Student(firstName, lastName, ID, GPA);
      addNode(student, head);
      
      cout << "---------------------------------------------------------" << endl;
    }
    // if user wants to remove a student
    else if (strcmp(command, "DELETE") == 0) {
      cout << "Deleting student." << endl;
      cout << "---------------------------------------------------------" << endl;
    }
    // if user wants to see all the students currently stored in the list
    else if (strcmp(command, "PRINT") == 0) {
      cout << "---Printing student list---" << endl;
      printList(head);
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

// functions

// add a new Student Node with all the necessary information to the list
void addNode(Student* student, Node* &head) {
  Node* current = head;
  // if the list is at the very beginning
  if (current = NULL) {
    // make the first node
    head = new Node(student);
  }
  else {
    // while the end of the list hasn't been reached
    while (current->getNext() != NULL) {
      // keep going to the next node 
      current = current->getNext();
    }
    // once the end of the list is reached add new node there
    current->setNext(new Node(student));
  }
}

// delete an existing Student Node from the list
void deleteNode() {

}

// print all the students in the current list
void printList(Node* next) {
  // if the end of the list hasn't reached
  if(next != NULL) {
    // print out students information
    cout << next->getStudent()->getFirstName() << " " << next->getStudent()->getLastName() << ", ID#: "
         << next->getStudent()->getID() << ", GPA: " << next->getStudent()->getGPA() << endl;
    // called recursively
    printList(next->getNext());
  }
}

// average all the students GPAs
void average() {

}
