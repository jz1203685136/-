#include"stdio.h"
#include"stdlib.h" 
#include <string.h>
int main(){

	int a[6],i,j,x;
	for(i=0;i<6;i++){
		scanf("%d",&a[i]);
	}
	for(i=1;i<6;i++){
		x=a[i];
		for(j=i-1;j>=0&&a[j]>x;j--){
			a[j+1]=a[j];
		}
		a[j+1]=x;
	}
	for(i=0;i<6;i++){
	printf("%d ",a[i]);
}
} 
