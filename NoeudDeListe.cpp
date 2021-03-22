#ifndef IOSTREAM
#include <iostream>

using namespace std;

template <class T>
NoeudDeListe<T>::NoeudDeListe(T donnee) {
        this->donnee = donnee;
        this->suivant = nullptr; // cf différence avec NULL
    }

    template <class T>
T NoeudDeListe<T>:: getDonnee() {
        return this->donnee;
    }

    template <class T>
void NoeudDeListe<T>::setDonnee(T d) {
        this->donnee = d;
    }

    template <class T>
NoeudDeListe<T>* NoeudDeListe<T>::getSuivant() {
        return this->suivant;
    }

    template <class T>
void NoeudDeListe<T>::setSuivant(NoeudDeListe<T>* s) {
        this->suivant = s;
    }

    template <class T>
void NoeudDeListe<T>::afficher() {
        cout << "Donnee -> " << this->donnee << "; Valeur suivante -> " << this->suivant->donnee<< "}\n";
    }

#endif
