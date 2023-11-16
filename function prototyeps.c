#include <stdio.h>

void hello(char[], int);// function prototype


int main (){

// function prototype 
// function decleration, w/o a body, before main()
//Ensures that calls to a function are made with correct arguments

char name[] = "BRO";
int age = 19;
hello(name, age);

    return 0;
}



void hello(char name[], int age){
    printf("\nHello %s", name);
    printf("\n You are %d years old", age);
    }