/*L’utente inserisce la propria età e il programma dice se è maggiorenne (ovvero con età maggiore uguale a 18 anni)*/

#include <stdio.h>

int main(){
    
    int eta;

    printf("inserire la propria età");
    scanf("&d, &eta");
    
    if(eta>18){
    printf("L'utente è maggiorenne");
    } else {
    printf("L'utente non è maggiorenne");
    }

    return 0;
}
