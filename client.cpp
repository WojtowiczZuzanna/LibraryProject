#include "Client.h"
#include <iostream>

Client::Client(std::string i, std::string n, int id)
    : name(i), surname(n), id(id) {}

void Client::show() const {
    std::cout << name << " " << surname
              << " (Library ID: " << id << ")"
              << std::endl;
}
