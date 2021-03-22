#include <iostream>
#include <string>
#include "Liste.h"
#include "File.h"
#include "Pile.h"
#include "Liste.cpp"
#include "File.cpp"
#include "Pile.cpp"
#include "Arbre.cpp"
using namespace std;

int main() {

    int choiceType;
    do {
        cout << "Choisissez la liste de donnée à créer :" << endl;
        cout
                << "1. Liste"
                << endl
                << "2. Pile"
                << endl
                << "3. File"
                << endl
                << "4. File"
                << endl;

        cin >> choiceType;
        if(choiceType > 4 || choiceType < 1) {
            cout << "Vous devez faire un choix compris entre 1 et 3" << endl;
        }

    } while(choiceType > 4 || choiceType < 1);



        switch(choiceType) {
            case 1:
                Liste<int> liste = new Liste<int>();
                bool ok;
                int nbValue;
                do {
                    cout << "Combien de valeurs voulez-vous ajouter dans cette liste d'entier ?" << endl;
                    if(cin >> nbValue) {
                        printf("Enter vos valeurs :\n");
                        for (int i = 0; i < nbValue; i++) {
                            int value;
                            do {
                                if (cin >> value) {
                                    liste.ajouterFin(value);
                                    ok = false;
                                } else {
                                    cout << "Vous devez entrer un entier !" << endl;
                                    ok = true;
                                }
                            } while (ok);
                        }
                    }
                } while(nbValue != (int)nbValue);
                printf("Voici votre Liste :\n");
                liste.afficher();
            break;
            case 2:
                    Pile<int> pile = new Pile<int>();
                    bool ok;
                    int nbValue;
                    do {
                        cout << "Combien de valeurs voulez-vous ajouter dans cette liste d'entier ?" << endl;
                        if(cin >> nbValue) {
                            printf("Enter vos valeurs :\n");
                            for (int i = 0; i < nbValue; i++) {
                                int value;
                                do {
                                    if (cin >> value) {
                                        pile.ajouterTete(value);
                                        ok = false;
                                    } else {
                                        cout << "Vous devez entrer un entier !" << endl;
                                        ok = true;
                                    }
                                } while (ok);
                            }
                        }
                    } while(nbValue != (int)nbValue);
                    printf("Voici votre Pile :\n");
                    pile.afficher();
                break;
            case 3:
            	Arbre *tree = new Arbre();
	            tree->insert(10);
	            tree->insert(6);
	            tree->insert(14);
	            tree->insert(5);
	            tree->insert(8);
	            tree->insert(11);
	            tree->insert(18);
	            tree->afficher();
    break;

    }

    return 0;
}