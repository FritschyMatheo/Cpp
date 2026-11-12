#include <iostream>

class MauvaisGateau{
    public:
        int sucre = 10;
};

class Gateau{
    private:
        int sucre;

    public:

    // On peut appeler le setter dans le constructeur :
    Gateau(int _sucre){
        setSucre(_sucre);   // Mais dcp c'est pas propre comme le prof demande
    }
    
    // Getter
    int getSucre(){
        return sucre;
    }

    // Le setter permet de mettre des verification en plus de rendre visible le fait que la valeur soit privee
    void setSucre(int _sucre){
        if(_sucre < 100){
            sucre = _sucre;
            std::cout << "Quantite de sucre valide : " << sucre << "g\n";
        }
        else{
            std::cout << "Quantite de sucre trop elevee, valeur inchangee : " << sucre << "g\n";
        }
    }
};

int main(){

    MauvaisGateau schokoBonobos;
    // Le problème du publique c'est qu'on peut faire ca :
    schokoBonobos.sucre = 10000000;
    std::cout << schokoBonobos.sucre << "g\n";

    Gateau cuorMela(10);
    //cuorMela.sucre = 10000000;    // En private, cela devient impossible car non accessible
    // On ne peut pas non plus lire sans getter :
    //std::cout << cuorMela.sucre << "g\n";
    std::cout << cuorMela.getSucre() << "g\n";

    cuorMela.setSucre(130);
    std::cout << cuorMela.getSucre() << "g\n";
    cuorMela.setSucre(25);
    std::cout << cuorMela.getSucre() << "g\n";

    return 0;
}