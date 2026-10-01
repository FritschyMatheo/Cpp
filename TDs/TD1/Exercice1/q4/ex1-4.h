// Exercice 1 question 4

#ifndef EX1_4_H
#define EX1_4_H

#include <iostream>

class My_Class {

    private:
        std::string message;

    public:
        My_Class();
        My_Class(std::string message);

        void print_my_element();
};

#endif