#include "Library.h"
#include <iostream>

Library::Library() {}

Library::~Library() {
    for (int i = 0; i < books.size(); i++) {
        delete books.get(i);
    }
    for (int i = 0; i < clients.size(); i++) {
        delete clients.get(i);
    }
}

void Library::addBook(std::string t, std::string a, int y) {
    Book* k = new Book(t, a, y);   
    books.add(k);
}

void Library::addClient(std::string i, std::string n, int id) {
    Client* c = new Client(i, n, id); 
    clients.add(c);
}

void Library::borrowBook(int index) {
    if (books.get(index)->isAvailable()) {
        books.get(index)->borrow();
    }
}

void Library::backBook(int index) {
    books.get(index)->back();
}

void Library::showBook() const {
    for (int i = 0; i < books.size(); i++) {
        std::cout << i << ": ";
        books.get(i)->show();
    }
}

