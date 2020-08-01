/*给定一个未经排序的整数数组，找到最长且连续的的递增序列，并返回该序列的长度。

 

示例 1:

输入: [1,3,5,4,7]
输出: 3
解释: 最长连续递增序列是 [1,3,5], 长度为3。

*/ 
#include"stdio.h"
int main(){
	int nums[10],max,present,i;
	for(i=0;i<10;i++){
		scanf("%d",&nums[i]);
	}
	
	for(int i = 1; i < sizeof(nums)/sizeof(nums[0]); i++){
            if(nums[i] > nums[i - 1]){
                present++;
                if(present > max) max = present;
            }else{
                present = 1;
            }
}
printf("%d",max);
}
