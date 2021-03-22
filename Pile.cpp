
#include "Pile.h"

    template <class T>
NoeudDeListe<T>* Liste<T>::getTete() {
        return this->tete ;
    }

    template <class T>
Pile<T>::Pile<T>() {
        this->tete = nullptr;
        this->nbElts = 0;
    }

    template <class T>
 Pile<T>::ajouterTete(T x) {
        NoeudDeListe<T> *tpmp = new NoeudDeListe<T>(x);
        tpmp->setSuivant(this->tete );
        this->tete  = *tpmp;
    }

    template <class T>
 Pile<T>::retirerDebut() {
        if (!pileVide()) {
            this->tete = this->tete->getSuivant();
        }
    }

    template <class T>
 Pile<T>::afficher() {
        NoeudDeListe<T> *tpmp = this->tete ;
        while (tpmp != NULL){
            tpmp->afficher();
            *tpmp = tpmp->getSuivant();
        }
    }
