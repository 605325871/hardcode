#include<iostream>
using namespace std;

const int N=1e6+10;
int n;
int q[N];

void quick_sort(int q[],int l,int r)
{
    //如果一个数组只有一个数字，或者没有数字则不用排序
    if(l>=r)   return; 
    // 设置一个临界点x， 让i指数组的左边的外边，让j指向数组的右边的外边，这样子就可以两个指针向里走
    int x=q[l] , i= l-1,j=r+1;
    while(i<j)
    {
        do i++; while(q[i]<x); //移动左边的数据时的他 小于 临界点，     当找到一个大于等于临界点的则停下

        do j--;while(q[j]>x); //反之
        if(i<j) swap(q[i],q[j]); 
    }

    //分治
    quick_sort(q,l,j);  //排左边区域 
    quick_sort(q,j+1,r);// 排右边区域

}
int main()
{
    scanf("%d",&n);
    for(int i=0; i< n; ++i) scanf("%d",&q[i]);

    quick_sort(q,0,n-1);

    for(int i=0; i< n; ++i) printf("%d",q[i]);

}