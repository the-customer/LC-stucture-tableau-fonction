#include <stdio.h>
// ========================CONSTANTES====================
#define MAX_PLATS 10
#define MAX_ING 7

// ==================STRUCTURES==============================
typedef struct
{
    char libelle[25];
    int prix;
}INGREDIENT;
//
typedef struct
{
    char libelle[25];  
    int prix,qte; 
    INGREDIENT ingredients[MAX_ING];//tableau d'ingredients pour chaque plat
    int nbIng; //La taille reelle du tableau d'ingredients
}PLAT;
// ====================VARAIBLES GLOBALES====================

PLAT platsDuJour[MAX_PLATS];
int nbrPlats = 0; //Le nombre plats reel par jours

// =======================PROTOTYPES=======================
INGREDIENT saisieIngredient(void);
void afficheIngredient(INGREDIENT);
//
PLAT saisiePlat(void);
void affichePlat(PLAT);
//
// void remplirTabIngredients(INGREDIENT t[],int taille); ou bien
void remplirTabIngredients(INGREDIENT[],int);
void afficherTabIngredients(INGREDIENT[],int);
//
void remplirTabPlats(PLAT[],int);
void afficherTabPlats(PLAT[],int);
//
int saisiePositive(char[]);//Params : message a afficher

int main(){
    // INGREDIENT i = saisieIngredient();
    // afficheIngredient(i);
    afficheIngredient(saisieIngredient());
    
    return 0;
}

// ====================IMPLEMENTATION : CORPS===================
INGREDIENT saisieIngredient(void){
    INGREDIENT ingr;
    puts("Entrer le libelle de l'ingredient : ");
    gets(ingr.libelle);
    ingr.prix = saisiePositive("Entrer le prix de l'ingredient : ");
    return ingr;
}
//
void afficheIngredient(INGREDIENT ingr){
    printf("LIBELLE   : %s\n",ingr.libelle);
    printf("PRIX      : %d\n",ingr.prix);
}
//
int saisiePositive(char msg[]){
    int n;
    do{
        puts(msg);
        scanf("%d",&n);
    }while(n <= 0);
    return n;
}