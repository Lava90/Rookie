#include<stdio.h>
#include<iostream>
int main(){
	int a, b, m, n;
	scanf_s("%d %d",&n,&m);
	b = (m-2*n)/2;
	a = n - b;
	if (m%2==1||a<0||b<0){
		printf("the number is erro\n");
	}
	else{
		printf("鸡的个数是%d，兔子的个数是%d\n",a,b);
	}
	system("PAUSE");
	return 0;
}
