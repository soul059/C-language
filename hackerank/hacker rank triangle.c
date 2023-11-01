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
    int p[n];
    int s[n];
    int tamp;
    for(int i = 0;i<n;i++)
    {
        p[i]=(tr[i].a+tr[i].b+tr[i].c)/2;
        s[i]=sqrt(p[i]*(p[i]-tr[i].a)*(p[i]-tr[i].b)*(p[i]-tr[i].c));
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(s[i]>s[j+1])
            {
                tamp = tr[i].a;
                tr[i].a=tr[j+1].a;
                tr[j+1].a=tamp;
                
                tamp = tr[i].b;
                tr[i].b=tr[j+1].b;
                tr[j+1].b=tamp;
                
                tamp = tr[i].c;
                tr[i].c=tr[j+1].c;
                tr[j+1].c=tamp;
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