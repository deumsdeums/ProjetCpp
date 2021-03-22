#ifndef NOEUDDELISTE_H
#define NOEUDDELISTE_H

template<class T>
class NoeudDeListe {
private:
    T donnee;
    NoeudDeListe *suivant;
public:
    NoeudDeListe<T>(T data);

    T getDonnee();
    NoeudDeListe<T> *getSuivant();
    void setDonnee(T donnee);
    void setSuivant(NoeudDeListe* suivant);
    void afficher();
};

#endif