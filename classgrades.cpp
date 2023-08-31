//implementation file
#include "classgrades.h"
#include <iostream>
#include <cstdlib>
#include <cctype>
#include <string>
#include <iomanip>
using namespace std;


namespace {
	//helper function
	bool isValidZNumber(string znum_str)
	{
		if (znum_str.length() != 8)
			return false;

		for (char c : znum_str) {
			if (!isdigit(c))
				return false;
		}

		return true;
	}
	namespace COP3014bertrand {
		// using constructor to intialize variables
		COP3014() {
			fname = "";
			lname = "";
			znum = 0;
			quiz1 = 0.0;
			quiz2 = 0.0;
			quiz3 = 0.0;
			midterm = 0.0;
			final = 0.0;
			totalgrade = 0.0;
			lettergrade = '\0';
		}
		COP3014::COP3014(string f_name, string l_name, int z_num, float quiz_1, float quiz_2, float quiz_3, float mid_term, float fi_nal, float to_talgrade, char let_tergrade)
		{
			fname = f_name;
			lname = l_name;
			znum = z_num;
			quiz1 = quiz_1;
			quiz2 = quiz_2;
			quiz3 = quiz_3;
			midterm = mid_term;
			final = fi_nal;
			totalgrade = to_talgrade;
			lettergrade = let_tergrade;

		}
		void COP3014::userinput()
		{
			// temp string variable to store Z-number and validate with isValidZNumber function
			string znum_str;

			// prompting user input and if invalid, program exits
			cout << "please enter first name" << endl;
			cin >> fname;
			if (cin.fail()) {
				cout << "Sorry, you have entered an invalid name, exiting program..." << endl;
				exit(1);
			}

			cout << "please enter last name" << endl;
			cin >> lname;
			if (cin.fail()) {
				cout << "Sorry, you have entered an invalid name, exiting program..." << endl;
				exit(1);
			}

			cout << "please enter Z number omitting the 'Z' (8 digits)" << endl;
			cin >> znum_str;
			//calling function to validate user input
			if (isValidZNumber(znum_str)) {
				znum = stoi(znum_str);
			}
			else {
				cout << "Sorry, you have entered an invalid Znumber, exiting program..." << endl;
				exit(1);
			}

			cout << "please enter quiz 1 grade" << endl;
			cin >> quiz1;
			if (cin.fail() || quiz1 > 20 || quiz1 < 0) {
				cout << "Sorry, you have entered an invalid grade, exiting program..." << endl;
				exit(1);
			}

			cout << "please enter quiz 2 grade" << endl;
			cin >> quiz2;
			if (cin.fail() || quiz2 > 20 || quiz2 < 0) {
				cout << "Sorry, you have entered an invalid grade, exiting program..." << endl;
				exit(1);
			}
			cout << "please enter quiz 3 grade" << endl;
			cin >> quiz3;
			if (cin.fail() || quiz3 > 20 || quiz3 < 0) {
				cout << "Sorry, you have entered an invalid grade, exiting program..." << endl;
				exit(1);
			}

			cout << "please enter midterm grade" << endl;
			cin >> midterm;
			if (cin.fail() || midterm > 100 || midterm < 0) {
				cout << "Sorry, you have entered an invalid grade, exiting program..." << endl;
				exit(1);
			}

			cout << "please enter final grade" << endl;
			cin >> final;
			if (cin.fail() || final > 100 || final < 0) {
				cout << "Sorry, you have entered an invalid grade, exiting program..." << endl;
				exit(1);
			}
		}
		//total_grade function to compute total grade and store it in member variable
		float COP3014::total_grade()
		{
			totalgrade = ((quiz1 + quiz2 + quiz3) / 3.0f) + (midterm * .30f) + (final * .50f);
			return totalgrade;
		}
		//using total_grade function to give student a letter grade
		char COP3014::letter_grade()
		{
			if (total_grade() > 90)
				lettergrade = 'A';
			else if (total_grade() < 90 && total_grade() >= 80)
				lettergrade = 'B';
			else if (total_grade() < 80 && total_grade() >= 70)
				lettergrade = 'C';
			else if (total_grade() < 70 && total_grade() >= 60)
				lettergrade = 'D';
			else if (total_grade() < 60 && total_grade() >= 0)
				lettergrade = 'F';
			if (final == 0 || midterm == 0)
				lettergrade = 'F';
			return lettergrade;
		}
		// output function to display all grades
		// if student has a bonus, it's automatically implemented in total grade and letter grade
		void COP3014::outputfunc()
		{
			//fixed decimal places
			cout << fixed << setprecision(2);
			cout << fname << " " << lname << " - Z" << znum << endl;
			cout << "        Quiz 1: " << quiz1 << endl;
			cout << "        Quiz 2: " << quiz2 << endl;
			cout << "        Quiz 3: " << quiz3 << endl;
			cout << "        Midterm: " << midterm << endl;
			cout << "        Final: " << final << endl;
			cout << "        Total grade: " << totalgrade << endl;
			cout << "        Final grade: " << lettergrade << endl;
		}
		// setter functions for member variables to update values as needed
		void COP3014::set_fname(string fname)
		{
			this->fname = fname;
		}
		void COP3014::set_lname(string lname)
		{
			this->lname = lname;
		}
		void COP3014::set_znum(int znum)
		{
			this->znum = znum;
		}
		void COP3014::set_quiz1(float quiz1)
		{
			this->quiz1 = quiz1;
		}
		void COP3014::set_quiz2(float quiz2)
		{
			this->quiz2 = quiz2;
		}
		void COP3014::set_quiz3(float quiz3)
		{
			this->quiz3 = quiz3;
		}
		void COP3014::set_midterm(float midterm)
		{
			this->midterm = midterm;
		}
		void COP3014::set_final(float final)
		{
			this->final = final;
		}
		void COP3014::set_totalgrade(float totalgrade)
		{
			this->totalgrade = totalgrade;
		}
		void COP3014::set_lettergrade(char lettergrade)
		{
			this->lettergrade = lettergrade;
		}
		// getter functions to be able to access private member variable values
		string COP3014::get_fname()
		{
			return fname;
		}
		string COP3014::get_lname()
		{
			return lname;
		}
		int COP3014::get_znum()
		{
			return znum;
		}
		float COP3014::get_quiz1()
		{
			return quiz1;
		}
		float COP3014::get_quiz2()
		{
			return quiz2;
		}
		float COP3014::get_quiz3()
		{
			return quiz3;
		}
		float COP3014::get_midterm()
		{
			return midterm;
		}
		float COP3014::get_final()
		{
			return final;
		}
		float COP3014::get_totalgrade()
		{
			return totalgrade;
		}
		char COP3014::get_lettergrade()
		{
			return lettergrade;
		}
		//summer class implementation
			// constructor for summer23 class
			// initializing 'bonus'
		summer23::summer23() : COP3014() {
			bonus = 0.0;
		}
		void summer23::userinput2() {
			// Prompting user to input bonus
			// Bonus can't be negative
			cout << "please enter total bonus accumulated (in %)" << endl;
			cin >> bonus;
			if (cin.fail() || bonus < 0) {
				cout << "sorry invalid input, exiting program..." << endl;
				exit(1);
			}
		}
		//redefining total grade function for summer class
		float summer23::total_grade() {
			float base_total_grade = COP3014::total_grade();
			// Apply the bonus
			return base_total_grade + (base_total_grade * bonus / 100);
		}
		char summer23::letter_grade() {
			return COP3014::letter_grade();
		}

		void summer23::output2()
		{
			// making grades have 2 decimal places
			cout << fixed << setprecision(2);
			cout << "        bonus: " << bonus << "%" << endl;
			cout << "        grade with bonus: " << total_grade() << endl;
			cout << "        new letter grade: " << letter_grade() << endl;

		}
		void summer23::set_bonus(float bonus)
		{
			this->bonus = bonus;
		}
		float summer23::get_bonus()
		{
			return bonus;
		}
	}
}
