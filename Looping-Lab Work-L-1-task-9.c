#include <stdio.h>
int main() {
    int n, a ,f;
    printf("Enter value : ");
    scanf("%d", &n);
    a = 1;
    f=1;

      while( a <= n ){  
            f = f * a;   
            a++;
        }     

    printf("factorial = %d", f);
    return 0;
}
