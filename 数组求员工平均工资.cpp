/*����һ���������� salary ��������ÿ�������� Ψһ �ģ����� salary[i] �ǵ� i ��Ա���Ĺ��ʡ�

���㷵��ȥ����͹��ʺ���߹����Ժ�ʣ��Ա�����ʵ�ƽ��ֵ��

 

ʾ�� 1��

���룺salary = [4000,3000,1000,2000]
�����2500.00000
���ͣ���͹��ʺ���߹��ʷֱ��� 1000 �� 4000 ��
ȥ����͹��ʺ���߹����Ժ��ƽ�������� (2000+3000)/2= 2500
*/
#include"stdio.h"
int main(){
	int salary[5],i;
	for(i=0;i<5;i++)
		scanf("%d",&salary[i]);
	int min=salary[0],max=salary[0];
	
        int count=0;
        for(i=0;i<5;i++){
            if(salary[i]<min)
                min=salary[i];
            if(salary[i]>max)
                max=salary[i];
            count+=salary[i];
        }
        
        double x=(count-max-min)/3;
       printf("%lf",x);

} 
