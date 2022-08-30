#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int m,n;
    float x,y;
	scanf("%d %d\n %f %f",&n,&m,&x,&y);
   
    printf("%d %d %.1f %.1f",n+m,n-m,x+y,x-y);

    
    return 0;
}