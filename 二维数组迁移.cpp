/*给你一个 m 行 n 列的二维网格 grid 和一个整数 k。你需要将 grid 迁移 k 次。

每次「迁移」操作将会引发下述活动：


	位于 grid[i][j] 的元素将会移动到 grid[i][j + 1]。
	位于 grid[i][n - 1] 的元素将会移动到 grid[i + 1][0]。
	位于 grid[m - 1][n - 1] 的元素将会移动到 grid[0][0]。


请你返回 k 次迁移操作后最终得到的 二维网格。

 

示例 1：



输入：grid = [[1,2,3],[4,5,6],[7,8,9]], k = 1
输出：[[9,1,2],[3,4,5],[6,7,8]]

*/ 
#include"stdio.h"
int main(){
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int b[9],i,j,k=0,x;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			b[k]=a[i][j];
			k++;
		}
	}
	x=b[8];
    for(i=8;i>0;i--){
    	b[i]=b[i-1];
    }
    b[0]=x;
    for(i=0,k=0;i<3;i++){
		for(j=0;j<3;j++){
			a[i][j]=b[k];
			k++;
		}
	}
		for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d,",a[i][j]);
		}
	}
} 
