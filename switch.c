#include <stdio.h>

int main(){

char atzīme;

printf("Uzraksti savu atzīmi\n");
scanf("%c", atzīme);

switch (atzīme)
{
case '10' :
    printf("Izcili\n");
    break;
case '9':
    printf("Teicami\n");
    break;

default:
    printf("ievadiet patiesu vērtību");9
    
}
return 0;
}