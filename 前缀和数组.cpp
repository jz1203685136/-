/*����һ���������� arr ���������� k �� threshold ��
���㷵�س���Ϊ k ��ƽ��ֵ���ڵ��� threshold ����������Ŀ
���룺arr = [2,2,2,2,5,5,5,8], k = 3, threshold = 4
�����3
���ͣ������� [2,5,5],[5,5,5] �� [5,5,8] ��ƽ��ֵ�ֱ�Ϊ 4��5 �� 6 ����������Ϊ 3 ���������ƽ��ֵ��С�� 4 ��threshold ��ֵ)��

ȡ������������ 

��*/ 
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
