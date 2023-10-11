#include <stdio.h>
// #define taille = 10 //Pour definir une constante
/*
    LES TABLEAUX
*/
int main(){

    // Un tableau est un ensemble de cellules contigues
    // chaque cellule peut contenir une information
    // toutes les cellules du tableau en C, doivent avoir
    // le meme type de donnees
    // - Les cellules d'un tableau sont numérotées
    // - La premiere cellule a le numero zero (0)
    // - Un tableau doit avoir une taille bien determinée
    // - On peut avoir un tableau d'une dimension ou de 
    // deux (2) dimensions
    //DECLARATION :
        // type nomTableau[taille];
    // Exemple: Declarer un tableau de 10 entiers.
    int tableau[10];
    int i;
    //Manipulation d'un tableau:
        // Manipuler un tableau revient a manipuler toute ces cellules
        // Donc la manipulation necessite l'utilisation de boucle
    // 1. Remplissage d'un tableau:
    //     Remplir le tableau
    for (i = 0; i < 10; i++)
    {
        puts("Entrer une valeur:");
        scanf("%d",&tableau[i]);
    }
    // 2. Affichage des elemtents d'un tableau
    puts("Voici les valeurs du tableau:");
    for (i = 0; i < 10; i++)
    {
        printf("%d | ",tableau[i]);
    }
// ---------------------------------------------------
    //Exercice:---------------------------------
    // Ecire un programme qui permet de remplir un 
    // tableau de N entiers Le programme affiche 
    // le tableau et determine et affiche la somme
    // des valeurs du tableau.
    //Correction : voir le fichier exo1_tab.c
    // Exercice 2:
    // Ecrire un programme qui permet de remplir un tableau de 
    // N cellules de notes (entre 0 et 20). le programme affiche
    // les notes du tableau puis transfert dans un autre
    // tableau, les notes qui sont supérieures a la moyenne des
    // notes. Le programme devra affichere les valeurs du
    // deuxieme tableau.
    return 0;
}