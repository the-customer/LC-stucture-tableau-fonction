//Ecrire un programme qui permet de saisir un caractere
//Le programme affiche le type de ce caractere:
//    - chiffre
//    - lettre
//    - caractere special

#include<stdio.h>
int main(){

    char c;

    printf("Entrer un caractere :\n");//afficher (en algo)
    scanf("%c",&c); //saisir en algo

    if(c >='0' && c<='9'){
        printf("'%c' est un chiffre",c);
    }else if(c >='a' && c<='z'){
        printf("'%c' est une lettre",c);
    }else{
        printf("'%c' est un caractere special",c);
    }


}
