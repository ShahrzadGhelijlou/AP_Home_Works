#include<iostream>
#include<sstream>
#include<fstream>
#include <string>
#include<limits>
#include "Get_Visiting_Time.h"

using namespace std;

void Person::setName(string name) {
	this->name = name;
}
string Person::getName() {
	return name;
}

void Person::setID(int ID) {
	this->ID = ID;
}
int Person::getID() {
	return ID;
}

void Person::setNationalCode(string nationalCode) {
	this->nationalCode = nationalCode;
}
string Person::getNationalCode() {
	return nationalCode;
}

ostream& operator << (ostream& out, const Person& attribute)
{
	out << attribute.name << "  "
		<< attribute.ID << "  "
		<< attribute.nationalCode << endl;

	return out;
}

void Person::print()
{
}

void Doctor::print() {
	cout << COLOR_MAGENTA"Doctor name is :" << getName() << "\tDoctor national code is :" << getNationalCode() << COLOR_RESET << endl << endl;
}

vector<Person> readPersonInfoFromCSV(string path)
{
	ifstream File(path, ios::in);
	if (!File || File.is_open()) {
		cerr << "Some thing went wrong !" << endl;
		exit(1);//exception handling fix
	}


	// Read the Data from the file
	// as String Vector
	vector<string> row;
	vector<Person> person;
	Person tempPerson;
	string line, word, temp;

	while (File >> temp)
	{
		row.clear();

		// read an entire row and
		// store it in a string variable 'line'
		getline(File, line);

		// used for breaking words
		stringstream S(line);

		// read every column data of a row and store it in a string variable, 'word'
		while (getline(S, word, ','))
		{
			// add all the column data of a row to a vector
			row.push_back(word);
		}

		tempPerson.setID(stoi(row[0]));
		tempPerson.setName(row[1]);
		tempPerson.setNationalCode((row[2]));
		person.push_back(tempPerson);
		cout << tempPerson << endl;
	}
}

void loadFromCsvFile(string  fileName) {

	ifstream File(fileName, ios::out);
	try {
		fileOpenValidation(File);
	}
	catch (string Error) {
		cerr << " Some thing went wrong please try again !";
		break;
	}
	string name;
	while (!File.eof())
	{
		File >> name;
		cout << name << endl;
	}
	cout << endl << endl;
}

void doctorIDValidation(int input) {

	if (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		throw 'e';
	}

	else if (input < 100 || input>103)
		throw "Invalid input !";
}

void fileOpenValidation(ifstream File) {
	if (!File || File.is_open()) {
		throw ("can not open the file !")
	}
}