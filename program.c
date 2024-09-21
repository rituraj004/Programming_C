#include<stdio.h>
#include<math.h>
int main()
{
    int b,c,x,e;
    printf("Enter the value of b,c for linear differential equation y''+by'+cy=0 \n");
    scanf("%d %d",&b,&c);
    printf("You have entered y''+%dy'+ %dy=0 \n",b,c);

    int o=pow(b,2)-4*c;

    printf("The general solution of inputed value\n");
    if(o>0)
    {
    int m=sqrt(o);
     int r1=(-b/2)+(m/2);
    int r2=(-b/2)-(m/2);
    if(r1!=r2)
    {
        printf("y=c1e^(%dx)+c2e^(%dx)",r1,r2);
    }
    if(r1==r2)
    {
        printf("y=(c1x+c2)e^(%dx) \n(or)\ny=(c1+c2x)e^(%dx)" ,r1,r2);
    }
    }
    if(o<0)
    {
      int k=o*-1;
      int l=sqrt(k)/2;
      int p=-b/2;
      printf("e^(%dx)(Acos%dx+Bsin%dx)",p,l,l);
    }
   return 0;
}

