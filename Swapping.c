// C code to swap using XOR
#include <stdio.h>
int main()
{
    int x, y ;
    printf("Enter values of x and y  ");
    scanf("%d%d",&x,&y );
 
    // Code to swap 'x' and 'y'
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
 
    printf("After Swapping: x = %d, y = %d", x, y);
 
    return 0;
}
