#include <iostream>

using namespace std;

double dot_product(double w[], double x[], int size)
{
    double dotproduct = 0;
    for (int i = 0; i < size; i++)
    dotproduct += w[i] * x[i];
    return dotproduct;
}

int main()
{
    double w[] = {0.0001,0.0001,0.0001};
    double x[] = {124,31.89,20.945};
    
    
    if ((sizeof(w)/sizeof(double))!=(sizeof(x)/sizeof(double)))
    {
        cout<<"Size of two vectors is not equal, therefore dot product can not be calculated."<<endl;
    }
    double z = dot_product(w,x,sizeof(w)/sizeof(double));
    cout<<z<<endl;
}