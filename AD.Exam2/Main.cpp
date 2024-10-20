
// Exam 2
// Abdoulie Drammeh

#include <iostream>
#include <conio.h>
#include <string>
#include "Student.h"

using namespace std;

int main()
{
	string name;
	float gpa;
	
	cout << "Enter the name of the student: ";
	getline(cin, name);
	cout << "\nEnter " << name << "'s GPA: ";
	cin >> gpa;

	Student studentA(name,gpa);
	studentA.Display();

	cout << "\n\nDo You Want to create another student (Y/N)? ";
	string choice;
	cin >> choice;
	if (choice == "Y" || choice == "y")
	{
		string n2;
		float g2;
		
		cout << "Enter the name of the student: ";
		cin >> n2;
		cout << "\nEnter " << n2 << "'s GPA: ";
		cin >> g2;
		Student* studentB = new Student(n2,g2);
		studentB->SetName(n2);
		studentB->SetGpa(g2);
		studentB->Display();

		delete studentB;

	}
	else
		cout << "done";

	(void)_getch();
	return 0;
}
