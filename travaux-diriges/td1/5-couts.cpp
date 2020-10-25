/*
            5 - Coûts
*/

#include <iostream>

using namespace std;

int sommeCar(int n);

int main() {
    int nombre = 0;

    nombre = sommeCar(3);
    cout << nombre << endl;
    return 0;
}

int sommeCar(int n) {
    int val = 0;

    for(int cpt = 1; cpt <= n; cpt++) {
        val = val + (cpt * cpt);
    }
    return val;
}