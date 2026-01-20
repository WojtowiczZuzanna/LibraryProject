#include <iostream>
#include <limits>
#include "Library.h"

int main() {
    Library library;

    library.addBook("Pan Tadeusz", "Adam Mickiewicz", 1834);
    library.addBook("Lalka", "Boleslaw Prus", 1890);

    library.addClient("Jan", "Kowalski", 1);

    std::cout << "List of books:" << std::endl;
    library.showBook();

    int index;
    std::cout << "\nEnter index of the book to borrow: ";
    std::cin >> index;

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    library.borrowBook(index);

    std::cout << "\nAfter borrowing:" << std::endl;
    library.showBook();

    std::cout << "\nClick Enter to finish...";
    std::cin.get();

    return 0;
}
