/* 

            2 - Pointeurs et tableaux statiques

*/

#include <iostream>
#include <string>
#include "main.h"

using namespace std;

int main() {
/*     const int t = 40;
    char t_chaine[t];
    t_personne personne;

    personne = saisirPersonne();
    afficherPersonne(personne); */

    int nombreCases = 6;    // entier: nombreCases  
    int t_chaine[nombreCases]; // tableau de nombreCases entiers: t_tab

    saisirGrille(t_chaine, nombreCases);
    cout << endl;
    afficherGrille(t_chaine, nombreCases);
    cout << endl;
    estPresent(t_chaine, nombreCases, 10);

    return 0;
}

t_personne saisirPersonne() {
    t_personne nouvellePersonne;

    cout << "Donner le nom: " << endl;
    cin >> nouvellePersonne.nom;
    cout << "Donner le prénom: " << endl;
    cin >> nouvellePersonne.prenom;
    cout << "" << endl;

    cout << "Donner le jour: " << endl;
    cin >> nouvellePersonne.dateNaissance.jour;
    cout << "Donner le mois: " << endl;
    cin >> nouvellePersonne.dateNaissance.mois;
    cout << "Donner l'année: " << endl;
    cin >> nouvellePersonne.dateNaissance.annee;
    cout << "" << endl;

    cout << "Donner le numéro de rue: "<< endl;
    cin >> nouvellePersonne.adresse[0];
    cout << "Donner le nom de la rue: "<< endl;
    cin >> nouvellePersonne.adresse[1];
    cout << "Donner le code postal: "<< endl;
    cin >> nouvellePersonne.adresse[2];
    cout << "" << endl;

    return nouvellePersonne;
}

void afficherPersonne(t_personne p) {
    cout << "Nom: " << p.prenom << " " << p.nom << endl;
    cout << "Date de naissance: " << p.dateNaissance.jour << "/" << p.dateNaissance.mois << "/" << p.dateNaissance.annee << endl;
    cout << "Adresse: "; 
    for (string x : p.adresse) {
        cout << x << " ";
    }
    cout << endl;
}

void saisirGrille(int tableau[], int taille) {
    int valeur = 0;

    for(int i = 0; i < taille; ++i) {
        do {
            cout << "Saisir la " << i + 1 << "e valeur: ";
            cin >> valeur;    
        } while(valeur < 1 || valeur > 49 );
        tableau[i] = valeur;
    }
}

void afficherGrille(int tableau[], int taille) {
    for(int i = 0; i < taille; ++i) {
        cout << "tableau[" << i << "] = " << tableau[i] << endl;     
    }
}

bool estPresent(int tableau[], int taille, int valeur) {
    for(int i = 0; i < taille; ++i) {
        if(tableau[i] == valeur) {
            return true;
        } 
    }
    return false;
}

// To-Do: Eviter que la fonction affiche à chaque fois que la valeur est présente
void estPresentBis(int tableau[], int taille, int valeur) {
    for(int i = 0; i < taille; ++i) {
        if(tableau[i] == valeur) {
            cout << "La valeur est présente !" << endl;
        } 
    }
    cout << "La valeur n'est pas présente !" << endl;
}