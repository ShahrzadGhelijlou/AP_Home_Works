#include <iostream>
#include <vector>
#include <string>
#include "Tower_Of_Hanoi.h"

int main()
{
    cout << COLOR_RED << " <<Tower Of Hanoi >>" << COLOR_RESET << endl << endl;
    cout << COLOR_CYAN << "Please enter your choosen number for disks :";
    int number;
    cin >> number;
    const int NUM_DISKS(number);
    int totalMoves = 0;

    pegType peg1, peg2, peg3;
    peg1.pegName = "A";
    peg2.pegName = "B";
    peg3.pegName = "C";


    loadDisk(NUM_DISKS, peg1.diskStack);

    // START
    cout << endl;
    cout << COLOR_RED << "[ Start condition ]" << COLOR_RESET << endl << endl;
    printPeg(peg1.diskStack, peg1.pegName);
    printPeg(peg2.diskStack, peg2.pegName);
    printPeg(peg3.diskStack, peg3.pegName);
    cout << endl;

    cout << COLOR_RED << "[ Moving Steps ]" << COLOR_RESET << endl << endl;
    totalMoves = hanoi(NUM_DISKS, peg1, peg3, peg2);
    cout << endl;
    cout << COLOR_RED << "Total number of moving steps : " << totalMoves << COLOR_RESET<<endl<<endl;


    // END
    cout << endl;
    cout << COLOR_RED "[ End condition ] " << COLOR_RESET << endl << endl;
    printPeg(peg1.diskStack, peg1.pegName);
    printPeg(peg2.diskStack, peg2.pegName);
    printPeg(peg3.diskStack, peg3.pegName);

    cout<<COLOR_RESET;

    return 0;
}