#include "BookSet.h"
#include <iostream>
using namespace std;

// TODO: Implement the Constructor
// CRITICAL HINT: You must call the BOOK constructor in your initialization list.
// Syntax: BookSet(...) : Book(t, p, a, i), volume(v) { }
BookSet::BookSet(std::string t, double p, std::string a, std::string i, int v)
    : Book(t, p, a, i), volume(v){}

void BookSet::printDetails() {
    // TODO: Print the details. 
    // You can print "Type: BOOK SET (Vol " << volume << ")"
    // You can manually print the title/author, OR you can call Book::printDetails() inside here.
    cout << "Type: BOOK SET (Vol " << volume << ")" << endl;
    cout << "Title: " << title << "Price: $" << price << endl;
    cout << "Author: " << author << endl << "ISBN: " << isbn << endl;
    cout << "Volume: " << volume << endl;
    std::cout << "-----------------------------" << std::endl;
}