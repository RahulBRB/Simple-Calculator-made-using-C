#include <stdio.h>
int main()
{

    printf("\n \tThanks for using this Calculator made by @RahulBRB \n");
    printf("\t================================================= \n");
    printf("\t [1] Do addition. \n");
    printf("\t [2] Do subtraction. \n");
    printf("\t [3] Do multiplication. \n");
    printf("\t [4] Do division. \n");
    printf("\t ================================================= \n");
    printf("\t Enter your choice:");

    int n; // int n stands for number.
    scanf("%c", &n);
    char number = n;

    switch (number)

    {
    case '1':
        printf("\n\tYou picked [1] for addition. \n");
        int a, b, c;
        printf("Enter two integers to get their sum: \n");
        scanf("%d", &a);
        scanf("%d", &b);
        printf("When you add %d and %d, the sum will be %d. \n", a, b, a + b);
        printf("\t *Proof*\n ");
        printf("\t %d + %d = %d \n", a,b,a+b);
        scanf("%d", c);


        break;

    case '2':
        printf("\n\tYou picked [2] for Subtraction\n");
        int d,e,f;
        printf("Enter two integers which you want to subtract: \n");
        scanf("%d", &d);
        scanf("%d", &e);
        printf("When you subtract %d from %d, you will end up with %d. \n", d, e, d-e);
         printf("\t *Proof*\n ");
        printf("\t %d - %d = %d \n", d,e,d-e);
        scanf("%d", f);
        break;

    case '3':
        printf("\n\tYou picked [3] for Multiplication\n");
        int g,h,i;
        printf("Enter two integers which you want to multiply: \n");
        scanf("%d", &g);
        scanf("%d", &h);
        printf("When you multiply %d with %d, you will get %d. \n", g,h,g*h);
         printf("\t *Proof*\n ");
        printf("\t %d x %d = %d \n", g,h,g*i);
        scanf("%d", i);
        break;

    case '4':
        printf("\n\tYou picked [4] for Division\n");
        int j,k,l;
        printf("Enter two integers which you want to divide: \n");
        scanf("%d", &j);
        scanf("%d", &k);
        printf("When you divide %d by %d, you will get %d. \n", j,k,j/k);
         printf("\t *Proof*\n ");
        printf("\t %d / %d = %d \n", j,k,j/k);
        scanf("%d", l);
        break;

    default:
        printf("\n\t*Invalid input!*\n");
    }

    return 0;
}