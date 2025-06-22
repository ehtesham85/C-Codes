#include <iostream>
using namespace std;

class Book {
public:
    string title;
    string author;
    string isbn;
    bool isAvailable;

    void add(string t, string a, string i) {
        title = t;
        author = a;
        isbn = i;
        isAvailable = true;
    }

    void show() {
        cout << "Title: " << title
             << ", Author: " << author
             << ", ISBN: " << isbn
             << ", " << (isAvailable ? "Available" : "Borrowed") << endl;
    }
};

class Library {
public:
    Book books[100]; // fixed size
    int count = 0;

    void addBook(string t, string a, string i) {
        books[count].add(t, a, i);
        count++;
        cout << "Book added successfully!\n";
    }

    void borrowBook(string i) {
        for (int x = 0; x < count; x++) {
            if (books[x].isbn == i) {
                if (books[x].isAvailable) {
                    books[x].isAvailable = false;
                    cout << "You borrowed: " << books[x].title << endl;
                } else {
                    cout << "This book is already borrowed.\n";
                }
                return;
            }
        }
        cout << "Book not found.\n";
    }

    void returnBook(string i) {
        for (int x = 0; x < count; x++) {
            if (books[x].isbn == i) {
                if (!books[x].isAvailable) {
                    books[x].isAvailable = true;
                    cout << "Book returned successfully.\n";
                } else {
                    cout << "This book was not borrowed.\n";
                }
                return;
            }
        }
        cout << "Book not found.\n";
    }

    void showAllBooks() {
        if (count == 0) {
            cout << "Library is empty.\n";
            return;
        }
        for (int x = 0; x < count; x++) {
            books[x].show();
        }
    }
};

// Main function
int main() {
    Library lib;

    lib.addBook("C++ Made Easy", "Ehtesham", "205");
    lib.addBook("OOP Basics", "Jutt", "302");

    lib.showAllBooks();

    lib.borrowBook("205");
    lib.returnBook("205");

    lib.showAllBooks();

    return 0;
}
