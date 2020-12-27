#pragma once
#include<iostream>
#include <string>
#include <vector>
using namespace std;
#define COLOR_RED     "\x1b[31m"
#define COLOR_GREEN   "\x1b[32m"
#define COLOR_YELLOW  "\x1b[33m"
#define COLOR_BLUE    "\x1b[34m"
#define COLOR_MAGENTA "\x1b[35m"
#define COLOR_CYAN    "\x1b[36m"
#define COLOR_RESET   "\x1b[0m"

class Person {

protected:
	int ID;
	string name;
	string nationalCode;
public:
	void setName(string name);
	string getName();

	void setID(int ID);
	int getID();

	void setNationalCode(string nationalCode);
	string getNationalCode();

	virtual void print();

	friend ostream& operator << (ostream& out, const Person& attribute);
};

class Doctor : public Person {
public:
	void print();
	friend ostream& operator << (ostream& out, const Doctor& attribute);
};

class Nurse : public Person {};

void loadFromCsvFile(string  fileName);

void doctorIDValidation(int input);

void fileOpenValidation(string fileName);

