#include <iostream>
#include <ctime>
using namespace std;

char choixCamp(char &pc);
void drawGrid(char *boardValues);
void move(char *boardValues, char player);
void movePC(char *boardValues, char pc);
bool checkWinner(char *boardValues, char player, char computer);
bool checkTie(char *boardValues);

int main() {
    char boardValues[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char boardValuesExemple[9] = {'0', '1', '2', '3', '4', '5', '6', '7', '8'};
    char player;
    char pc;
    bool jeuEnCours = true;
    srand(time(NULL));

    cout << "\n====== Morpion======\n";

    player = choixCamp(pc);

    cout << "Tu as choisi : " << player << endl;
    cout << "Le PC est donc : " << pc << endl;
    cout << "Numerotation des cases :\n";
    drawGrid(boardValuesExemple);  // Pas besoin de créer de pointeur car c'est un tableau

    cout << "Debut de la partie :\n\n";
    drawGrid(boardValues);

    while (jeuEnCours){
        move(boardValues, player);
        if(checkWinner(boardValues, player, pc)) {
            jeuEnCours = false;
            break;
        }
        else if(checkTie(boardValues)) {
            cout << "Le plateau est plein...\nLa partie se termine avec une egalite.\n";
            jeuEnCours = false;
            break;
        }
        movePC(boardValues, pc);
        if(checkWinner(boardValues, player, pc)) {
            jeuEnCours = false;
            break;
        }
        else if(checkTie(boardValues)) {
            cout << "Le plateau est plein...\nLa partie se termine avec une egalite.\n";
            jeuEnCours = false;
            break;
        }
    }
    cout << "\nFin de la partie, merci d'avoir joue !\n";
    return 0;
}

char choixCamp(char &pc){
    char camp;
    do {
        cout << "\nChoisis ton cote :     X / O\n";
        cin >> camp;
    } while ((camp != 'x') & (camp != 'X') & (camp != 'o') & (camp != 'O'));

    if(camp == 'x') {
        camp = 'X';
    }
    else if(camp == 'o') {
        camp = 'O';
    }

    if(camp == 'X') {
        pc = 'O';
    }
    else if(camp == 'O') {
        pc = 'X';
    }
    else {
        cout << "\nErreur innatendue\n";
    }

    return camp;
}

void drawGrid(char *boardValues) {
    cout << "  " << boardValues[0] << "  |  " << boardValues[1] << "  |  " << boardValues[2] << "  \n";
    cout << "  " << boardValues[3] << "  |  " << boardValues[4] << "  |  " << boardValues[5] << "  \n";
    cout << "  " << boardValues[6] << "  |  " << boardValues[7] << "  |  " << boardValues[8] << "  \n";
}

void move(char *boardValues, char player){
    int choix;
    bool choixValide = false;

    cout << "A toi de jouer :\n";
    do {
        do {
            cout << "Choix de case [0-8] : ";
            cin >> choix;
        } while(!((choix == 0) | (choix == 1) | (choix == 2) | (choix == 3) | (choix == 4) | (choix == 5) | (choix == 6) | (choix == 7) | (choix == 8)));
        if (boardValues[choix] != ' ') {
            cout << "Cette case est deja occupee\n";
        }
    } while (boardValues[choix] != ' ');

    boardValues[choix] = player;

    drawGrid(boardValues);
}

void movePC(char *boardValues, char pc) {
    int choix;
    bool choixValide = false;
    cout << "\nTour du PC :\n";
    do {
        do {
            choix = (rand() % 9);
        } while(!((choix == 0) | (choix == 1) | (choix == 2) | (choix == 3) | (choix == 4) | (choix == 5) | (choix == 6) | (choix == 7) | (choix == 8)));
    }while (boardValues[choix] != ' ');
    boardValues[choix] = pc;
    drawGrid(boardValues);
}

bool checkWinner(char *boardValues, char player, char computer) {
    char winner;
    bool gagnantTrouve = false;

    while(!gagnantTrouve) {
        // Check lignes
        for(int i = 0; i <= 6; i+=3) {
            if((boardValues[i] == boardValues[i+1] && boardValues[i+1] == boardValues[i+2]) && boardValues[i] != ' ') {
                winner = boardValues[i];
                gagnantTrouve = true;
                break;
            }
        }
        // Check colonnes
        for(int i = 0; i <= 2; i++) {
            if((boardValues[i] == boardValues[i+3] && boardValues[i+3] == boardValues[i+6]) && boardValues[i] != ' ') {
                winner = boardValues[i];
                gagnantTrouve = true;
                break;
            }
        }
        // Check diagonales
        if(boardValues[4] != ' ' && ((boardValues[0] == boardValues[4] && boardValues[4] == boardValues[8])\
                                | (boardValues[2] == boardValues[4] && boardValues[4] == boardValues[6]))) {
            winner = boardValues[4];
            gagnantTrouve = true;
        }
        break;
    }
    if(gagnantTrouve){
        cout << winner << " gagne la partie !!\n";
    }

    return gagnantTrouve;
}

bool checkTie(char *boardValues) {

    for(int i = 0; i < 9; i++) {
        if(boardValues[i] == ' '){
            return false;
        }
    }
    cout << "\nEGALITE\n";

    return true;
}