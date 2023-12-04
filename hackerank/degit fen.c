#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<ctype.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char str[1000];
    int arr[10]= {0};
    int a;
    scanf(" %[^\n]s",str);

    int i=0;
    while (str[i] != '\0')
    {
        if(isdigit(str[i]))
        {
            a = str[i] - 48;
            if(a == 0)
            {
                arr[a]++;
            }
            else if(a == 1)
            {
                arr[a]++;
            }
            else if(a == 2)
            {
                arr[a]++;
            }
            else if(a == 3)
            {
                arr[a]++;
            }
            else if(a == 4)
            {
                arr[a]++;
            }
            else if(a == 5)
            {
                arr[a]++;
            }
            else if(a == 6)
            {
                arr[a]++;
            }
            else if(a == 7)
            {
                arr[a]++;
            }
            else if(a == 8)
            {
                arr[a]++;
            }
            else if(a == 9)
            {
                arr[a]++;
            }
        }
        i++;

    }
    for(int i=0 ; i<10 ;i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}