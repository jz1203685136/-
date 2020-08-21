#include"stdio.h" 
int get(int x, int n,int m);
int main(){
	int x,n,m,result;
	scanf("%d",&x);
	scanf("%d",&n);
	scanf("%d",&m);
	result=get(x,n,m);
	printf("%d",result);
}
int get(int x, int n,int m)  
{  
    int result = 1;  
    while (n > 0)  
    {  
        if (n % 2 == 1)  
        {  
            result = (result*x) % m;  
        }  
        n /= 2;  
        x = (x*x) % m;  
    }  
    return result;  
}  
