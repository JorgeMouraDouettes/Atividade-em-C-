#include <stdio.h>

int main()
{
   int i, celcius;
   
   printf("FAHRENHEIT    ::    CELCIUS\n");
   
    for(i=40; i<=75; i++){
        celcius = ((i-32)*5)/9;
        printf("      %d°F    ::    %d°C\n", i, celcius);
    }
}
