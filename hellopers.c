#include <stdio.h>
int main(int argc, char *argv[])
{
	if(argc!=2)
	{printf("USAGE: %s name\n", argv[0]);
		retrun -1;
	}
	printf("Hello , %s!\n", argv[1]);
	return 0;
}
