#include <cstdio>

int main(int)
{
    int x,y,z;

    x=y=10;
    printf("x = %d, y = %d\n", x, y);
    z= ++x;
    printf("");
    x= -x;
    printf("x = %d, y = %d, z = %d \n", x, y, z);
    y *= x+1;
    printf("x = %d, y = %d, z = %d \n", x, y, z);
    y++;
    printf("x = %d, y = %d, z = %d \n ", x, y, z);
    x = x + y -(z--);
    printf("x = %d, y = %d, z = %d \n", x, y, z);
}