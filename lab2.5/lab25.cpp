#include <iostream>
#include <string>
using namespace std;


class BookInfo {
    public:
       void SetTittle(string tittle);
       void SetAuthor(string author);
       void SetCopyrightYear(int copyrightYear);
};

void BookInfo::SetTittle(char tittle) {
    return;
}

void BookInfo::SetAuthor(char author) {
    return;
}

void SetCopyrightYear(int copyrightYear) {
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
    cout << "Tittle1: ";
    cin >> tittle1;
    cout << endl;
    cout << "Author1: ";
    cin >> author1;
    cout << endl;
    cout << "Copyright Year1: ";
    cin >> copyrightYear1;
    cout << endl;
    
    book1.SetTittle(tittle1);
    book1.SetAuthor(author1);
    book1.SetCopyrightYear(copyrightYear1);
    
    cout << endl;
    cout << "Book is " << book1.SetTittle(tittle1) << "." << endl;
    cout << "Author is " << book1.SetAuthor(author1) << "." << endl;
    cout << "Copyright year is " << book1.SetCopyrightYear(copyrightYear1) << "." << endl;
    cout << endl;
    
    return 0;
    
}