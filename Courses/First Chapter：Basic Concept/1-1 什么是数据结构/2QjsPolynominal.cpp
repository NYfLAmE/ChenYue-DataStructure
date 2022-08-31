// 用秦九韶公式来计算一元多项式
// 可能是最优的算法?(CSAPP上面貌似有讲到一个更优的算法)

#include<iostream>
#include<ctime>
using namespace std;

const int N = 10010;
double a[N];

clock_t start, endt;

double QJS(double a[], double x, int n)
{
    double p = 0;

    n --;
    p = a[n];

    // 以下是核心
    while (n)
    {
        p = (a[--n] + x * p);
        // cout << p << endl;
    }

    return p;
}
int main()
{
    cout << "请输入多项式的项数值" << endl;
    int n;
    cin >> n;

    cout << "请输入各项的系数值a" << endl;
    for (int i = 0; i < n; i ++) cin >> a[i];

    cout << "请输入x的值" << endl;
    double x;
    cin >> x;

    //printf("%lf", QJS(a, x, n));
    start = clock();
    for (int i = 0; i < 1000000; i ++)
    {
        QJS(a, x, n);
    }
    endt = clock();

    clock_t ticks;
    ticks = endt - start;
    printf("%lf", ticks / CLK_TCK / 10000);

    system("pause");
    return 0;
}