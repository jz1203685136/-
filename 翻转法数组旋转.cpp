/*给定一个数组，将数组中的元素向右移动 k 个位置，其中 k 是非负数。

示例 1:

输入: [1,2,3,4,5,6,7] 和 k = 3
输出: [5,6,7,1,2,3,4]
解释:
向右旋转 1 步: [7,1,2,3,4,5,6]
向右旋转 2 步: [6,7,1,2,3,4,5]
向右旋转 3 步: [5,6,7,1,2,3,4]

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/rotate-array
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。*/

//翻转法 

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
