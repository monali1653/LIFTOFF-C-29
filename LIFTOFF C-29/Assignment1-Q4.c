#include<stdio.h>
int main(){
    int n1,n2,op;
    printf("1.Addition\n 2.Substraction\n 3.Multiplication\n 4.Division\n");
    printf("Enter two numbers:\n");
    scanf("%d %d", &n1,&n2);
    printf("Enter your choice:\n");
    scanf("%d", &op);
    switch(op)
    {
        case 1:
        printf("Addition of %d and %d:%d\n", n1,n2,n1+n2);
        break;
        case 2:
        printf("Substraction of %d and %d:%d\n", n1,n2,n1-n2);
        break;
        case 3:
        printf("Multiplication of %d and %d:%d\n", n1,n2,n1*n2);
        break;
        case 4:
        printf("Division of %d and %d:%f\n", n1,n2,(float)n1/n2);
        break;
        default:
        printf("Any other operator.");
        break;
    }
    return 0;
}