#include <stdio.h>
#include <math.h>

#define N 10000

double sum(double x)
{
    double ans = 0.0;
    for (int i = 0; i < N; ++ i)
        ans += x;
    return ans;
}

double kuhan(double x)
{
    double ans = 0.0;
    double c = 0.0;

    for (int i = 0; i < N; ++ i)
    {
        double y = x - c;
        double t = ans + y;
        c = (t - ans) - y;
        ans = t;
    }

    return ans;
}


int main()
{
    double x = 0.1;

    printf("Regular sum:    %30.16lf\n", sum(x));
    printf("Kuhan sum:      %30.16lf\n", kuhan(x));

    return 0;
}