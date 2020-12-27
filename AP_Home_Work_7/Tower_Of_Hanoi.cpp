// Tower_Of_Hanoi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <vector>
#include <string>
#include "Tower_Of_Hanoi.h"


using namespace std;




void loadDisk(int totalDisks, vector<int>& startPeg)
{
    for (auto i = 0; i != totalDisks; ++i)
        startPeg.push_back(i + 1);
}


void printPeg(vector<int> stack, string name)
{
    if (stack.size() > 1)
    {
        cout <<COLOR_CYAN<< name << " has " << stack.size() << " disks: ";
        for (auto ir = stack.rbegin(); ir != stack.rend(); ++ir)
            cout << *ir << " ";
        
    }
    else
    {
        cout <<COLOR_CYAN<< name << " has " << stack.size() << " disks: ";
    }
   cout << endl;
  
}


void moveDisk(pegType& source, pegType& dest)
{
    if (source.diskStack.size() > 0)
    {       
        int temp = source.diskStack.back();
        source.diskStack.pop_back();
        dest.diskStack.push_back(temp);
        cout <<COLOR_CYAN<< "Moving disk " << temp << " from " << source.pegName << " to " << dest.pegName <<COLOR_RESET<< '\n';
    }
}


int hanoi(int totalDisks, pegType& source, pegType& dest, pegType& aux)
{
    int count = 0;

    if (totalDisks > 0)
    {
        count = hanoi(totalDisks - 1, source, aux, dest);
        moveDisk(source, dest);
        count++;
        count += hanoi(totalDisks - 1, aux, dest, source);
    }
    return count;
}