#ifndef LIBRARY_H
#define LIBRARY_H

#include "Book.h"
#include "Client.h"
#include "Register.h"

class Library {
private:
    Register<Book*> books;
    Register<Client*> clients;

public:
    Library();
    ~Library();

    void addBook(std::string t, std::string a, int y);
    void addClient(std::string i, std::string n, int id);

    void borrowBook(int index);
    void backBook(int index);

    void showBook() const;
};

#endif
