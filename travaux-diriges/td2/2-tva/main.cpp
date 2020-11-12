/* 
            2 - TVA
*/

#include <iostream>
#include "main.h"

using namespace std;

int main() {
            // 2.a

    CategorieTVA tauxReduit, tauxIntermediare, tauxNormal;
    Produit tarte;

    tauxReduit.nom = "Taux Reduit";
    tauxReduit.taux = 5.5;
    tauxIntermediare.nom = "Taux Intermediare";
    tauxIntermediare.taux = 10.0;
    tauxNormal.nom = "Taux Normal";
    tauxNormal.taux = 20.0;
    

            // 2.c

    Produit monProduit;
    monProduit.nom = "Tarte aux pruneaux";
    monProduit.societe = "La Mie Câline";
    monProduit.prixHT = 2.5;
    monProduit.catTVA = &tauxReduit;


    // Test pour la fonction calculerTTC
    float TTC = calculerTTC(monProduit);
    cout << "Le TTC de ce produit est de: " << TTC << endl;
    

/*     // Test pour la fonction saisirProduit
    Produit nouveauProduit;
    saisirProduit(nouveauProduit, tauxReduit);
    cout << "" << endl;
    cout << nouveauProduit.nom << endl;
    cout << nouveauProduit.societe << endl;
    cout << nouveauProduit.prixHT << endl;
    cout << nouveauProduit.catTVA->nom << endl;
    cout << nouveauProduit.catTVA->taux << endl; */


/*     // Test pour la fonction saisirProduitBis
    Produit nouveauProduitBis;
    saisirProduitBis(nouveauProduitBis, &tauxReduit, &tauxIntermediare, &tauxNormal);
    cout << "" << endl;
    cout << nouveauProduitBis.nom << endl;
    cout << nouveauProduitBis.societe << endl;
    cout << nouveauProduitBis.prixHT << endl;
    cout << nouveauProduitBis.catTVA->nom << endl;
    cout << nouveauProduitBis.catTVA->taux << endl; */

    return 0;
}

float calculerTTC(Produit p) {
    return p.prixHT * (100.0 + p.catTVA->taux / 100.0);
}

void saisirProduit(Produit &p, CategorieTVA &catTVA) {
    cout << "Donnez le nom de votre produit: " << endl;
    cin >> p.nom;
    cout << "Donnez la société de votre produit: " << endl;
    cin >> p.societe;
    cout << "Donnez le prix de votre produit: " << endl;
    cin >> p.prixHT;

    p.catTVA = &catTVA;
}

void saisirProduitBis(Produit &p, CategorieTVA *tReduit, CategorieTVA *tIntermediaire, CategorieTVA *tNormal) {
    int option = 0;

    cout << "Donnez le nom de votre produit: " << endl;
    cin >> p.nom;
    cout << "Donnez la société de votre produit: " << endl;
    cin >> p.societe;
    cout << "Donner le prix de votre produit: " << endl;
    cin >> p.prixHT;

    cout << "Donnez le numero de votre catégorie TVA (1=réduit, 2=normal, 3=particulier): " << endl;
    cin >> option;

    if(option == 1) {
        p.catTVA = tReduit;
    } else if(option == 2) {
        p.catTVA = tNormal;
    } else if(option == 3) {
        p.catTVA = tIntermediaire;
    } else {
        cout << "Cette option n'est pas disponible... Réesayez s'il vous plait." << endl;
    }
}




