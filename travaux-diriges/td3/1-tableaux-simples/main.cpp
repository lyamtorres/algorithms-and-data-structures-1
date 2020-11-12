            /*
                3 - Tableaux simples
            */

#include <iostream>

using namespace std;

struct t_tabR {
    int capacite;
    float *cases;
};

void permutation(float tab[], int taille);

void afficher(float tab[], int taille);

void modifier(t_tabR tabReels);

// Préconditions: nouvTab.capacite > 0
void nouveauTableau();

int main() {

t_tabR desReels;
    int pos;
    float *ptab;

    nouveauTableau();

/*
    desReels.cases = new float[5];
    desReels.capacite = 5;
    desReels.cases[4] = 3.14;
    ptab = desReels.cases;

    for(pos = 1; pos < 3; ++pos ) {
        ptab[pos] = ptab[5 - pos] + 1;
        ptab[4 - pos] = ptab[pos] * 2;
    }
    for(pos = 0; pos < desReels.capacite / 2; ++pos) {
        cout << desReels.cases[4 - pos] << endl;
    }

    for(pos = 0; pos < 5; ++pos) {
        cout << "ptab[" << pos << "] = " << ptab[pos] << endl;
    }
    cout << "" << endl;
    modifier(desReels);
    cout << "" << endl;
    
    for(pos = 0; pos < 5; ++pos) {
        cout << "ptab[" << pos << "] = " << ptab[pos] << endl;
    }

    delete[] desReels.cases;
*/
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
    int indi;

    for(indi = 0; indi < 3; ++indi) {
        cout << tab[indi] << ", " << endl;
    }
}

void modifier(t_tabR tabReels) {
    float valeur = 0;
    int indice = 0;

    cout << "Donner une nouvelle valeur: " << endl;
    cin >> valeur;
    do {
        cout << "Indiquer le numero de case pour rentrer la valeur: " << endl;
        cin >> indice;
    } while (indice >= tabReels.capacite);
    tabReels.cases[indice] = valeur;
}

void nouveauTableau() {
    t_tabR nouvTab;

    cout << "|| NOUVEAU TABLEAU ||" << endl;
    cout << "Ajouter le nombre de cases: " << endl;
    cin >> nouvTab.capacite;
    nouvTab.cases = new float[nouvTab.capacite];
    cout << "Donner la valeur des cases: " << endl;

    for (int i = 0; i < nouvTab.capacite; ++i) {
        cout << "nouvTab[" << i << "] : ";
        cin >> nouvTab.cases[i];
        cout << "" << endl;
    }

    for (int i = 0; i < nouvTab.capacite; ++i) {
        cout << "nouvTab[" << i << "] : " << nouvTab.cases[i] << endl;
    }

    delete[] nouvTab.cases;
}

/*
    const int tailleTableau(3);
    int indi;
    float t3r[tailleTableau];

    t3r[1] = 9.9;
    t3r[2] = t3r[1] + 1.1;
    indi = 1;
    t3r[indi] = 7.5;
    t3r[indi - 1] = 5.6;

    for(indi = 0; indi < 3; ++indi) {
        t3r[indi] = t3r[indi] * 2;
    }
    afficher(t3r, tailleTableau);
    //permutation(t3r, tailleTableau);
     for(indi = 0; indi < 3; ++indi) {
        cout << "t3r[" << indi << "] = " << t3r[indi] << endl;
    }
*/
