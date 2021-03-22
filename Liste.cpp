#include "Liste.h"


template <class T>
Liste<T>::Liste() {
        this->pPremier = nullptr;
        this->pDernier = nullptr;
        this->nbElts = 0;
    }
template <class T>
void Liste<T>::ajouterFin(T x) {
        NoeudDeListe<T> *tmp = new NoeudDeListe<T>(x); 
        if (estVide()) {
            this->pPremier = tmp;
            this->pDernier = tmp;
        } else {
            this->pDernier->setSuivant(tmp);
            this->pDernier=tmp;

        }
        this->nbElts++;
    }

template <class T>
void Liste<T>::afficher() {
        cout << "Affichage de la liste à "<< this->nbElts<< " éléments :\n";
        NoeudDeListe<T>* pListe = this->pPremier;
        if (estVide()) {
            cout << "La Liste est vide.";
        }
        for (int i = 1; i <= this->nbElts; i++) {
            cout << "NoeudDeListe [" << i << "] {";
            pListe->afficher();
            pListe = pListe->getSuivant();
        }
        //afficher aussi nbElts

    }

template <class T>
bool Liste<T>::estVide() {
        if (this->nbElts == 0) return true;
        else return false;
    }
