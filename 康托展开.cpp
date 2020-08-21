#include"stdio.h"
char x[]={3,2,4,1,5};
int a[100];
//int get();
void jc();
int main(){

int i,j,q=0,sum=0;
   jc();
	for(i=0;i<sizeof(x);i++){
		q=0;
		for(j=i+1;j<sizeof(x);j++){
			if(x[i]>x[j]) q++;
			
		}
		sum+=q*a[sizeof(x)-i-1];
	}
	printf("%d",sum);
} 
void jc(){
	int i;
	a[0]=1;
	int n=100;
	for(i=1;i<n;i++){
		a[i]=a[i-1]*i;
	}
}
/*int get(){
	int i,j,q=0,sum=0;
	for(i=0;i<sizeof(x);i++){
		q=0;
		for(j=0;j<sizeof(x);j++){
			if(x[i]>x[j]) q++;
			sum+=q*a[sizeof(x)-i-1];
		}
	}
	return sum;
}*/ 
