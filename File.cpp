#include "File.h"

    template <class T>
File<T>::File<T>() {
        this->pPremier = nullptr;
        this->pDernier = nullptr;
        this->nbElts = 0;
    }
    template <class T>
NoeudDeListe<T>* File<T>::getpPremier() {
        return this->pPremier;
    }


        template <class T>
voidFile<T>::ajouterFin(T x) {
        NoeudDeListe<T> *tpmp = new NoeudDeListe<T>(x);
        if (fileVide()) {
            this->pPremier = tpmp;
            this->pDernier = tpmp;
        } else {
            this->pDernier->setSuivant(tpmp);
            this->pDernier = this->pDernier->getSuivant();;
        }
        this->nbElts++;
    }

        template <class T>
void File<T>::retirerDebut() {
        if (!fileVide()) {
            this->pPremier = this->pPremier->getSuivant();
        }
    }
        template <class T>
void File<T>::afficher() override{
        NoeudDeListe<T>* element = this->getpPremier();
        cout << " Affichage de la file à "<< this->nbElts <<" éléments : \n";
        if(this->fileVide()){
            cout << "La file est vide \n";
        }
        else{
            for(int i=1;i<this->nbElts;i++ ) {
                cout << "[ Elément "<<i<<" ] ";
                element->afficher();
                element=element->getSuivant();
            }
        }
    }