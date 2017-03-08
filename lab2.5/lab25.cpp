#include <iostream>
#include <string>
using namespace std;


class BookInfo {
    public:
       string SetTittle(string tittle);
       string SetAuthor(string author);
       int SetCopyrightYear(int copyrightYear);
};

string BookInfo::SetTittle(char tittle) {
    return;
}

string BookInfo::SetAuthor(char author) {
    return;
}

int SetCopyrightYear(int copyrightYear) {
    return;
}

int main() {
    
    BookInfo book1;
    
    string tittle1;
    string author1;
    int copyrightYear1;
    
    cout << endl;
    cout << "Toshiki: Wlcome to Toshiki's library!" << endl;
    cout << endl;
    cout << "Toshiki: I can remeber infomation about 5 books each time." << endl;
    cout << endl;
    cout << "Toshiki: Please type a tittle, an author, and a copyright year about the five books." << endl;
    cout << endl;
    
    book1.SetTittle("1");
    book1.SetAuthor("1");
    book1.SetCopyrightYear("1");
    
    cout << endl;
    cout << "Book is " << book1.SetTittle(tittle1) << "." << endl;
    cout << "Author is " << book1.SetAuthor(author1) << "." << endl;
    cout << "Copyright year is " << book1.SetCopyrightYear(copyrightYear1) << "." << endl;
    cout << endl;
    
    return 0;
    
}