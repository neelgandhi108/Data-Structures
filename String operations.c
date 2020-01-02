#include <stdio.h>
#include <string.h>
int main()
{
char stringg1[20],stringg2[20];
char stringg[10]="Hello ";
puts("Enter you string");
gets(stringg1);
strcat(stringg,stringg1); //add
puts(stringg);
strcpy(stringg2,stringg1);
puts(stringg2);//copy
puts(stringg);
strrev(stringg); //rev
puts(stringg);
int a=strlen(stringg); //length
printf("%d",a);
return 0;
}
