//Task 1

#include <iostream>
#include <string>
#include <conio.h>

std::string name;
char initial;
long phonenumber;
int dob; //date of birth
int dob_day;
int dob_month;
int dob_year;


int main()
{

    std::cout << "Full name: ";
	std::getline(std::cin, name);
	std::cout << "Your full name is " << name << "." << std::endl << "Enter intitial of first name: ";
	std::cin >> initial;
	std::cout << "Initial selected was " << initial << "." << std::endl << "What is your age? ";
	std::cin >> dob;
	std::cout << "You are " << dob << " years old." << std::endl << "Phone number? ";
	std::cin >> phonenumber;
	std::cout << "You entered " << phonenumber << std::endl << "What year were you born? ";
	std::cin >> dob_year;
	std::cout << "You are born in lord's year of " << dob_year << std::endl << "Month of birth (1 - 12)? ";
	std::cin >> dob_month;
	std::cout << "You were born in " << dob_month << std::endl << "Day of birth (1 - 31)? ";
	std::cin >> dob_day;
	std::cout << "To sum up:" << std::endl << "Name: " << name << std::endl << "Initial: " << initial << std::endl <<
		"Phone number: " << phonenumber << std::endl <<
		"Your date of birth is " << dob_day << "/" << dob_month << "/" << dob_year << "." << std::endl << "Press any key to finish";
	_getch();

}

