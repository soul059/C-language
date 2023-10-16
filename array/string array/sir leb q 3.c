#include<stdio.h>
#include<conio.h>
void main()
{
  char st1[30],st2[30];
  int i,j,k,match=0,index;
  int count=0;
  
  gets(st1);
  gets(st2);
  i=0;
  while(st1[i]!='\0')
  {
    j=0,k=i;
    while(st1[k]==st2[j] && st2[j]!='\0')
    {
      j++;
      k++;
     }
   if(st2[j]=='\0')
   {
    match=1;
    index=i;
    count++;
  //  printf("string found");
    printf("\nindex=%d",index);
   }
    i++;
 }
  if(match==1)
   {
    printf("string found");
    printf("\ncount=%d",count);
   }
   else
    {
      printf("string not found");
      }
    
}