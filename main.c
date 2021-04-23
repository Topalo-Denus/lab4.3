#include "stdio.h"// бібліотеки//
#include "math.h"
int main (void){
int j, i, s, p;
p = 0;

for (i = 1; i <= 25; i++)
{ 
for (s = 1, j = 1;j <= i; j++) 
s *= (j+1)/2;
p += s;
}
printf("p=%d\n", p);
return 0;
}