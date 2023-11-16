#include <stdio.h>

int main (){

float item1 = 5.89;
float item2 = 6.84;
float item3 = 124;

printf("Item1: %.2f\n", item1); //%.2f divnieks nosaka ciparus aiz komata
printf("Item2: %8.2f\n", item2); // 8 nosaka ar cik lielu atstarpi tiks attēlots %f
printf("Item3: %-.2f\n", item3); // - zīme nosaka ka %f tiks attēlots uz kreiso pusi

return 0;
}






