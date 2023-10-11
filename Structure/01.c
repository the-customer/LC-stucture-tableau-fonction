#include <stdio.h>
// Ecrire un programme qui permet de saisir un 
// Produit.
// Le programme affiche tous les produits.
// Produit:
// -libelle
// -prix
// -quantite
// -date de production (j,m,a)
int main(){
    //Definir la structure
    typedef struct
    {
       int j,m,a; 
    }DATE;
    typedef struct 
    {
        char libelle[25];
        int prix,qte;
        DATE dp;
    }PRODUIT;
    // int x; //reservation d'un espace pour x (une seule valeur possible a la fois)
    // int t[12]; //reservation de 12 espaces qui sont regroupés dans une zone nommee t
    PRODUIT p;
    puts("Entrer le libelle :");
    gets(p.libelle);
    do{
        puts("Entrer le prix :");
        scanf("%d",&p.prix);
    }while(p.prix <= 0);
    do{
        puts("Entrer la quantite :");
        scanf("%d",&p.qte);
    }while(p.qte < 0);
    do{
        puts("Entrer la date de production:");
        scanf("%d%d%d",&p.dp.j,&p.dp.m,&p.dp.a);
    }while(p.dp.j <=0 || p.dp.j > 31 ||
           p.dp.m <=0 || p.dp.m > 12 ||
           p.dp.a < 0);

    puts("INFORMATIONS DU PRODUIT:");
    puts("------------------------");
    printf("LIBELLE   : %s\n",p.libelle);
    printf("PRIX      : %d\n",p.prix);
    printf("QUANTITE  : %d\n",p.qte);
    printf("DATE PROD : %d/%d/%d\n",p.dp.j,p.dp.m,p.dp.a);

    return 0;
}