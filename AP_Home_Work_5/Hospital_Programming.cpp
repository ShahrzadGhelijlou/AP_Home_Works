// Hospital_Programming.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Hospital_Programming.h"

void Person::nameSetter(string Name) {
    name = Name;
}
string Person::nameGetter() {
    return name;
}
void Person::familyNameSetter(string FamilyName) {
    familyName = FamilyName;
}
string Person::familyNameGetter() {
    return familyName;
}
void Person::ageSetter(int Age) {
    age = Age;
}
int Person::ageGetter() {
    return age;
}
void Person::phoneNumberSetter(string PhoneNumber) {
    phoneNumber = PhoneNumber;
}
string Person::phoneNumberGetter() {
    return phoneNumber;
}
void Person::addressSetter(string Address) {
    address = Address;
}
string Person::addressGetter() {
    return address;
}

void Patient::kindOfDiseaseSetter(string KindOfDisease) {
    kindOfDisease = KindOfDisease;
}
string Patient::kindOfDiseaseGetter() {
    return kindOfDisease;
}
void Patient::kindOfCureSetter(string KindOfCure) {
    kindOfCure = KindOfCure;
}
string Patient::kindOfCureGetter() {
    return kindOfCure;
}
void Patient::costCount() {
}
void Patient::costSetter(float Cost){
    cost = Cost;
}
float Patient::costGetter(){
    return cost;
}

void Employee::salarySetter(float Salary) {
    salary = Salary;
}
float Employee::salaryGetter() {
    return salary;
}

float Employee::salaryCalculate() {

}
void Employee::salarySetter(float Salary) {
    salary = Salary;
}
float Employee::salaryGetter() {
    return salary;
}

void Equipment::equipmentSetter(int Name, int Number) {
   eq.name = Name;
   eq. number = Number;
}
struct equipment* equipmentGetter() {
    
}


