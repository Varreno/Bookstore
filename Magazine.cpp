#include "Magazine.h"
#include <iostream>
using namespace std;

// TODO: Implement the Constructor
// Hint: Remember to call the PrintedMedia constructor using : PrintedMedia(t, p)
Magazine::Magazine(string title, double price, string month, int issueNum) : PrintedMedia(title, price), month(month), issueNum(issueNum) {}


// TODO: Implement printDetails()
// Hint: Mimic the output style of the Book class
void Magazine::printDetails() {
    cout << "Type: MAGAZINE" << endl;
    cout << "Magazine TItle: " << title << endl;
    cout << "Price: $" << price << endl;
    cout << "Month: " << month << endl;
    cout << "Issue Number: " << issueNum << endl;
    std::cout << "-----------------------------" << std::endl;
}