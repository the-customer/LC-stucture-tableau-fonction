#include <stdio.h>
#define taille 5 //definir une constante
int main(){
// tableau une variable composée de données de même type, 
// stockée de manière contiguë en mémoire

// un tableau est une structure linéaire homogéne 
// compose de cellule dont chacune 
// d'elle peut contenir une valeur
// Les cellule d'un tableau sont numerotées et la premiere
// cellule a le numero zero (0)

// un tableau doit avoir :
//  - Un nom
//  - Un type
//  - Une taille
//  - Une Dimension
// Syntaxe :
// type nomTableau[taille]; //Tableau a une dimension
// type nomTableau[NbreLignes][NbreCols]; //Tableau a deux dimension ou matrice

// Exemple:
// Declarer une tableau de 75 entiers;
int tab[75];
// Manipulations d'un tableau 
// Manipuler un tableau revient a manipuler toutes ces cellules
// Donc la manipulation necessite une boucle qui parcourt toutes les cellules
// Dans la boucle chaque cellule est representee par :
// le nom du tableau[indice]

// Exemple: Faire un programme qui permet de remplir les 
// cellule d'un tableau de 10 entiers.
// const int taille = 10;

int table[taille],i;

for (i = 0; i < taille; i++){
    puts("Entrer un entier:");
    scanf("%d",&table[i]);
}
//Affichage d'un tableau : 
for (i = 0; i < taille; i++){
    // printf("%d\t",table[i]);
    // printf("[%d] ",table[i]);
    printf("%d | ",table[i]);

}

// Exercice 2:
//     Ecrire un programme qui permet de remplir un tableau de 
//     N cellules de notes (entre 0 et 20). le programme affiche
//     les notes du tableau puis transfert dans un autre
//     tableau, les notes qui sont supérieures a la moyenne des
//     notes. Le programme devra afficher les valeurs du
//     deuxieme tableau.
}