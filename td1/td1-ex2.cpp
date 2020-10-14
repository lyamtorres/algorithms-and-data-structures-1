/* 
            2 - Enregistrements audio
*/

#include <iostream>

using namespace std;

struct Temps {
    int minutes, secondes;
};

struct PisteAudio {
    string titre, artiste;
    Temps duree;
};

struct DisqueAudio {
    string titre, editeur;
    int annee;
    PisteAudio piste1, piste2, piste3;
};

int main() {
    DisqueAudio disque1;

    // Remplissage
    disque1.titre = "Toxicity";
    disque1.editeur = "Sony Music";
    disque1.piste1.artiste = "Serj Tankian";
    disque1.piste2.artiste = "Daron Malakian";
    disque1.piste3.artiste = "Shavo Odadjian";
    disque1.piste1.titre = "Chop Suey!";
    disque1.piste2.titre = "Aerials";
    disque1.piste3.titre = "B.Y.O.B";

    // Reponses 2.b
    cout << "Titre: " << disque1.titre << endl;
    disque1.editeur = "Université de Nantes";
    disque1.titre = disque1.piste1.artiste + " " + disque1.piste2.artiste + " " + disque1.piste3.artiste;
    disque1.piste2.duree.minutes = 1; 
    disque1.piste2.duree.secondes = 30;
    // Vérifier que les titres sont en ordre
    
    return 0;
}