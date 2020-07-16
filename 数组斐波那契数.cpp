/*给你数字 k ，请你返回和为 k 的斐波那契数字的最少数目，其中，每个斐波那契数字都可以被使用多次。

斐波那契数字定义为：


	F1 = 1
	F2 = 1
	Fn = Fn-1 + Fn-2 ， 其中 n > 2 。


数据保证对于给定的 k ，一定能找到可行解。

 

示例 1：

输入：k = 7
输出：2 
解释：斐波那契数字为：1，1，2，3，5，8，13，……
对于 k = 7 ，我们可以得到 2 + 5 = 7 
*/
#include"stdio.h"
int main (){
	int f[10],k,i,count=0,x;
	scanf("%d",&k);
	
	f[0]=1;
	for(f[1]=1,i=2;i<10;i++) f[i]=f[i-1]+f[i-2];
	

	for(i=9;i>=0;i--){
	
		if(k>=f[i]){
			
			x=i;
			break;
		}
	}
	

     for(i=x;i>=0;i--)
        {
            if(k>=f[i])
            {
                k-=f[i];
                count++;
            }
            if(k==0){
            printf("%d",count);
            
                break;}
            }
             
        }
