#include"stdio.h"
int a[10];
void jc();
int get (int x,int y,int b[]);
int main(){
	int x,y,b[10],i;//x为序列长度，y为全排的第y个；
	scanf("%d",&x); 
	scanf("%d",&y);
	get (x,y,b);
	for(i=0;i<x;i++){
		printf("%d",b[i]);
	}
} 
int get (int x,int y,int b[]){
	int k=y-1,q,i,j;
	jc();
	for(i=0;i<x;i++){
	
	q=k/a[x-1-i];
	k=k%a[x-1-i];
	b[i]=q+1;
	for(j=0;j<i;j++)
	if(b[i]==b[j]) b[i]++;
}
}
void jc(){
	int i;
	a[0]=1;
	int n=100;
	for(i=1;i<n;i++){
		a[i]=a[i-1]*i;
	}
}
