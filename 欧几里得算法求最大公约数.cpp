#include "stdio.h"
int get(int a,int b);
int main(){
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	if(a>b){
		printf("最大公约数为：%d",get(a,b));
	}
	else{
		printf("最大公约数为：%d",get(b,a));
	}
}
int get(int a,int b){
	int c;
	while(b){
		c=a%b;
		a=b;
		b=c;
	}
	return a;
}
