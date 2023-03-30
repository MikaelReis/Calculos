
#include <stdio.h>
int rec1 ( int a )
{ 
    if (a > 0)
    { 
        printf ( "%d\n" , a );
        rec1 ( a - 2 );
    }
}

int main()
{
    int a ;
    printf("\n\nDigite um numero alto par : ");
    scanf("%d", &a);
    rec1(a);

    return 0;
}
