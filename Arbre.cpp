#include <iostream>

using namespace std;


struct noeudarbre{
	int value;
	noeudarbre *left;
	noeudarbre *right;
};

class Arbre{
public:
	Arbre();
    void insert(int value);
	void afficher();
private:
    noeudarbre* racine;
	void insert(int value, noeudarbre *leaf);    
    void afficher(noeudarbre *noeud);
};


Arbre::Arbre(){
	racine = NULL;
}

void Arbre::insert(int value){
	if(racine != NULL){
		insert(value, racine);
	}else{
		racine = new noeudarbre;
		racine->value = value;
		racine->left = NULL;
		racine->right = NULL;
	}
}

void Arbre::afficher(){
	afficher(racine);
	cout << "\n";
}
void Arbre::afficher(noeudarbre *noeud){
	if(noeud != NULL){
		afficher(noeud->left);
		cout << noeud->value << ",";
		afficher(noeud->right);
	}
}


void Arbre::insert(int value, noeudarbre *noeud){

	if(value < noeud->value){
		if(noeud->left != NULL){
			insert(value, noeud->left);
		}else{
			noeud->left = new noeudarbre;
			noeud->left->value = value;
			noeud->left->left = NULL;
			noeud->left->right = NULL;
		}
	}else if(value >= noeud->value){
		if(noeud->right != NULL){
			insert(value, noeud->right);
		}else{
			noeud->right = new noeudarbre;
			noeud->right->value = value;
			noeud->right->right = NULL;
			noeud->right->left = NULL;
		}
	}

}
