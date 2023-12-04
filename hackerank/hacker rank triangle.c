#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {
	/**
	* Sort an array a of the length n
	*/
    int p=0;
    int s[n];
    int temp;
    triangle tamp;
    for(int i = 0;i<n;i++)
    {
        p=(tr[i].a+tr[i].b+tr[i].c)/2;
        s[i]=sqrt(p * (p-tr[i].a) * (p-tr[i].b) * (p-tr[i].c));
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(s[j]>s[j+1])
            {
                temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
                
                tamp = tr[j];
                tr[j]=tr[j+1];
                tr[j+1]=tamp;
                
            }
        }
    }
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}