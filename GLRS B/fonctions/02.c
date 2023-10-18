#include <stdio.h>
// ==================VARAIBLES GLOBALES================
// int i; // 
// Les bonnes pratiques:
// 1. Definir les prototypes ou entete ou signature de fonctions
        // - le prototype est : le type de retour, le nom et les parametre, terminer par un point-virgule (pas d'accolades)
// 2. Implementation : Definir les corps des fonctions
// 3. Appel des fonctions
// Exemples:
// Ecire les fonctions suivantes:
// a. Une fonction qui retourne la somme de deux entiers
// b. une fonction qui affiche la table de multiplication d'un entier

//1================LES PROTOTYPES====================
// a.
// int somme(int a,int b); //ou bien
int somme(int,int);
//b.
// void tableMultiplication(int x); //ou bien
void tableMultiplication(int);

// Remarques : 🚨🚨🚨
// - Pour les prototypes :
    // Les noms des parametres dans  ne sont pas obligatoires par contre
    // leur type le sont.
// - Pour les corps:
//     les noms des parametres sont obligatoires


int main(){
    //Appel
    // a.
    // int toto,titi;
    // puts("Entrer deux entiers:");
    // scanf("%d%d",&toto,&titi);
    // printf("%d + %d = %d\n",toto,titi,somme(toto,titi));
    // b.
    // int table;
    // puts("Entrer un entier:");
    // scanf("%d",&table);
    // tableMultiplication(table);

    // for (int i = 1; i <= 10; i++)
    // {
    //     tableMultiplication(i);
    //     puts("-----------------\n");
    // }
     tableMultiplication(10);
    return 0;
}

//2==============CORPS DES FONCTIONS=================
int somme(int a,int b){
    // int s;
    // s = a + b;
    // return s;
    return a + b;
}
//
void tableMultiplication(int x){
    int i; // Variable locale
    printf("-----TABLE %d----- :\n\n",x);
    for (i = 1; i <= 12; i++)
    {
        printf("%d x %d = %d\n",x,i,x*i);
    }
}