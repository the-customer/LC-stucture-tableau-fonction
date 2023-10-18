#include <stdio.h>

// Les sous-programmes:
// En programmation : sous-programme  <=> 
// il existe deux type de fonction :
// - les fonctions qui ont un type de retour : fn avec
// - les fonctions qui n'ont pas de type de retour : fn sans retour
// Une fonction a des caracteristiques suivantes:
// -> avoir un nom
// -> avoir zero (0) ou +sieurs parametres
//     - un parametre est une donnees que la fonction a besoin
//         pour faire son travail.
// -> avoir un type de retour :
//     - le type de retour peut etre un type primitif (int,
//         float, char), des complexe, des tableau, ...
//     - le type de retour peut etre vide (void) :
//         c'est le type de retour des fonctions sans retour
// NB: Une fonction doit etre appeler
// Syntaxe:
// typeDeRetour nomFonction(type params){
//     ...
// }
// Exemple:
// - Ecrire une fonction qui affiche "Hello"

void hello(){
    printf("Hello!\n");
    printf("GoodBye!\n");
}
//
// Ecrire une fonction qui  permet de retourne le carre d'un 
// entier:
int carre(int x){
    int c = x * x;
    return c;
}

int main(){
    //Appel de fonction:
    // for (int i = 0; i < 100; i++)
    // {
    //     hello();
    // }
    //Comment appler une fonction qui retourne une valeur:
    // // 1. Dans une expression d'affichage
    // int nbre = 9;
    // printf("Le carre de %d est :%d\n",nbre,carre(nbre));//✅
    // // 2. Dans une expression de calcul:
    // int fx = 3 + 4 + carre(9) - 11;//✅
    // printf("f(x) = %d\n",fx);
    // // 3. Dans une expression d'affectation
    // int carreDe9 = carre(9) ;//✅
    // // 4. Dans une condition (if ou boucle)
    // int x = 9;
    // if(carre(x) == 81){
    //     puts("x est egale a 9");
    // }else{
    //     puts("x n'est pas 9");
    // }
    // carre(4); // ❌ n'affiche rien
    return 0;
}