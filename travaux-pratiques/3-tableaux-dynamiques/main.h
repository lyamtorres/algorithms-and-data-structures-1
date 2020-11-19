struct Etudiant {
    std::string nomPrenom;
    bool possedeBinome;
    Etudiant *binome;
};

void modifierNom(Etudiant &etu);

void formerBinome(Etudiant &etu1, Etudiant &etu2);

void afficherBinome(Etudiant etu);

void detruireBinome(Etudiant &etu);


