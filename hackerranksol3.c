#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int  max_of_four(int a,int b,int c,int d );
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
int  max_of_four(int a,int b,int c,int d )
{
//    if(a>b && a>c && a>d)
//    {
//        printf("%d",a);
//    }
//    if(b>a && b>c && b>d)
//    {
//        printf("%d",b);
//    }
//    if(c>a && c>b && c>d)
//    {
//        printf("%d",c);
//    }
//    if(d>a && d>b && d>c)
//    {
//        printf("%d",d);
//    }
   int max;         // max gives us the greates of all numbers 
   max=a>b?a:b;
   max=c>max?c:max;  //?X:Y it is used to check for conditions if X is true                                  return x else y
   max=d>max?d:max;
   return max;
}