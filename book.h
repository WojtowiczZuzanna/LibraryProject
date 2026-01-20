#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
private:
    std::string title;
    std::string author;
    int year;
    bool borrowed;

public:
    Book(std::string t, std::string a, int y);

    void borrow();
    void back();
    bool isAvailable() const;

    void show() const;
};

#endif
