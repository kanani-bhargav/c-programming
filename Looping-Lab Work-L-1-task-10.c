
#include <stdio.h>
int main()
{
     int n, a;
 
    printf("Enter a Number ");
    scanf("%d",&n);
    a=1;
    while(a<=10){
                
        printf("%d * %d = %d \n", n, a, n*a);
        ++a;
    }
    return 0;

}
