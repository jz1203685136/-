/*����һ��δ��������������飬�ҵ���������ĵĵ������У������ظ����еĳ��ȡ�

 

ʾ�� 1:

����: [1,3,5,4,7]
���: 3
����: ��������������� [1,3,5], ����Ϊ3��

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
