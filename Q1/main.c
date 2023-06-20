#include <stdio.h>

int modulus(int numArg, int dArg)
{
    if (numArg == dArg){
        return 0;
    }
    else if (dArg < numArg){
        return modulus(numArg-dArg, dArg);
    }
    else{
        return numArg;
    }
}

int main()
{
    int num;
    int d;
    int p;

    printf("Enter number> ");
    scanf("%d", &num);
    printf("Enter divisor> ");
    scanf("%d", &d);
    //p = divisorPower(num, d);
    printf("Remainder : %d", modulus(num, d));
    return 0;
}
