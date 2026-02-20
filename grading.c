#include <stdio.h>
int main(){
    int e,m,h,s,c;
    float n;
    printf("Enter marks respectively \n 1.English \n 2.Maths \n 3.Hindi \n 4.Science \n 5.Computer");
    scanf("%d%d%d%d%d",&e,&m,&h,&s,&c);
    if (e<=0 || m<=0 || h<=0 || s<=0 || c<=0 ||e>100 || m>100 || h>100 || s>100 || c>100)
    {
        printf("Enter valid marks");
    }
    else {
        n=((e+m+h+s+c)/5);
        printf("The percentage is %f \n",n);

    }
    if (n>=90)
    {
        printf("A grade");
    }
    if(n>80 && n<90)
    {
        printf("B grade");
    }
    if (n<80 && n>70)
    {
        printf("C grade");
    }
    if (n<70) {
        printf("D grade");
    }
    return 0;
}