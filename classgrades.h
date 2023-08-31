//interface file 

#include <iostream>
#include <cstdlib>
#include <cctype>
#include <string>
#include <iomanip>
using namespace std;

#ifndef CLASSGRADES_H
#define CLASSGRADES_H

namespace COP3014bertrand
{
	class COP3014
	{
	public:
		//default constructor
		COP3014();
		//user defined comstructor
		COP3014(string f_name, string l_name, int z_num, float quiz_1, float quiz_2, float quiz_3, float mid_term, float fi_nal, float to_talgrade, char let_tergrade);
		void userinput();
		float total_grade();
		char letter_grade();
		void outputfunc();
		//setter functions
		void set_fname(string fname);
		void set_lname(string lname);
		void set_znum(int znum);
		void set_quiz1(float quiz1);
		void set_quiz2(float quiz2);
		void set_quiz3(float quiz3);
		void set_midterm(float midterm);
		void set_final(float final);
		void set_totalgrade(float totalgrade);
		void set_lettergrade(char lettergrade);
		//getter functions
		string get_fname();
		string get_lname();
		int get_znum();
		float get_quiz1();
		float get_quiz2();
		float get_quiz3();
		float get_midterm();
		float get_final();
		float get_totalgrade();
		char get_lettergrade();

		//member variables
	private:
		string fname;
		string lname;
		int znum;
		float quiz1;
		float quiz2;
		float quiz3;
		float midterm;
		float final;
		float totalgrade;
		char lettergrade;
	};
	class summer23 : public COP3014 {
	public:
		summer23();
		void userinput2();
		float total_grade();
		char letter_grade();
		void output2();
		void set_bonus(float bonus);
		float get_bonus();
	private:
		float bonus;
	};
}
using namespace COP3014bertrand;

#endif





