/*
 *Created by: Toshiki Yonezawa
 *Created on: 03/07/2017
 *This program is bale to hold information about 5 books.
 *User must input a tttle, an author, and a copyright year about each books.
 *Output shows user's inputs about each books.
 */

#include <iostream>
#include <string>
using namespace std;

class bookInfo
{
private: // All class variables are in private space.(Private data members)
   string tittle;
   string author;
    int year;
public: // Public memebr functions
    void setTittle(string bookTittle);
    void setAuthor(string bookAuthor);
    void setYear(int bookYear);
    string getTittle();
    string getAuthor();
    int getYear();
    void giveInfo();
};

// setTittle is a bookInfo member function.
void bookInfo::setTittle(string bookTittle)
{
    tittle = bookTittle; // tittle refers to data memebr.
}

// setAuthor is a bookInfo member function.
void bookInfo::setAuthor(string bookAuthor)
{
    author = bookAuthor; // author refers to data member.
}

// setYear is a bookInfo function.
void bookInfo::setYear(int bookYear)
{
    year = bookYear; // year refers to data member.
}

string bookInfo::getTittle() {
    return tittle;
}

string bookInfo::getAuthor() {
    return author;
}

int bookInfo::getYear() {
    return year;
}

// 
void bookInfo::giveInfo()
{
    cout << endl;
    cout << "Tittle is " << tittle << "." << endl;
    cout << "Author is " << author << "." << endl;
    cout << "Copyright year is " << year << "." << endl;
}

int main() 
{
    
    string tittle1;
    string author1;
    int year1;
    string tittle2;
    string author2;
    int year2;
    string tittle3;
    string author3;
    int year3;
    string tittle4;
    string author4;
    int year4;
    string tittle5;
    string author5;
    int year5;
    
    // It shows user inputs data about each books.
    cout << endl;
    cout << "This program is able to hold data about 5 books." << endl;
    cout << endl;
    cout << "Please type a tittle, an author, and a copyright year about each books." << endl;
    cout << "Ex) Tittle: Harry_Potter_and_the_Philosopher's_Stone" << endl;
    cout << "    Author: J.K._Rowling" << endl;
    cout << "    Copyright year: 1997" << endl;
    cout << endl;
    cout << "Please type information about 1st book" << endl;
    cout << "Tittle: ";
    cin >> tittle1;
    cout << "Author: ";
    cin >> author1;
    cout << "Copyright year: ";
    cin >> year1;
    cout << endl;
    cout << "Please type information about 2nd book" << endl;
    cout << "Tittle: ";
    cin >> tittle2;
    cout << "Author: ";
    cin >> author2;
    cout << "Copyright year: ";
    cin >> year2;
    cout << endl;
    cout << "Please type information about 3rd book" << endl;
    cout << "Tittle: ";
    cin >> tittle3;
    cout << "Author: ";
    cin >> author3;
    cout << "Copyright year: ";
    cin >> year3;
    cout << endl;
    cout << "Please type information about 4th book" << endl;
    cout << "Tittle: ";
    cin >> tittle4;
    cout << "Author: ";
    cin >> author4;
    cout << "Copyright year: ";
    cin >> year4;
    cout << endl;
    cout << "Please type information about 5th book" << endl;
    cout << "Tittle: ";
    cin >> tittle5;
    cout << "Author: ";
    cin >> author5;
    cout << "Copyright year: ";
    cin >> year5;
    cout << endl;
    
    // It shows to input user's inputs to each functions.
    bookInfo book1;
    
    book1.setTittle(tittle1);
    book1.setAuthor(author1);
    book1.setYear(year1);
    book1.getTittle();
    book1.getAuthor();
    book1.getYear();
    book1.giveInfo();
    
    bookInfo book2;
    
    book2.setTittle(tittle2);
    book2.setAuthor(author2);
    book2.setYear(year2);
    book2.getTittle();
    book2.getAuthor();
    book2.getYear();
    book2.giveInfo();
    
    bookInfo book3;
    
    book3.setTittle(tittle3);
    book3.setAuthor(author3);
    book3.setYear(year3);
    book3.getTittle();
    book3.getAuthor();
    book3.getYear();
    book3.giveInfo();
    
    bookInfo book4;
    
    book4.setTittle(tittle4);
    book4.setAuthor(author4);
    book4.setYear(year4);
    book4.getTittle();
    book4.getAuthor();
    book4.getYear();
    book4.giveInfo();
    
    bookInfo book5;
    
    book5.setTittle(tittle5);
    book5.setAuthor(author5);
    book5.setYear(year5);
    book5.getTittle();
    book5.getAuthor();
    book5.getYear();
    book5.giveInfo();
    
    return 0;
    
}

/*
 *Output looks like that.
 *
 *Tittle is 1.
 *Author is 1.
 *Copyright year is 1.
 *
 *Tittle is 2.
 *Author is 2.
 *Copyright year is 2.
 *
 *Tittle is 3.
 *Author is 3.
 *Copyright year is 3.
 *
 *Tittle is 4.
 *Author is 4.
 *Copyright year is 4.
 *
 *Tittle is 5.
 *Author is 5.
 *Copyright year is 5.
 */