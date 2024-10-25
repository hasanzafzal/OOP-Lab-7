#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    string publisher;
    int publicationYear;
    double price;
    int numberOfPages;
    static int numberOfPublications;

public:
    Book(string t, string a, string p, int py, double pr, int np) {
        title = t;
        author = a;
        publisher = p;
        publicationYear = py;
        price = pr;
        numberOfPages = np;
        numberOfPublications++;
    }

    void printDetails() {
        cout << "Title: " << title << "\n"
            << "Author: " << author << "\n"
            << "Publisher: " << publisher << "\n"
            << "Publication Year: " << publicationYear << "\n"
            << "Price: $" << price << "\n"
            << "Number of Pages: " << numberOfPages << "\n";
    }

    double pricePerPage() {
        return price / numberOfPages;
    }

    static int getNumberOfPublications() {
        return numberOfPublications;
    }
};

int Book::numberOfPublications = 0;

int main() {
    string title, author, publisher;
    int publicationYear, numberOfPages;
    double price;

    cout << "Enter book title: ";
    getline(cin, title);
    cout << "Enter book author: ";
    getline(cin, author);
    cout << "Enter book publisher: ";
    getline(cin, publisher);
    cout << "Enter publication year: ";
    cin >> publicationYear;
    cout << "Enter price: ";
    cin >> price;
    cout << "Enter number of pages: ";
    cin >> numberOfPages;

    Book book(title, author, publisher, publicationYear, price, numberOfPages);

    book.printDetails();

    cout << "Price per page: $" << book.pricePerPage() << "\n";

    cout << "Number of publications: " << Book::getNumberOfPublications() << "\n";

    return 0;
}