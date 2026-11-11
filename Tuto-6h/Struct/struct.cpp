#include <iostream>

struct student{
    std::string nom;
    int numEtudiant;
    int age;
    std::string filiere;
    bool international = false; // Valeur par défaut
};

void printEtudiant(student &etudiant);

int main(){
    
    student student1;
    student1.nom = "Omar";
    student1.numEtudiant = 246810;
    student1.age = 20;
    student1.filiere = "RT";

    std::cout << "Etudiant 1, sans fonction :\n";
    std::cout << student1.nom << '\n';
    std::cout << student1.age << '\n';
    std::cout << student1.filiere << '\n';
    std::cout << student1.numEtudiant << '\n';
    std::cout << student1.international << '\n';    // 0 -> false (valeure par défaut, non précisée à la création)

    student student2;
    student2.nom = "Alan";
    student2.numEtudiant = 246812;
    student2.age = 20;
    student2.filiere = "RT";

    std::cout << "\nEtudiant 2, avec fonction :\n";
    printEtudiant(student2);

    student student3;
    student3.nom = "Iheb";
    student3.numEtudiant = 256810;
    student3.age = 20;
    student3.filiere = "RT";
    student3.international = true;

    std::cout << "\nEtudiant 3, avec fonction :\n";
    printEtudiant(student3);

    return 0;
}

void printEtudiant(student &etudiant){
    std::cout << etudiant.nom << " a " << etudiant.age << " ans. Il est en filiere " << etudiant.filiere << ".\n";
    std::cout << "Son numero d'etudiant est : " << etudiant.numEtudiant << ".\n";
    if(etudiant.international){
        std::cout << "Il est etudiant internationnal.\n";
    } else {
        std::cout << "Il n'est pas etudiant internationnal.\n";
    }
}