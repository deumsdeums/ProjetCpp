#ifndef PILE_H
#define PILE_H
#include "Liste.h"

template <class U>
class Pile : public Liste<U>{
protected:
    NoeudDeListe<T>* tete;
public:
    Pile<U>();
    NoeudDeListe<T>* getTete();
    void ajouterTete(T x);
    void retirerDebut();
    void afficher() override;

};
#endif