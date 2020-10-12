/* Combien - TORRES Lyam
 */

#include <iostream>

using namespace std;

int main() {
    int nb, toto, cpt;

    cout << "Donnez la valeur de nb: ";
    cin >> nb; // Tester pour nb = 1, 2 et 3
    toto = 0; cpt = 0;
    while(cpt <= nb) {
        toto = toto + cpt;
        cpt = cpt + 1;
    }
    cout << "nb = "<< toto << endl;
}

// Coût théorique = 5(nb + 2)