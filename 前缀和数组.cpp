/*给你一个整数数组 arr 和两个整数 k 和 threshold 。
请你返回长度为 k 且平均值大于等于 threshold 的子数组数目
输入：arr = [2,2,2,2,5,5,5,8], k = 3, threshold = 4
输出：3
解释：子数组 [2,5,5],[5,5,5] 和 [5,5,8] 的平均值分别为 4，5 和 6 。其他长度为 3 的子数组的平均值都小于 4 （threshold 的值)。

取数组是连续的 

。*/ 
#include"stdio.h"
int main(){
	int arr[] = {2,2,2,2,5,5,5,8},threshold,k;
	scanf("%d",&threshold);
	scanf("%d",&k);
	int x = k * threshold;
        int len = sizeof(arr)/sizeof(arr[0]);
        int sum[len+1] ;
        for(int i = 1; i <= len; i++){
            sum[i] = sum[i - 1] + arr[i - 1];
        }
        int count = 0;
        for(int i = k; i <= len; i++){
            if(sum[i] - sum[i - k] >= x){
                count++;
            }
        }
        printf("%d",count);
} 
