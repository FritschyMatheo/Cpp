// Jeu de question reponse (quiz) interactif
// Les données sont stockés dans trois tableau : un pour les questions, un pour les options de réponse (en 2D), et un pour les lettres des réponses.

#include <iostream>
#include <string>

using namespace std;

int main() {

    string questions[] = {"1. 2+2", "2. 2*6", "3. 6*7", "4. 100/2", "5. 25+8"};
    string options[5][3] = {{"A. 5", "B. 4", "C. 6"},
                            {"A. 8", "B. 9", "C. 12"},
                            {"A. 35", "B. 42", "C. 28"},
                            {"A. 50", "B. 200", "C. 25"},
                            {"A. 32", "B. 34", "C. 33"}};
    char reponses[] = {'B', 'C', 'B', 'A', 'C'};
    char guess;
    int score = 0;
    int tailleQuestions = static_cast<int>(sizeof(questions)/sizeof(questions[0]));
    bool saisieOk;

    cout << "\n============| Quiz |============\n";

    for(int i = 0; i < tailleQuestions; i++) {
        cout << endl << 'Q' << questions[i] << endl;
        for(int j = 0; j < static_cast<int>(sizeof(options[0])/sizeof(options[0][0])); j++) {
            cout << options[i][j] << endl;
        }
        
        do {
            saisieOk = false;
            cout << "(A/B/C) : ";
            cin >> guess;
            if((guess != 'A') & (guess != 'B') & (guess != 'C') & (guess != 'a') & (guess != 'b') & (guess != 'c')) {
                cout << "Mauvaise saisie (attendu : A/B/C)\n";
                saisieOk = false;
            } else {
                saisieOk = true;
            }
        } while(saisieOk != true);

        if(toupper(guess) == reponses[i]) {
            score++;
            cout << "Bonne reponse !";
        } else {
            cout << "Mauvaise reponse !";
        }
        cout << " (" << score << "/" << tailleQuestions << ")" << endl;
    }

    cout << "\n============| Fin du quiz |============\n";
    cout << "Score final : " << score << "/" << tailleQuestions << " soit " << (static_cast<double>(score)/tailleQuestions)*100 << "% !";

    return 0;
}