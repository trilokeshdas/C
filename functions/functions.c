#include<stdio.h>
#include<stdlib.h>

    void goodmorning();
    void goodafternoon();
    void goodevening();

int main(){
    printf("helloworld\n");
    goodmorning();
    goodafternoon();
    goodevening();
    return 0;
}

void goodmorning(){
    printf("good morning\n");
}

void goodafternoon(){
    printf("good afternoon\n");
}

void goodevening(){
    printf("good evening");
}