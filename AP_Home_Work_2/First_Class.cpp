#include <iostream>
#include <string.h>
 using namespace std;

class Person{
	string firstName;
	string familyName;
	public:
	 void setFirstName(string firstName);
	 string getFirstName();
	void setFamilyName(string familytName);
	 string getFamilyName();
	 void myName();
};

void Person::myName(){

	cout<<"My name  is : "<<getFirstName()<<"    "<<getFamilyName()<<"\n\n";
}
 
void Person::setFirstName(string FirstName){
	 
	 firstName=FirstName;
}

string Person::getFirstName(){
	return firstName;
}

void Person::setFamilyName(string FamilyName){
	 
	 familyName=FamilyName;
}

string Person::getFamilyName(){
	return familyName;
}

class Student : public Person{
 	
	int age;
	
	public:
	    void setAge(int Age);
	    int getAge();
		
		
 };

void Student::setAge(int Age)
{
	age=Age;
}
int Student::getAge(){
	return age;
}
 
 class Teacher : public Person{
 	
    int age;
    
    public:
		void setAge(int Age);
	    int getAge();
	
 };
 
void Teacher::setAge(int Age)
{
	age=Age;
}
int Teacher::getAge(){
	return age;
}

void MyAge(int age)
{
	cout<<"My age is : "<<age<<"\n\n";
} 

int main(int argc, char** argv) {
	Student student;
	student.setFirstName("Student_FirstName");
	student.setFamilyName("Student_FamilyName");
	student.setAge(20);
	student.myName();
	MyAge(student.getAge());
	 
    Teacher teacher;
	teacher.setFirstName("Teacher_FirstName");
	teacher.setFamilyName("Teacher_FamilyName");
	teacher.setAge(45);
	teacher.myName();
	MyAge(teacher.getAge());
	return 0;
}
