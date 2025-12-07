#include "Magazine.h"
#include <iostream>


// TODO: Implement the Constructor
// Hint: Remember to call the PrintedMedia constructor using : PrintedMedia(t, p)
Magazine::Magazine(std::string title, double price, std::string month, int issueNum) : PrintedMedia(title, price), month(month), issueNum(issueNum) {}


// TODO: Implement printDetails()
// Hint: Mimic the output style of the Book class
void Magazine::printDetails() {
    std::cout << "Type: MAGAZINE" << std::endl;
    std::cout << "Magazine TItle: " << title << std::endl;
    std::cout << "Price: $" << price << std::endl;
    std::cout << "Month: " << month << std::endl;
    std::cout << "Issue Number: " << issueNum << std::endl;
    std::cout << "-----------------------------" << std::endl; //I took some inspiration from the way you designed the separators.
}
