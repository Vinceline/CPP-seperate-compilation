//application file
#include "classgrades.h"
#include <iostream>
#include <cstdlib>
#include <cctype>
#include <string>
#include <iomanip>

int main()
{
	// sample student 1:
	summer23 student1;
	student1.set_fname("Frank");
	student1.set_lname("Fabulous");
	student1.set_znum(12345678);
	student1.set_quiz1(20);
	student1.set_quiz2(20);
	student1.set_quiz3(10);
	student1.set_midterm(0);
	student1.set_final(90);
	student1.set_totalgrade(61.67);
	student1.set_bonus(2);

	student1.letter_grade();
	student1.outputfunc();
	student1.total_grade();
	student1.output2();
	cout << "---------------------------------------------------" << endl;

	// sample student2:
	summer23 student2;
	student2.set_fname("Gina");
	student2.set_lname("Genius");
	student2.set_znum(98765432);
	student2.set_quiz1(20);
	student2.set_quiz2(20);
	student2.set_quiz3(20);
	student2.set_midterm(98);
	student2.set_final(95);
	student2.set_totalgrade(96.9);
	student2.set_bonus(3);

	student2.letter_grade();
	student2.outputfunc();
	student2.total_grade();
	student2.output2();
	cout << "---------------------------------------------------" << endl;
	cout << "---------------------------------------------------" << endl;

	char testgrade;
	char choice;
	cout << "please input y or Y to display a student's grades." << endl;
	cin >> testgrade;
	if (cin.fail() || testgrade != 'y' && testgrade != 'Y')
	{
		exit(1);
	}
	// loop to give user option to try as many test cases as desired
	do {
		summer23 teststudent;
		// user is asked to enter all grades and bonus first
		teststudent.userinput();
		teststudent.userinput2();
		teststudent.letter_grade();
		// displaying output function from base class and summer23
		teststudent.outputfunc();
		teststudent.total_grade();
		teststudent.output2();
		cout << "---------------------------------------------------" << endl;

		cout << "Do you want to continue (Y/N)?  " << endl;
		cin >> choice;
		if (choice == 'N' || choice == 'n') {
			break; // Exit the loop if user chooses to exit
		}
		cout << "---------------------------------------------------" << endl;
	} while (testgrade == 'y' || testgrade == 'Y');
	
}