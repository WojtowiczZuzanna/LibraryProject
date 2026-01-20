#include "book.h"
#include <iostream>

Book::Book(std::string t, std::string a, int y)
    : title(t), author(a), year(y), borrowed(false) {}

void Book::borrow() {
    borrowed = true;
}

void Book::back() {
    borrowed = false;
}

bool Book::isAvailable() const {
    return !borrowed;
}

void Book::show() const {
    std::cout << title << " | " << author << " | "
              << year << " | "
              << (borrowed ? "borrowed" : "available")
              << std::endl;
}
