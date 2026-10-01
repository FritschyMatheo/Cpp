// Exercice 1 question 4

#include <iostream>
#include "ex1-4.h"
using namespace std;

My_Class::My_Class(){
    message = "Hello World! (default)";
}
My_Class::My_Class(std::string mess) {
    this->message = mess;
}

void My_Class::print_my_element() {
    cout << endl << message;
}