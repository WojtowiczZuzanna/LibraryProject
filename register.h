#ifndef REGISTER_H
#define REGISTER_H

#include <vector>
#include <iostream>

template <typename T>
class Register {
private:
    std::vector<T> elements;

public:
    void add(T element) {
        elements.push_back(element);
    }

    T get(int index) const {
        return elements.at(index);
    }

    int size() const {
        return elements.size();
    }

    void show() const {
        for (size_t i = 0; i < elements.size(); i++) {
            elements[i]->show();
        }
    }
};

#endif
