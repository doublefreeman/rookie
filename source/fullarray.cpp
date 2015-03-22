#include <iostream>
using namespace std;

inline void Swap(int *a,int *b)//交换两个位置的值
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int FullArray(int* iArr,int k,int m, void* fun())//对下标为k~m的数进行全排列
{
    int i=0;
    if(k==m){
        for(i=0;i<=m;i++){//用输出数组值的方法，使问题得到简化；回避了好些问题，如果把值一个个输出问题就复杂了
            cout<<iArr[i];//由于设置MaxNum=9；当MaxNum设置超过9时记得改为cout<<iArr[i]<<" ";
            if(NULL != fun)
            {
                fun();
            }
        }
        cout<<endl;
        // count++;
        return 1;
    }
    for(i=k;i<=m;i++){//第一次是无效替换——Swap(&iArr[k],&iArr[k]);这是个技巧
        Swap(&iArr[k],&iArr[i]);
        FullArray(iArr,k+1,m,fun);
        Swap(&iArr[i],&iArr[k]);
    }
    return 1;

}