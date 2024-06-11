#include <stdio.h>

int main(){

    int a;
    char b;
    float c;
    double d;
    long int e;
    long long int f;
    long double g;

    printf("Enter an integer: ");
    scanf("%d", &a);

    while((getchar()) != '\n');

    printf("Enter a character:");
    scanf("%c", &b);

    while((getchar()) != '\n');

    printf("Enter a float:");
    scanf("%f", &c);

    printf("Enter a double:");
    scanf("%lf", &d);

    while((getchar()) != '\n');


    printf("Enter a long int:");
    scanf("%ld", &e);

    while((getchar()) != '\n');

    printf("Enter a long long int:");
    scanf("%lld", &f);

    while((getchar()) != '\n');

    printf("Enter a long double:");
    scanf("%lf", &g);




    printf("a = %d and size of the variable is %d\n",a,sizeof(a));
    printf("b = %c and size of the variable is %d\n",b,sizeof(b));
    printf("c = %f and size of the variable is %d\n",c,sizeof(c));
    printf("d = %lf and size of the variable is %d\n",d,sizeof(d));
    printf("e = %ld and size of the variable is %d\n",e,sizeof(e));
    printf("f = %lld and size of the variable is %d\n",f,sizeof(f));
    printf("g = %lf and size of the variable is %d\n",g,sizeof(g));

}
