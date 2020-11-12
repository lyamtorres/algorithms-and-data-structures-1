/*
            5 - Coûts
*/

#include <iostream>

using namespace std;

int sommeCar(int n);
int nbPairs(int p);

int main() {
    /*

    int nombre = 0;

    nombre = sommeCar(3);
    cout << nombre << endl;
    return 0;

    */

    int nombreDePairs = 0;

    nombreDePairs = nbPairs(4);
    cout << "Le nombre de paires est de : " << nombreDePairs << endl;
}

int sommeCar(int n) {
    int val = 0;

    for(int cpt = 1; cpt <= n; cpt++) {
        val = val + (cpt * cpt);
    }
    return val;
}

int nbPairs(int p) {
    int nombre = 0;
    int compteur = 0;

    for(int i = 1; i < p; i++) {
        nombre = sommeCar(i);
        if (nombre % 2 == 0) {
            compteur += 1;
        }
    }
    return compteur;
}