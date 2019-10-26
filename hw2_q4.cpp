#include <stdio.h>
int v = -25;
int main(int argc, char *argv[])
{
	int a,b,c,*d;
	a=8;
	b=100;
	c=0;
	
	{
		if(c<b){
			d=1; // not correct
			c=c+1;
		}	
	}
	printf("%d",proc1(d,a,b)) // unsure how the pointer works here
	
}

int proc1(int *x, int y, int z){
	int i = 0;
	int j = 0;
	int k = 0;

}
