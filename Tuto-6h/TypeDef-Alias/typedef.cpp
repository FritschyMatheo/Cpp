#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int>> pairlist_t;
//typedef datatype nouveauNom_t
//typedef std::string text_t;

// meilleure méthode : using :

using text_t = std::string;
// using nouveauNom_t datatype

int main() {
    // typedef = reserved keyword used to create additional name for another data type 
    pairlist_t pairlist;
    std::string classique = "Méthode classique";
    text_t avecTypedef = "Méthode typedef";
    
    std::cout << classique << std::endl << avecTypedef;
    return 0;
}