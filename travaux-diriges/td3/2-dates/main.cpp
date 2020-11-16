/*
            2 - Dates
*/


#include <iostream>
#include "main.h"

using namespace std;



int main() {
    const int nbJours(7);
    const int nbMois(12);
    string tabJours[nbJours] = {"Lundi", "Mardi", "Mercredi", "Jeudi", "Vendredi", "Samedi", "Dimanche"};
    string tabMois[nbMois] = {"Janvier", "Fevrier", "Mars", "Avril", "Mai", "Juin", "Juillet", "Aout", "Septembre", "Octobre", "Novembre", "Decembre"};
    
    Date monAnniversaire;
    saisirDate(monAnniversaire);
    cout << endl;
    afficherDate(monAnniversaire, tabJours, nbJours, tabMois, nbMois);

    return 0;
}

void saisirDate(Date &nouvelleDate) {

    cout << "Indiquer le jour: ";
    cin >> nouvelleDate.jour;
    cout << "Indiquer le mois: ";
    cin >> nouvelleDate.mois;
    cout << "Indiquer l'année: ";
    cin >> nouvelleDate.annee;
}

void afficherDate(Date nouvDate, string tabJours[], int nbJours, string tabMois[], int nbMois) {
    cout << "|| NOUVELLE DATE ||" << endl;
    cout << tabJours[0] << " " << nouvDate.jour << " " << tabMois[nouvDate.mois - 1] << " " << nouvDate.annee << endl;
}