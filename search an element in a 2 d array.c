#include<stdio.h>
int main()
{
int i,j,item,loc=0,loc1=0,n;
int a[10][10];
//clrscr();
printf("\n\tThis Program is Used To search an element in 2Dimensional Array using Linear
Search\n");
printf("\n\tEnter The size Of matrix:\n");
scanf("%d",&n);
printf("\n\tEnter The Values Of Array:\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("\n\tEnter The Value To Be Searched: ");
scanf("%d",&item);
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(item==a[i][j])
{
loc=i+1;
loc1=j+1;
break;
}
}
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf("%d ",a[i][j]);
}
printf("\n");
}
printf("\n\tThe Item is at Row %d And Column %d.",loc,loc1);
printf("\n\n\t\tSearch Completed.");
return 0;
}
