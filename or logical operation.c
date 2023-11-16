#include<stdio.h>
#include <stdbool.h>
int main(){
//logical operator || (or), checks if at least one condtion is true 
float temp = 25;
//bool sunny = false;
if (temp <= 0 || temp >= 30){ 
    printf("The weather is bad\n");
}
else{
    printf("The weather is good\n");
} 
    
   
    
    
    
    return 0;
}