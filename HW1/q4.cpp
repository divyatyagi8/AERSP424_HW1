#include <iostream>
#include "functions.h"

using namespace std;

int main()
{
    double w[] = {0.0001,0.0001,0.0001};
    double x[] = {124,31.89,20.945};
    double z = dot_product(w,x,sizeof(w)/sizeof(double));
    cout<<z<<endl;
}