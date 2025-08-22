#include<stdio.h>
int main()
{
	//convert bytes into kb,mb,gb
	float bytes,kb,mb,gb;
	printf("Enter size in bytes:");
	scanf("%f",&bytes);
	
	kb = bytes/1024;
	mb = kb/1024;
	gb = mb/1024;
	
	printf("kb=% .3f\n",kb);
	printf("mb=% .3f\n",mb);
	printf("gb=% .3f\n",gb);
	
	return 0;
}
