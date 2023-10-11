#include <stdio.h>
    //Exercice:---------------------------------
    // Ecire un programme qui permet de remplir un 
    // tableau de N entiers Le programme affiche 
    // le tableau et determine et affiche la somme
    // des valeurs du tableau.
    //Correction : voir le fichier exo1_tab.c
int main(){
    int n,T[20],s;
    //Saisir la taille reelle du tableau:
    do{ //Controler la saisie car taille ne doit pas etre negative ou nulle ou supp a 20 (ici)
        puts("Entrer la taille du tableau:");
        scanf("%d",&n);
    }while (n <= 0 || n > 20);
    //Remplir le tableau
    for (int i = 0; i < n; i++){
        // puts("Entrer un entier:");
        printf("Entrer l'entier %d:",i+1);
        scanf("%d",&T[i]);
    }
    //Affichage
    puts("Affichage des valeurs du tableau : ");
    for (int i = 0; i < n; i++){
        printf("%d | ",T[i]);
    }
    //Determiner la somme:
    s = 0;
    for (int i = 0; i < n; i++){
        s += T[i];
    }
    //Affichage de la somme:
    printf("\nLa somme est : %d\n",s);
    return 0;
}