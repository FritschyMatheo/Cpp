#include <iostream>
#include <vector>
#include <map>

using namespace std;

void countFrequencyBruteForce(const vector<int>& numbers) {
    for(int i = 0; i < numbers.size(); i++) {
        bool dejaFait = false;
        for( int j=0; j<i; j++) {
            if (numbers[j] == numbers[i]) {
                dejaFait = true;
                break;
            }
        }
        if (dejaFait) continue;

        int count = 0;
        
        for(int j = 0; j < numbers.size(); j++) {
            if (numbers[j] == numbers[i]) {
                count++;
            }
        } 
        cout << endl << numbers[i] << " apparait " << count << " fois.";
    }
}

map<int, int> countFrequencyOptimal( const vector<int>& numbers) {
    map<int, int> frequency;
    for (int n : numbers) {
        frequency[n]++;
    }
    return frequency;
}

int main() {
    vector<int> numbers = {1, 2, 3, 2, 4, 1, 5, 5, 6};

    // Test countFrequencyBruteForce
    cout << "Frequency (BruteForce):" << endl;
    countFrequencyBruteForce(numbers);

    // Test countFrequencyOptimal
    cout << "\nFrequency (Optimal):" << endl;
    map<int, int> frequencyMapOptimal = countFrequencyOptimal(numbers);
    for (const auto& entry : frequencyMapOptimal) {
        cout << entry.first << ": " << entry.second << " times" << endl;
    }

    // On voit que la méthode bruteforce a un cout plus élevé car elle a deux boucles imbriquées (O(n^2)) alors qu'avec la méthode optimal, c'est O(n log k) grâce aux map.

    return 0;
}