/*����һ�����飬�������е�Ԫ�������ƶ� k ��λ�ã����� k �ǷǸ�����

ʾ�� 1:

����: [1,2,3,4,5,6,7] �� k = 3
���: [5,6,7,1,2,3,4]
����:
������ת 1 ��: [7,1,2,3,4,5,6]
������ת 2 ��: [6,7,1,2,3,4,5]
������ת 3 ��: [5,6,7,1,2,3,4]

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/rotate-array
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������*/

//��ת�� 

#include"stdio.h"
void reverse(int a[], int start, int end);
int main(){
	int a[7]={1,2,3,4,5,6,7},k,n,i;
	scanf("%d",&k);
	n=sizeof(a)/sizeof(a[0]);
	k=k%n;
	reverse(a,0,n-1);
        reverse(a,0,k-1);
        reverse(a,k,n-1);
        for(i=0;i<n;i++){
		printf("%d,",a[i]);}
}
void reverse(int a[], int start, int end) {
	int temp;
        while (start < end) {
            int temp = a[start];
            a[start++] = a[end];
            a[end--] = temp;
        }
    }
