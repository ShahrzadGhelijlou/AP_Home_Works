#pragma once

#include <string.h>
using namespace std;

class Person {
    string name;
    string familyName;
    int age;
    string phoneNumber;
    string address;
public:
    void nameSetter(string Name);
    string nameGetter();

    void familyNameSetter(string FamilyName);
    string familyNameGetter();

    void ageSetter(int Age);
    int  ageGetter();

    void phoneNumberSetter(string PhoneNumber);
    string phoneNumberGetter();

    void addressSetter(string Address);
    string addressGetter();
};

class Patient :public Person {
    string kindOfDisease;
    string kindOfCure;
    float cost;
public:
    void kindOfDiseaseSetter(string KindOfDisease);
    string kindOfDiseaseGetter();

    void kindOfCureSetter(string KindOfCure);
    string kindOfCureGetter();

    void costCount();
    void costSetter(float Cost);
   float costGetter();


};

class Employee :public Person {
    float salary;
protected:
    float salaryCalculate();
public:
    void salarySetter(float Salary);
    float salaryGetter();
};

class Equipment {
    struct equipment {
        int name;
        int number;
        struct equipment* thisOne;
    }eq;
public:
    void equipmentSetter(int Name, int Number);
    struct equipment equipmentGetter();
};

class Section {
};