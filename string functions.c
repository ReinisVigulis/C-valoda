#include <stdio.h>
#include <string.h>

int main(){

char string1[] = "Reinis";
char string2[] = "Reinis";

//strlwr(string1);  //uztaia visus burtus par mazajiem
//strupr(string1);  //uztaisa visus burtus par lielajiem
//strcat(string1, string2); //savieno kopa string1 ar string2
//strncat(string1, string2,1); //savieno kopa string1 un string2, bet no string divi attēlo burtu skaitu kas ir uzrakstits piem(1)
//strcpy(string1, string2); //nokopē string2 un to attēlo to kā string1
//strncpy(string1, string2, 1); // copy n characters of string 2 to string 1

//strset(string1, '?'); // sets all characters of a string to a given character
//strnset(string1, 'x', 1); // aizvieto ar izvēlēto simbolu attiecīgo vietu string1
//strrev(string1); //reverses a string

//int result = strlen(string1); // retur string lentg as int
int result = strcmp(string1, string2);
//printf("%d", result);

if(result == 0){
    printf("These string are the same");

}
else{
    printf("These strings are different");
}
  return 0;
}
