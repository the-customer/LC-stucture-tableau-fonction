#include <stdio.h>
#define MAX 10
// Ecrire un programme qui permet de remplir un 
// tableau de N Produits.
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
    //
    PRODUIT produits[MAX],p;
    int N,i;
    //
    do{
        puts("Entrer la taille reelle du tableau :");
        scanf("%d",&N);
    }while(N <= 0 || N > MAX);
    //
    for (i = 0; i < N; i++){
        fflush(stdin);
        puts("Entrer le libelle :");
        gets(produits[i].libelle);
        do{
            puts("Entrer le prix :");
            scanf("%d",&produits[i].prix);
        }while(produits[i].prix <= 0);
        do{
            puts("Entrer la quantite :");
            scanf("%d",&produits[i].qte);
        }while(produits[i].qte < 0);
        do{
            puts("Entrer la date de production:");
            scanf("%d%d%d",&produits[i].dp.j,&produits[i].dp.m,&produits[i].dp.a);
        }while(produits[i].dp.j <=0 || produits[i].dp.j > 31 ||
            produits[i].dp.m <=0 || produits[i].dp.m > 12 ||
            produits[i].dp.a < 0);
    }
    //

    puts("INFORMATIONS DU PRODUIT:");
    for (i = 0; i < N; i++){
        puts("------------------------");
        printf("LIBELLE   : %s\n",produits[i].libelle);
        printf("PRIX      : %d\n",produits[i].prix);
        printf("QUANTITE  : %d\n",produits[i].qte);
        printf("DATE PROD : %d/%d/%d\n",produits[i].dp.j,produits[i].dp.m,produits[i].dp.a);
    }
    return 0;
}