#include"stdio.h"
#include"stdlib.h" 
int main(){
	int a[6],i,j,x,k;
	for(i=0;i<6;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<6;i++){
		x=i;
		for(j=i+1;j<6;j++){
			if(a[j]<a[x]) x=j;
		}
		k=a[x];
		a[x]=a[i];
		a[i]=k;
	}
	for(i=0;i<6;i++){
	printf("%d ",a[i]);
}
	} 
