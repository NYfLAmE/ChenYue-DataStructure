// 递归形式的Print N

#include<iostream>
using namespace std;

// 递归输出从1到N的所有正整数
void printN(int n)
{
    if (n)
    {
        printN(n - 1);
        printf("%d ", n);
    }
}
int main()
{
    int n;
    cin >> n;

    printN(n);
    return 0;
}