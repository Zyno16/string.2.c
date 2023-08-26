#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{ char mot1[20];
char mot2[20];
   int n;
  puts("enter the caractere ");
  gets(mot1);
  puts("enter the caractere ");
  gets(mot2);
  if(strlen(mot1)!=strlen(mot2))
    printf("the words does't have same longer");
  else {
    for(int i=0;i<strlen(mot1);i++)
        if(mot1[i]!=mot2[i])
        n++;
  }printf("the number of not same letter=%d",n);


    return 0;
}
