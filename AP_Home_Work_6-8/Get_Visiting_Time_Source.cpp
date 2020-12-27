#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include "Get_Visiting_Time.h"


using namespace std;

int main()
{
	//Function_Overriding_Test
	Doctor doctor;
	Person& person = doctor;
	doctor.setName("Dr Name");
	doctor.setNationalCode("Dr National Code");
	cout << COLOR_MAGENTA << "Function overriding test --> " << COLOR_RESET << endl;
	person.print();
	cout << endl << endl;
	//End_Of_Function_Overriding_Test

	//Initialize_Map
	Doctor dr1;
	Doctor dr2;
	Doctor dr3;

	//Please help me to improve this part of my program beecause I'm beginner to cpp. Every help will be appriciated .

	dr1.setName("Docotr1");
	dr1.setID(101);

	dr2.setName("Docotr2");
	dr2.setID(102);

	dr3.setName("Docotr3");
	dr3.setID(103);

	map<int, string> doctorMap;
	doctorMap[dr1.getID()] = dr1.getName();
	doctorMap[dr2.getID()] = dr2.getName();
	doctorMap[dr3.getID()] = dr3.getName();
	//End_Of_Initialize_Map

	//Operator_Over_Loading_Test
	cout << COLOR_BLUE << "Operator overloading test -->" << endl;
	cout << dr1 << endl;
	cout << dr2 << endl;
	cout << dr3 << endl;
	cout << COLOR_RESET << endl << endl;
	//End_Of_Operator_Over_Loading_Test

	//Start_Hospital_Get_Visiting_Time
	cout << COLOR_GREEN << "<<Welcome to our Hospital>>" << COLOR_RESET << endl << endl;

	bool Menu = 1;
	while (Menu)
	{
		cout << COLOR_CYAN << "Menu :" << endl << endl
			<< "1.Doctors List" << endl
			<< "2.Nurses List" << endl
			<< "3.Find doctor's name by ID" << endl
			<< "4.Exit (Or press ctrl+z)" << endl << endl;

		cout << "Please enter a number :";
		int Key;
		cin >> Key;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			continue;
		}
		cout << endl << endl;

		// Exit by press ctrl+z 
		if (cin.eof()) {
			cout << COLOR_GREEN << "END...";
			cout << COLOR_RESET;
			break;
		}

		switch (Key) {
		case 1: {
			cout << COLOR_BLUE;
			loadFromCsvFile("Doctors.csv");
			cout << COLOR_RESET;
			break;
		}
		case 2: {
			cout << COLOR_YELLOW;
			loadFromCsvFile("Nurses.csv");
			cout << COLOR_RESET;
			break;
		}
		case 3: {
			/*Whats problem ?
			time_t rawtime;

			time(&rawtime);
		   cout<<"The current local time is: %s"<< ctime(&rawtime);

			return 0;*/
			cout << COLOR_MAGENTA;
			cout << "Please enter doctor's ID :";
			int ID;
			cin >> ID;

			try {
				doctorIDValidation(ID);
			}
			catch (const char* e) {
				cerr << COLOR_RED"Your input is out of range please try again !" << endl << endl;
				break;
			}
			catch (const char e) {
				cerr << COLOR_RED"Your input is wrong please try again !" << endl << endl;
				break;
			}

			for (auto i : doctorMap) {
				if (i.first == ID)
{
					cout << endl << i.second << endl << endl;
					break;
				}
			}

			cout << endl << COLOR_RESET;
			break;

		}
		case 4: {
			cout << COLOR_GREEN << "END...";
			cout << COLOR_RESET;
			break;
		}
		default: {
			cout << COLOR_RED << "No match item" << COLOR_RESET << endl << endl;
		}
		}
		return(0);
	};
	//End_Of_Hospital_Get_Visiting_Time
}