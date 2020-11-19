/* 
            4 - Binômes
*/

#include <iostream>
#include <string>
#include "main.h"

using namespace std;

int main() {
    Etudiant etudiant1;
    Etudiant etudiant2;
    
    modifierNom(etudiant1);
    modifierNom(etudiant2);

    formerBinome(etudiant1, etudiant2);
    afficherBinome(etudiant1);
    detruireBinome(etudiant1);

    return 0;
}

void modifierNom(Etudiant &etu) {
    cout << "Saisir un nouveau nom: ";
    cin >> etu.nomPrenom;
}

void formerBinome(Etudiant &etu1, Etudiant &etu2) {
    if(etu1.possedeBinome == false && etu2.possedeBinome == false) {
        etu1.binome = &etu2;
        etu1.possedeBinome = true;
        etu2.binome = &etu1;
        etu2.possedeBinome = true;
    } else {
        cout << "Au moins l'un des étudiants possède déjà un binôme." << endl;
    }
}

void afficherBinome(Etudiant etu) {
    if(etu.possedeBinome == true) {
        cout << etu.nomPrenom << endl;
        cout << etu.binome->nomPrenom << endl;
    } else {
        cout << "Cet étudiant n'a pas de binôme." << endl;
    }
}

void detruireBinome(Etudiant &etu) {
    if(etu.possedeBinome == true) {
        etu.binome = nullptr;
        etu.possedeBinome = false;
    } else {
       cout << "Cet étudiant n'a pas de binôme." << endl; 
    }
}