/* 

            1.b - Pointeurs

*/

#include <iostream>
#include <string>
#include "main.h"

using namespace std;


int main() {
    const int t = 40;
    char t_chaine[t];
    t_personne personne;

    personne = saisirPersonne();
    afficherPersonne(personne);

    return 0;
}

t_personne saisirPersonne() {
    t_personne nouvellePersonne;

    cout << "|| NOM ET PRENOM DE LA PERSONNE ||" << endl;
    cout << "Donner le nom: " << endl;
    cin >> nouvellePersonne.nom;
    cout << "Donner le prénom: " << endl;
    cin >> nouvellePersonne.prenom;
    cout << "" << endl;

    cout << "|| DATE DE NAISSANCE DE LA PERSONNE ||" << endl;
    cout << "Donner le jour: " << endl;
    cin >> nouvellePersonne.dateNaissance.jour;
    cout << "Donner le mois: " << endl;
    cin >> nouvellePersonne.dateNaissance.mois;
    cout << "Donner l'année: " << endl;
    cin >> nouvellePersonne.dateNaissance.annee;
    cout << "" << endl;

    cout << "|| ADRESSE DE LA PERSONNE ||" << endl;
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