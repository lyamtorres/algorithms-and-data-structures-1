/*
            1 - Tableaux simples
*/

#include <iostream>
#include "main.h"

using namespace std;

int main() {
    // 1.b

/*     // Algorithme desReels - Première partie
    int indi = 0;
    int nbReels = 3;
    float t3r[nbReels]; 

    t3r[1] = 9.9;
    t3r[2] = t3r[1] + 1.1;
    indi = 1;
    t3r[indi] = 7.5;
    t3r[indi - 1] = 5.6;
    for(indi = 0; indi < nbReels; indi++) {
        t3r[indi] = t3r[indi] * 2;
    }
    for(indi = 0; indi < nbReels; indi++) {
        cout << t3r[indi] << endl;
    }

    // Algorithme desReels - Deuxième partie
    t_tabR desReels;
    int pos = 0;
    float *ptab;

    desReels.cases = new float[5];
    desReels.capa = 5;
    desReels.cases[4] = 3.14;
    ptab = desReels.cases;
    for(pos = 1; pos < 3; pos++) {
        ptab[pos] = ptab[5 - pos] + 1;
        ptab[4 - pos] = ptab[pos] * 2;
    }
    for(pos = 0; pos < desReels.capa / 2; pos++) {
        cout << "desReels.cases[" << pos << "] = " << desReels.cases[4 - pos] << endl;
    }
    delete[] desReels.cases;
    desReels.cases = nullptr;
    ptab = nullptr; */



/*     // 1.c
    int nbReels = 3;
    float t3r[nbReels] = {4, 8, 12};

    permutation(t3r, nbReels);
    afficher(t3r, nbReels); */



    // 1.d - Test pour la procédure modifierTableau
/*     t_tabR desReels;

    desReels.capa = 3;
    desReels.cases = new float[desReels.capa];
    desReels.cases[0] = 5;
    desReels.cases[1] = 10;
    desReels.cases[2] = 15;

    modifierTableau(desReels);

    for(int i = 0; i < desReels.capa; i++) {
        cout << "desReels.cases[" << i << "] = " << desReels.cases[i]<< endl;
    }
    
    delete[] desReels.cases;
    desReels.cases = nullptr; */



    // 1.d - Test pour la procédure saisirTableau
    t_tabR desReels;
    saisirTableau(desReels);
    cout << endl;

    for(int i = 0; i < desReels.capa; i++) {
        cout << "desReels.cases[" << i << "] = " << desReels.cases[i]<< endl;
    }

    delete[] desReels.cases;
    desReels.cases = nullptr;

    return 0;
}

void permutation(float tab[], int taille) {
    float tmp;

    tmp = tab[0];
    tab[0] = tab[1];
    tab[1] = tab[2];
    tab[2] = tmp;
}

void afficher(float tab[], int taille) {
    int i;

    for(i = 0; i < taille; i++) {
        if(i < taille - 1) {
            cout << tab[i] << ", ";
        } else {
            cout << tab[i] << endl;
        }
    }
}

void modifierTableau(t_tabR &tableauReels) {
    float valeur = 0;
    int indice = 0;

    cout << "Donnez une valeur: " << endl;
    cin >> valeur;
    do {
        cout << "Donnez un indice: " << endl;
        cin >> indice;
    } while (indice < 0 || indice >= tableauReels.capa);
    tableauReels.cases[indice] = valeur;
}

void saisirTableau(t_tabR &nouveauTableau) { // Les tableaux dynamiques doivent-ils être passées en modification ?

    cout << "Donner le nombre de cases : " << endl;
    cin >> nouveauTableau.capa;
    nouveauTableau.cases = new float[nouveauTableau.capa];

    cout << "Donner la valeur de chaque case : " << endl;
    for (int i = 0; i < nouveauTableau.capa; i++) {
        cout << "nouveauTableau[" << i << "] : ";
        cin >> nouveauTableau.cases[i];  
    }
}
