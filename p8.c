#include<stdio.h>
void main()
{
    int B,P1,P2,S,F,T,O,a=0,b=0,c=0,d=0,e=0;
    char X;
    //here b=burger,P1=pizza,P2=pasta,F=French fries,T=totle bill
    //O=order number
    B=150;
    P1=200;
    P2=120;
    S=100;
    F=80;
    T=0;
    X:printf("menu\nBerger      =150 Rs (enter number 1 for this order)\nPizza       =200 Rs (enter number 2 for this order)\nPasta       =120 Rs (enter number 3 for this order)\nSandwich    =100 Rs (enter number 4 for this order)\nFrench Fries=80  Rs (enter number 5 for this order)\n enter 0 for no order\n");
   Y:scanf("%d",&O);

    switch(O)
    {
    case 1:
        printf("Berger is your order\n");
        a+=150;
        goto Y;
        break;
    case 2:
        printf("Pizza is your order\n");
        b+=200;
        goto Y;
        break;
    case 3:
        printf("Pasta is your order\n");
        c+=120;
        goto Y;
        break;
    case 4:
        printf("Sandwich is your order\n");
        d+=100;
        goto Y;
        break;
    case 5:
        printf("French fries is your order\n");
        e+=80;
        goto Y;
        break;
    case 0:
        printf("your order is completed");
        T=a+b+c+d+e;
        printf("your bill is %d",T);
        break;


    }
}
