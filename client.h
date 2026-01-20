#ifndef CLIENT_H
#define CLIENT_H

#include <string>

class Client {
private:
    std::string name;
    std::string surname;
    int id;

public:
    Client(std::string i, std::string n, int id);

    void show() const;
};

#endif
