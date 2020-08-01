/*在一个 n * m 的二维数组中，每一行都按照从左到右递增的顺序排序，每一列都按照从上到下递增的顺序排序。请完成一个函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。
示例:
现有矩阵 matrix 如下：
[
  [1,   4,  7, 11, 15],
  [2,   5,  8, 12, 19],
  [3,   6,  9, 16, 22],
  [10, 13, 14, 17, 24],
  [18, 21, 23, 26, 30]
]


给定 target = 5，返回 true。

给定 target = 20，返回 false
*/
#include"stdio.h"
int main(){
int a[5][5],i,j,target,x=0;

for( i = 0 ; i < 5 ; i ++)
            for(int j = 0 ; j < 5 ; j ++){
            	scanf("%d",&a[i][j]);
            } 
            scanf("%d",&target);
for( i = 0 ; i < 5 ; i ++){
            for(int j = 0 ; j < 5 ; j ++){
                if(a[i][j] == target){
                    x=1;
                }
                }
            }
           if(x==1){
           	printf("true");
           } 
           else{
           	printf("false");
           }
        }
        
    
