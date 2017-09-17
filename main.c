//
//  main.c
//  123
//
//  Created by 许俊杰 on 15/8/24.
//  Copyright (c) 2015年 许俊杰. All rights reserved.
//

#include  <stdlib.h>

#include  <stdio.h>

double fun (int n)
{ int a,b,c, k;
    double s;
    s=0.0;a=2;b=1;
    for(k=1;k<=n;k++)
    {
        
        s=s+(double)a/b;
        c=a;a=a+b;b=c;
    }
    return s;
}
int main()
{ int n;
    scanf("%d",&n);
    printf("\nThe value of function is:%lf\n",fun(n));
}