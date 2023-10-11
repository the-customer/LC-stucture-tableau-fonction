//Ecrire un programme qui permet de saisir un caractere.
//le programme affiche le type de ce caractere:
//    - entier
//    - lettre
//    - special
#include<stdio.h>
int main(){
    char car;
    printf("Entrer un caractere:\n");
    scanf("%c",&car);
    if(car>=48 && car <=57){
        printf("Le caractere est un entier");
    }else if(car>=65 && car<=90 || car>=97 && car<=122){
        printf("Le caractere est une lettre");
    }else{
        printf("Le caractere est un caractere special");
    }

}
