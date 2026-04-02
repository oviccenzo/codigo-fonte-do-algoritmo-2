#include <stdio.h>
int main(){
	
	int x,y,z;
	
	x = y = 10;
 	z = ++x;
   	x = -x;
   	y *= x + 1;
   	y++;
   	x=x+y-(z--);
   	printf("x = %d, y = %d, x = %d\n",x,y,z);
   	
   	return 0;
	
}
