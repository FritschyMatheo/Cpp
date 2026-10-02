#include <iostream> // Liste d'autres fonctions/méthodes : https://cplusplus.com/reference/string/string/

int main() {

    std::string name;

    std::cout << "Entre ton nom : ";
    std::getline(std::cin, name);

    if(name.length() > 12){ // Longeur d'un string
        std::cout << "Ton nom est long !";
    }
    else if(name.empty()){  // Boolean si c'est vide ou pas
        std::cout << "Tu n'as rien entre";
    }
    else {
        std::cout << "Ton prenom est normal "<<name;
    }
    name.append("@gmail.com");  // Ajoute au string

    std::cout << std::endl << "Mail : " << name;
    std::cout << std::endl << "3eme caractere : " << name.at(2); // Ca commence à 0
    //name.clear();   // Vide la variable string
    //std::cout << std::endl << "Contenu : " << name;

    name.insert(name.length()-10, ".coco");
    std::cout << std::endl << "Mail : " << name;

    std::cout << std::endl << "Emplacement du premier caractere \"x\" : " << name.find('x');

    name.erase(name.find('x')+1, name.length()); // x.erase(debut, fin)

    std::cout << std::endl << "Apres effacement à partir de x : " << name;


    return 0;
}