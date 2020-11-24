/*
            4 - Courses
*/

#include <iostream>
#include <string>
#include "main.h"

using namespace std;

int main() {
    Article a1, a2, a3, a4, a5, a6;
    ListeDeCourses liste;

    a1.nom = "avoine";
    a1.estCoche = true;
    a2.nom = "cacao";
    a2.estCoche = true;
    a3.nom = "fromage";
    a3.estCoche = true;
    a4.nom = "lait";
    a4.estCoche = true;
    a5.nom = "riz";
    a5.estCoche = true;
    a6.nom = "gallopinto";
    a6.estCoche = true;

    liste.articles[0] = a1;
    liste.articles[1] = a2;
    liste.articles[2] = a3;
    liste.articles[3] = a4;
    liste.articles[4] = a5;
    liste.articles[5] = a6;

    liste.casesOccupees = 6;

    afficherListe(liste);
    decocherArticles(liste);
    afficherListe(liste);
    //ajouterArticle(liste, nombreCases, casesOccupees, p6);
    //supprimerArticle(liste, nombreCases, 2);
    //cout << endl;
    //afficherListe(liste, casesOccupees);
}

void afficherListe(ListeDeCourses l) {
    for (int i = 0; i < l.casesOccupees; ++i) {
        cout << "liste.articles[" << i << "].nom : " << l.articles[i].nom << endl;
        cout << "liste.articles[" << i << "].estCoche : " << l.articles[i].estCoche << endl;
        cout << endl;
    }
    cout << endl;
}

void decocherArticles(ListeDeCourses &l) {
    for (int i = 0; i < l.casesOccupees; ++i) {
        l.articles[i].estCoche = false; 
    }
}


// Il reste juste a pouvoir trier les mots commencant par la meme lettre
/* void cocherDecocher(Article tab[], int taille, int occupees, int k) {
    Article tmp;

    if (tab[k].estCoche == false) {
        tab[k].estCoche = true;
            while (tab[k].nom[0] > tab[k + 1].nom[0] || tab[k + 1].estCoche == false) {
            tmp = tab[k];
            tab[k] = tab[k + 1];
            tab[k + 1] = tmp;
            k += 1;
        }
    } else {
        tab[k].estCoche = false;
        while (tab[k - 1].nom[0] > tab[k].nom[0] || tab[k - 1].estCoche == true) {
            tmp = tab[k];
            tab[k] = tab[k - 1];
            tab[k - 1] = tmp;
            k -= 1;
        }
    }
}

 */


/*

// Modifier la fonction pour mettre par ordre alphabetique le nouvel element ajoute
void ajouterArticle(Article tab[], int taille, int &occupees, Article p) {
    int pos = 0;

    // D'abord on ajoute le Article
    tab[occupees] = p;
    occupees += 1;


    // Ensuite on le place selon l'ordre alphabetique
    for (int i = 0; i < occupees - 1; ++i) {
        pos = 0;
        if (tab[occupees - 1].nom[pos] < tab[i].nom[pos]) {
            tab[occupees - 1].nom.swap(tab[i].nom);
        } else {

            while (tab[occupees - 1].nom[pos] == tab[i].nom[pos]) {
                pos += 1;
                if (tab[occupees - 1].nom[pos] < tab[i].nom[pos]) {
                    tab[occupees - 1].nom.swap(tab[i].nom);
                }
            }
        }
    }  
}

// On suppose que toutes les cases du tableau sont remplies
void supprimerArticle(Article tab[], int taille, int pos) {
    int i = 0;

    if(pos >= 0 && pos < taille - 1) {
        for(i = pos; i < taille - 1; ++i) {
            tab[i] = tab[i + 1];
        }
        tab[i].nom = "";
        tab[i].estCoche = false; 
    } else {
        cout << "La position rentrée n'est pas valide." << endl;
    }
       
}

*/