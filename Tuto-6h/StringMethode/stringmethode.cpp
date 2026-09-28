#include <iostream>

int main() {

    std::string name;

    std::cout << "Entre ton nom : ";
    std::getline(std::cin, name);

    if(name.length() > 12){
        std::cout << "Ton nom est long !";
    }
    else if(name.empty()){
        std::cout << "Tu n'as rien entre";
    }
    else {
        std::cout << "Ton prenom est normal "<<name;
    }
    name.append("@gmail.com"); // Ajoute 
    std::cout << name;
    std::cout << "Xème caractère : " << name.at(2);
    name.clear();   // Vide la variable string
    std::cout << "Contenu : " << name;


    return 0;
}