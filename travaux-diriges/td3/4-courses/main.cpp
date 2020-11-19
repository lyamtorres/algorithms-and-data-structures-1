/*
            4 - Courses
*/

#include <iostream>
#include <string>
#include "main.h"

using namespace std;

int main() {
    int const nombreCases = 6;
    int casesOccupees = 0;
    Produit liste[nombreCases];
    Produit p1, p2, p3, p4, p5, p6;

    p1.nomProduit = "avoine";
    p1.coche = true;
    p2.nomProduit = "cacao";
    p2.coche = true;
    p3.nomProduit = "fromage";
    p3.coche = true;
    p4.nomProduit = "lait";
    p4.coche = true;
    p5.nomProduit = "riz";
    p5.coche = true;

    p6.nomProduit = "gallopinto";
    p6.coche = false;

    liste[0] = p1;
    liste[1] = p2;
    liste[2] = p3;
    liste[3] = p4;
    liste[4] = p5;

    casesOccupees = 5;

    afficherListe(liste, casesOccupees);
    ajouterArticle(liste, nombreCases, casesOccupees, p6);
    afficherListe(liste, casesOccupees);
}

/* Il reste juste a pouvoir trier les mots commencant par la meme lettre */
void cocherDecocher(Produit tab[], int taille, int occupees, int k) {
    Produit tmp;

    if (tab[k].coche == false) {
        tab[k].coche = true;
            while (tab[k].nomProduit[0] > tab[k + 1].nomProduit[0] || tab[k + 1].coche == false) {
            tmp = tab[k];
            tab[k] = tab[k + 1];
            tab[k + 1] = tmp;
            k += 1;
        }
    } else {
        tab[k].coche = false;
        while (tab[k - 1].nomProduit[0] > tab[k].nomProduit[0] || tab[k - 1].coche == true) {
            tmp = tab[k];
            tab[k] = tab[k - 1];
            tab[k - 1] = tmp;
            k -= 1;
        }
    }
}

void decocherTout(Produit tab[], int taille) {
    for (int i = 0; i < taille; ++i) {
        tab[i].coche = false; 
    }
}

void afficherListe(Produit tab[], int taille) {
    for (int i = 0; i < taille; ++i) {
        cout << "liste[" << i << "]: " << tab[i].nomProduit << endl;
        cout << "liste[" << i << "].coche: " << tab[i].coche << endl;
    }
    cout << endl;
}

/* Modifier la fonction pour mettre par ordre alphabetique le nouvel element ajoute */
void ajouterArticle(Produit tab[], int taille, int &occupees, Produit p) {
    int pos = 0;

    // D'abord on ajoute le produit
    tab[occupees] = p;
    occupees += 1;

/*
    // Ensuite on le place selon l'ordre alphabetique
    for (int i = 0; i < occupees - 1; ++i) {
        pos = 0;
        if (tab[occupees - 1].nomProduit[pos] < tab[i].nomProduit[pos]) {
            tab[occupees - 1].nomProduit.swap(tab[i].nomProduit);
        } else {

            while (tab[occupees - 1].nomProduit[pos] == tab[i].nomProduit[pos]) {
                pos += 1;
                if (tab[occupees - 1].nomProduit[pos] < tab[i].nomProduit[pos]) {
                    tab[occupees - 1].nomProduit.swap(tab[i].nomProduit);
                }
            }
        }
    }
    */
}

void supprimerArticle(Produit tab[], int taille, int pos) {
    for(int i = pos + 1; i < taille; ++i) {
        tab[i - 1] = tab[i];
    }   
}