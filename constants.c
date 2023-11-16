#include <stdio.h>
int main (){

// konstance lielums ko nevarēs mainīt programmas laikā
const float PI = 3.14159;
PI = 435.89;

printf("%f", PI);

return 0;
}  // izmetīs error ka nevar mainit PI