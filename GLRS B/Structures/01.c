#include <stdio.h>
// Ecrire programme qui permet de saisir les informations d'un etudiant
// Un etudiant est : nom, prenom, matricule, sa moyenne.
int main(){
    // char nom;
    // char prenom;
    // float moyenne;
    // int matricule;
    //Remarque: Cette facon de declarer les variable (donnee) de l'etudiant
    // va eparpiller les donnees dans la RAM, nous on veut que les
    //donnees soient dans un bloc comme ca la recherche sera plus
    //rapide.
    //Pour cela il faut organiser les donnees au niveau de la RAM
    //Comment ? en Utilisant les structures
    //Syntaxe:
    // struct NomStructre{
    //     type1 caracteristique1;
    //     type2 caracteristique2;
    //     type3 caracteristiqueN;
    // };
    // Ex:
    //Definition de la struture (creation)
    struct Etudiant{
        char nom[25]; //nom est un tableau de 25 caracteres (chaine)
        char prenom[50];
        float moyenne;
        int matricule;
    };
    //Declaration de variable de type etudiant:
    struct Etudiant e1,e2;
    //Saisir un etudiant
    puts("Entrer le nom de l'etudiant:");
    // scanf("%s",&e1.nom);
    gets(e1.nom);
    puts("Entrer le prenom de l'etudiant:");
    gets(e1.prenom);
    puts("Entrer la moyenne de l'etudiant:");
    scanf("%f",&e1.moyenne);
    puts("Entrer matricule de l'etudiant:");
    scanf("%d",&e1.matricule);
    //Afficher:
    printf("NOM       : %s\n",e1.nom);
    printf("PRENOM    : %s\n",e1.prenom);
    printf("MOYENNE   : %f\n",e1.moyenne);
    printf("MATRICULE : %d\n",e1.matricule);
    return 0;
}



Ecrire un programme qui permet de saisir N produits. un produit est caracteriés par:
son libelle, son prix, sa quantite, sa date de creation.
Le programme affiche les produits,
determine et affiche le produit le plus cher
determine et affiche tous les produit crees cette annees
------
Refaire le meme exerice avec une tableau de N etudiant;