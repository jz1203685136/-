#include"stdio.h"
#include<math.h> 
int main(){
float a,b,c,p,area; 
printf("请输入三角形的三边长\n"); 
scanf("%f %f %f",&a,&b,&c); 
p=1.0/2*(a+b+c);  
if(a+b>c&&b+c>a&&a+c>b){   
area=sqrt(p*(p-a)*(p-b)*(p-c)); 
printf("三角形的面积为：%.2f\n",area); 
} 
else 
printf("不能构成三角形\n");
return 0;
}
