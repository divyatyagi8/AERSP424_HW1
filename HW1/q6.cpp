#include <iostream>
#include "functions.h"

using namespace std;


int main()
{
    double y = 1;
    double y_predict = 0.504421;
    double grad_cost = gradient_cost(y,y_predict);
    cout<<grad_cost<<endl;
}