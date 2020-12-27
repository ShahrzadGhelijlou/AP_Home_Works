#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;
map<int, JSON>Json;


class Value {};

class StringValue:public Value {
	string value;
public:
	void valueSetter(string value) {
		this->value = value;
	}
	string valueSetter() {
		return value;
	}
};
class IntegerValue:public Value {
	int value;
public:
	void valueSetter(int value) {
		this->value = value;
	}
	int valueSetter() {
		return value;
	}
};
class FloatValue :public Value {
	float value;
public:
	void valueSetter(float value) {
		this->value = value;
	}
	float valueSetter() {
		return value;
	}
};
class ArrayValue:public Value {
	Value value[];
};

class  Property {
	string attribute;
	Value value;
	

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


class JSON {
	int parentID;
	vector<Property>prop;
public:
	JSON() {
		static int counter = 0;
		counter++;
		parentID = counter;
	}

	int getParentID() {
		return parentID;
	}

	void PushBack(Property p) {
		prop.push_back(p);
	}

	void print() {}
};

void addStringToObject(int parentID, string name, string value) {
	if (parentID < 0) throw 0;
	else {
		for (auto i : Json) {
			if (i.first == parentID) {
				Property property;
				property.attributeSetter(name);
				StringValue stringValue;
				Value* v = &stringValue;
				stringValue.valueSetter(value);
				property.valueSetter(*v);
				i.second.PushBack(property);
			}
		}
	}
}

void addIntegerToObject(int parentID, string name,int value) {
	if (parentID < 0) throw 0;
	else {
		for (auto i : Json) {
			if (i.first == parentID) {
				Property property;
				property.attributeSetter(name);
				IntegerValue integerValue;
				Value* v = &integerValue;
				integerValue.valueSetter(value);
				property.valueSetter(*v);
				i.second.PushBack(property);
			}
		}
	}
}

void addFloatToObject(int parentID, string name, float value) {
	if (parentID < 0) throw 0;
	else {
		for (auto i : Json) {
			if (i.first == parentID) {
				Property property;
				property.attributeSetter(name);
				FloatValue floatValue;
				Value* v = &floatValue;
				floatValue.valueSetter(value);
				property.valueSetter(*v);
				i.second.PushBack(property);
			}
		}
	}
}

int main()
{
	/*const char* json = R""""(
         "name":"Shahrzad",
         "family name":"Ghelijlou",
         "age":20,
         "education":"Undergraduate studies of CE",
         "scores":[20,19,18,17],
         "Term":{
            "course name":"Advanced_Programming",
            "number of units":3
            }
    )"""";
    std::cout << json;*/

	JSON json0;
	Json[json0.getParentID()] = json0;
	addStringToObject(1, "name", "Shahrzad");
	
    
}


