#include <iostream>

using namespace std;

double gradient_cost(double y, double y_p)
{
    double dC = 2 * (y_p - y);
    return dC;
}

int main()
{
    double y = 1;
    double y_predict = 0.504421;
    double grad_cost = gradient_cost(y,y_predict);
    cout<<grad_cost<<endl;
}