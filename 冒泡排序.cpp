#include"stdio.h"
#include"stdlib.h" 
int main(){
	int a[6],i,j,x;
	for(i=0;i<6;i++){
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<6;i++){
		for(j=0;j<6-i;j++){
			if(a[j]>a[j+1]){
				x=a[j];
				a[j]=a[j+1];
				a[j+1]=x;
			}
		}
	}
for(i=0;i<6;i++){
	printf("%d ",a[i]);
}
} 
