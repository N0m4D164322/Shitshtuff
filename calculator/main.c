#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Choose operation:\n\n\t1.Addition\n\t2.Multiplication\n\t3.Subtraction\n\t4.Division\n\n");
    printf("(1/2/3/4)");
    int op;
    scanf("%d",&op);
    sleep(1);
    system("cls");

    printf("how many components do you want to operate?\n\t2\n\t3\n\t4?\n\n");
    int comp;
    scanf("%d",&comp);

    if(comp=2){
        if(op=1){
            printf("Enter first number:");
            int adcomp1,adcomp2;
            scanf("%d",&adcomp1);
            printf("Enter 2nd number:");
            scanf("%d",adcomp2);
            int adresult;
            adresult=adcomp1+adcomp2;
            printf("Result:%d",adresult);
        }
    }

    return 0;
}
