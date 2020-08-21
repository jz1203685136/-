#include"stdio.h"
int main(){
	bool a[100000];
	int i,n,j;
	scanf("%d",&n);
	for(i=2;i<n;i++){
		a[i]=true;
	}
	for(i=2;i<n;i++){
		for(j=2;i*j<n;j++)
		a[i*j]=false;
	}
	for(i=2;i<n;i++){
	
	if(a[i]){
		printf("%d  ",i);
	}
} }
