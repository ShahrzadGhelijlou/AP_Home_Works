#pragma once
#include <iostream>
#include <vector>
#include <string>
#define COLOR_RED     "\x1b[31m"
#define COLOR_CYAN    "\x1b[36m"
#define COLOR_RESET   "\x1b[0m"
using namespace std;
struct pegType
{   
    vector<int> diskStack;
    string pegName;
};
void loadDisk(int totalDisks, vector<int>& startPeg);
void printPeg(vector<int> stack, string name);
void moveDisk(pegType& source, pegType& dest);
int hanoi(int totalDisks, pegType& source, pegType& dest, pegType& aux);