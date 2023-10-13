#include<stdio.h>
int fib(int n)
{
	if(n<=1) return n;
	return fib(n-1) + fib(n-2);
}
int main()
{
	int n;
	scanf("%d",&n);
	int ans=fib(n);
	printf("%d ",ans);
}


// Online C compiler to run C program online
#include <stdio.h>
void fib(int,int,int,int);
int main() {
    int n,c;
    scanf("%d",&n);
    fib(0,1,c,n);
}
void fib(int a,int b,int c,int n)
{
    if(n<1)return;
    c=a+b;
    printf("%d ",a);
    a=b;
    b=c;
    n--;
    fib(a,b,c,n);
}
