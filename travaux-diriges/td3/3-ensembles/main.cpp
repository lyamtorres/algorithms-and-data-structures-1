/*
            3 - Ensembles
*/

#include <iostream>
#include "main.h"

using namespace std;

int main() {
    int const N(10);
    bool t_part[N];
}

void viderPartie(bool tableau[], int taille) {
    for(int i = 0; i < taille; ++i) {
        tableau[i] = false;
    }
}

void ajouterElement(bool tableau[], int taille, int element) {
    tableau[element] = true;
}

void intersection(bool tab1, int taille, bool tab2) {
    for(int i = 0; i < taille; ++i) {
        tab1[i] = tab1[i] && tab2[i];
    }
}
