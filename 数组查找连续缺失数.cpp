/*一个长度为n-1的递增排序数组中的所有数字都是唯一的，并且每个数字都在范围0～n-1之内。在范围0～n-1内的n个数字中有且只有一个数字不在该数组中，请找出这个数字。

 

示例 1:

输入: [0,1,3]
输出: 2
*/ 

#include"stdio.h"
int main(){
	int n,x,i;
	scanf("%d",&n);
	int a[n-1];
	for (i = 0; i <n-1 ; i++)
	scanf("%d",&a[i]);
	for (i = 0; i <n-1 ; i++) {
            if (a[i] != i) {
               x=i;
			     break;
            }
        }
       printf("%d",x);
    }

