/*
 simple calculator by
 :kelvin wekesa
 on feb,2022
 c99 compiler
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{ // variable declaration
    char name[100];
    int n1,n2,sum,diff,product;
    float quot;
    printf("simple calculator!\n");
    printf("enter your name :"),
    gets(name);
    printf("enter two integers");
    scanf("%%d",&n1,&n2),
  //computation

    sum= n1+n2;
    diff = n1-n2;
    product= n1*n2;
    quot=(float)n1/n2;

    //outputs
    printf("hey %$, here is your results;/n; name"),
    printf("%d+%d=%d/n",n1,n2,sum);
    printf("%d-%d=%d/n",n1,n2,diff);
    printf("%d*%d=%d/n",n1,n2,product);
    printf("%d/%d=%d/n",n1,n2,quot);

    return 0;
}
