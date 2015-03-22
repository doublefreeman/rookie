#include <iostream>
using namespace std;

int FullArray(int* iArr,int k,int m, void* fun());

int main()
{
    int num[4] = {0};
    int count = 0;
    cout << "请输入4个1-13之间的整数，中间以空格隔开" << endl;
    /* 读入数据 */
    for (int i = 0; i < 4; i++)
    {
        cin >> num[i];
    }
    FullArray(num, 0, 3, NULL);
	return 0;
}
