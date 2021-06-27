#include<stdio.h>
#include<math.h>
#include<conio.h>

float fungsi (float o)
{
    int i;
    float biseksi;
    biseksi = o*o*o+i*o*o-10;
    return(biseksi);
}

int main()
{
    int i,n;
    float a,b,x,fa,fb,fx;
    a=1;
    b=2;
    n=10;
    i=1;
    fa=fungsi(a);
    fb=fungsi(b);
    while(i<=n)
    {
        x=(a+b)/2;
        fx=fungsi(x);
        printf("| %d |   %.2f | %.2f | %.2f | %.2f | %.2f | %.2f\n",i,a,x,b,fa,fx,fb);
            if((fx*fa)<0)
            {
                b=x;
                fb=fx;
            }
            else {
                a=x;
                fa=fx;
            }
            i=i+1;
    }
    printf("|x is %.2f",x);
    getch();
}
