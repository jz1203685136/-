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
#include"stdio.h"
int main(){
	int a[7]={1,2,3,4,5,6,7},n,j,k,i,x;
	scanf("%d",&k);
	n=sizeof(a)/sizeof(a[0])-1;
	k=k%(n+1);
	for(i=0;i<k;i++){
		x=a[n];
	for(j=n;j>0;j--){
		a[j]=a[j-1];}
		a[0]=x;
	}
	for(i=0;i<=n;i++){
		printf("%d,",a[i]);
	}
} 
