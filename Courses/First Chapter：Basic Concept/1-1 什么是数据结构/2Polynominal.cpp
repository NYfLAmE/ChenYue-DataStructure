// 写程序计算给定多项式在给定点x处的值
// 第一种解法：直接对多项式的公式进行翻译
// 这是最低效，最暴力的方法

#include<iostream>
#include<cmath>
using namespace std;

const int N = 10010;
double a[N];

double formula(double a[], double x, int n)
{
    double sum = 0;
    for (int i = 0; i < n; i ++)
    {
        sum += (a[i] * pow(x, i));
    }

    return sum;
}
int main()
{
    cout << "请输入多项式的项数值" << endl;
    int n;
    cin >> n;

    cout << "请输入各项的系数值a" << endl;
    for (int i = 0; i < n; i ++) cin >> a[i];

    cout << "请输入x的值" << endl;
    int x;
    cin >> x;

    printf("%lf", formula(a, x, n));

    system("pause");
    return 0;
}