#ifndef FILE_H
#define FILE_H
#include "Liste.h"
template <class T>
class File : public Liste<T>{
public:
    File<T>();
    NoeudDeListe<T>* getpDernier();

    void ajouterFin(T x);

    void retirerDebut();
    void afficher() override;

#endif