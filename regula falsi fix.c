#include <stdio.h>
#include <math.h>

double f(double x)
{
double d;
d=pow(x,3)+4*pow(x,2)-10;
return d;
}

main()
{
    double fx[100],a,b;
    double fa,fb,c,fc,error;
    int iterasi,i=0;

    printf("Masukkan Batas bawah (a) = ");
    scanf("%lf",&a);
    printf("Masukkan Batas Atas  (b) = ");
    scanf("%lf",&b);
    printf("Masukkan Batas Error yang diinginkan = ");
    scanf("%lf",&error);
    fa=f(a);
    fb=f(b);
        if(fa*fb>0)
            printf("Akar Tidak Ditemukan dalam Range %g-%g\n",a,b);
        else {
            while(fabs(f(c))>=error)
            {
                c=a-(fa*(b-a))/(fb-fa);
                fx[i]=f(c);
                fc=f(c);
                printf("%d.\t a = %7lf b = %7lf c = %7lf f(a) = %7lf f(b) = %7lf f(c) = %7lf \n",i,a,b,c,fa,fb,fc);
                    if(f(c)*fa<0)
                    {
                        b=c;
                        fb=f(c);
                    }
                    else {
                        a=c;
                        fa=f(c);
                    }
                    i++;
            }
            printf("\nHasil Akar \t = %g\n",c);
            printf("Nilai Error\t = %lf\n",fabs(fc));
            printf("Iterasi Maksimum = %d",i-1);
        }


}
