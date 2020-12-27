#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

template <typename T>

class Property {
	string attribute;
	T value;

public:
	void attributeSetter(string attribute) {
		this->attribute = attribute;
	}
	string attributeGetter() {
		return attribute;
	}

	void valueSetter(Value value) {
		this->value = value;
	}
	Value valueGetter() {
		return value;
	}
};

template <typename T>
class JSON {
	
	vector<Property>properties;
	int ID;
	
public:
	
	JSON() {
		static int  ID = 0;

		ID++;
		this->ID = ID;

		cout << ID;
	}
	
	void print();
	template<typename T>
	void addStringToObject(int parentID, string attribute, string value) {
		//parentID check
		
		Property  p;
		p.attributeSetter(attribute);
		p.valueSetter(value);
		this->properites.push_back(p);
		cout << properties;
	}
};
/*class StringValue :public Value {
	string value;
};

class IntegerValue :public Value {
	int value;
};

class FloatValue :public Value {
	double value;
};

class ArrayValue :public Value {
	Value value[10];
};

class ObjectValue :public Value {
	JSON value;
};

class BooleanValue :public Value {
	bool value;
};
*/

/*template <typename T>
void addStringToObject(int parentID, string attribute, string value) {
	//parentID check
	Property property;
	property.attributeSetter(attribute);
	property.valueSetter(value);
}*/

/*template <typename T>
void addIntegerToObject(int parentID, string attribute, int value) {
	//parentID check
	Property p;
	p.attributeSetter(attribute);
	p.valueSetter(value);
}*/


