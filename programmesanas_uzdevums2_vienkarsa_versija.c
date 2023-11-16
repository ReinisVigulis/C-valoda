#include<stdio.h>
int main() {
int skaitlis1;
char bit0;
char bit1;
char bit2;
char bit3;
char bit4;
char bit5;
char bit6;
char bit7;
printf("Uzrakstiet naturālu skaitli: ");
scanf("%d", &skaitlis1);
fflush(stdin);
//printf ("Jūsu ievadītais skaitlis:%d\n", skaitlis1);
printf("Binārajā kodā:");
if else(skaitlis1 < 0 || skaitlis1 > 255 ){
   printf("Jūsu ievadītais skaitlis neatbilst nosacījumiem, ūdzu ņemiet vērā. ka ir jāievada naturāls skaitlis kas nav lielāks par (255)!\n");
   else{
    
   }
   }


bit7 = skaitlis1 >> 7 & 1;
printf("%d", bit7);
bit6 = skaitlis1 >> 6 & 1;
printf("%d", bit6);
bit5 = skaitlis1 >> 5 & 1;
printf("%d", bit5);
bit4 = skaitlis1 >> 4 & 1;
printf("%d", bit4);
bit3 = skaitlis1 >> 3 & 1;
printf("%d", bit3);
bit2 = skaitlis1 >> 2 & 1;
printf("%d", bit2);
bit1 = skaitlis1 >> 1 & 1;
printf("%d", bit1);
bit0 = skaitlis1 >> 0 & 1;
printf("%d", bit0);

return 0;
}