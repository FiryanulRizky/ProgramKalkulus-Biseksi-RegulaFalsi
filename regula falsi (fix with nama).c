#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define f(x) (x*x*x - 5*x - 7)

int main()
{
    float x,x0,x1;
    int k = 0;
    printf("\n-- METODE REGULA FALSI --\n\n");
    printf(" oleh :\n\n 1. I Made Suastika (1708561001)\n 2. Muhammad Firyanul Rizky (1708561006)\n 3. I Wayan Gede Indrayasa (1708561030)\n\n");
    printf("Persamaan yang dipakai adalah x^3 - 5x - 7\n\n");

    do  {
        printf("Masukkan Batas bawah : ");
        scanf("%f",&x0);
        printf("Masukkan Batas atas : ");
        scanf("%f",&x1);
        printf("\n");
    }while((f(x0)*f(x1))>0);

    do {
        k++;
        x = x0 - ((f(x0)/(f(x1) - f(x0))) * (x1 - x0));
        printf("Hasil iterasi ke - %d : %f\n",k,x);
        if(f(x) > 0)
            x1 = x;
        else
            x0=x;
    }
    while(fabs(f(x)) > .00001);
    printf("\nHasil Akar dari Persamaan adalah %f\n\n",x);
    printf("iterasinya sebanyak %d kali\n",k);
    return 0;
}
