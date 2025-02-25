#include <stdio.h>

int main(){

    int nota;

    printf("Digite sua nota:");
    scanf("%d", &nota);

    // A >= 90
    // B >= 80
    // C >= 70
    // D >= 60
    // E >= 50
    // F 
    if (nota >= 90){
        printf("Conceito A!");
    } else if(nota >= 80){
        printf("Conceito B!");
    } else if(nota >= 70){
        printf("Conceito C!");
    }else if(nota >=60){
        printf("Conceito D!");
    }else if(nota >= 50){
        printf("conceito E!");
    }else {
        printf("Conceito é F");
    }




}