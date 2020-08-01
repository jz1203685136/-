#include"stdio.h"
#include"stdlib.h" 
void find(int a[],int x);
int main(){
	int a[100],x,i;
	scanf("%d",&x);
	for(i=0;i<100;i++){
		a[i]=i;
		printf("i=%d ",a[i]);
	}
		find(a,x);
}
void find(int a[],int x){
	int tou=0,wei=99,zhong,q=0;
	while(tou<=wei){
		zhong=(tou+wei)/2;
		if(x==a[zhong]){
			printf("找到x为第%d个数",zhong+1);
			q=1;
			break;
		}
		else if(x>zhong){
			tou=zhong+1;
		}
		else{
			wei=zhong-1;
		}
	}
	if(q==0){
		printf("未找到");
	}
}
