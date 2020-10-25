/*
            4 - Dates
*/

#include <iostream>
#include "main.h"

using namespace std;


int main() {
    Instant instant1, instant2;

    cout << "|| PREMIER INSTANT ||" << endl;
    instant1 = saisirInstant();
    afficher(instant1);
    cout << "" << endl;
    instant1 = avancerUneSecondeBis(instant1);
    afficher(instant1);
    cout << "" << endl;
    cout << "|| DEUXIEME INSTANT ||" << endl;
    instant2 = saisirInstant();
    afficher(instant2);
    cout << "" << endl;
    convertir(instant1, instant2);
    return 0;
}

Instant saisirInstant() {
    Instant t;
  
    do {
        cout << "Saisir une heure entre 0 et 23: " << endl;
        cin >> t.heure;
    } 
    while(t.heure < 0 || t.heure > 23); 
    do {
        cout << "Saisir les minutes entre 0 et 59: " << endl;
        cin >> t.minutes;
    }
    while(t.minutes < 0 || t.minutes > 59); 
    do {
        cout << "Saisir les secondes entre 0 et 59: " << endl;
        cin >> t.secondes;
    }   
    while(t.secondes < 0 || t.secondes > 59);
    return t;
}

void convertir(Instant t1, Instant t2) {
    int temps1 = 0;
    int temps2 = 0;
    int tmp = 0;
    int tempsTotal = 0;
    bool result = false;

    temps1 = t1.heure * 3600 + t1.minutes * 60 + t1.secondes;
    temps2 = t2.heure * 3600 + t2.minutes * 60 + t2.secondes;
    result = comparer(temps1, temps2);
    if (result == false) {
        permuter(temps1, temps2, tmp); 
    } 
    tempsTotal = temps2 - temps1;
    cout << "Total de temps écoulé: " << tempsTotal << "s" << endl;
}

bool comparer(int val1, int val2) {
    if (val1 < val2) {
        return true;
    } else {
        return false;
    }
}

void permuter(int &t1, int &t2, int &tmp) {
    tmp = t1;
    t1 = t2;
    t2 = tmp;
}

void afficher(Instant t) {
    cout << "Il est " << t.heure << ":" << t.minutes << ":" << t.secondes << endl;
}

void avancerUneSeconde(Instant &t) {
    if(t.secondes == 59) {
        if(t.minutes == 59) {
            if(t.heure == 23) {
                t.secondes = 0;
                t.minutes = 0;
                t.heure = 0;
            } else {
                t.secondes = 0;
                t.minutes = 0;
                t.heure += 1;
            }
        } else {
            t.secondes = 0;
            t.minutes += 1;
        }
    } else {
        t.secondes += 1;
    }
}

Instant avancerUneSecondeBis(Instant t) {
    Instant instant = t;

    if(instant.secondes == 59) {
        if(instant.minutes == 59) {
            if(instant.heure == 23) {
                instant.secondes = 0;
                instant.minutes = 0;
                instant.heure = 0;
            } else {
                instant.secondes = 0;
                instant.minutes = 0;
                instant.heure += 1;
            }
        } else {
            instant.secondes = 0;
            instant.minutes += 1;
        }
    } else {
        instant.secondes += 1;
    }
    return instant;
}

/* 4.d - Variante à finir */