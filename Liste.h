#ifndef LISTE_H
#define LISTE_H

#include "NoeudDeListe.h"
#include "NoeudDeListe.cpp"

template <class T>
class Liste {
protected:
    NoeudDeListe<T> *pPremier;
    NoeudDeListe<T> *pDernier;
    int nbElts;
public:

    Liste<T>();
    void ajouterFin(T donnee);
    virtual void suppDebut();
    virtual void suppFin();
    void afficher();
    bool estVide();
};
#endif