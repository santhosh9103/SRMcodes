#include<stdio.h>
#include<math.h>
int main(){
    int N,fp,sp,tp;
    scanf("%d",&N);
    fp = pow(N,1);
    sp = pow(N,2);
    tp = pow(N,3);
    printf("%d %d %d",fp,sp,tp);
    return 0;
}
//You need to link with the math library:

//gcc -o sphere sphere.c -lm
//The error you are seeing: error: ld returned 1 exit status is from the linker ld (part of gcc that combines the object files) because it is unable to find where the function pow is defined.

//Including math.h brings in the declaration of the various functions and not their definition. The def is present in the math library libm.a. You need to link your program with this library so that the calls to functions like pow() are resolved.