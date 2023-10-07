#include <iostream>
#include <cmath>

using namespace std;

double dot_product(double w[], double x[], int size)
{
    if ((sizeof(w)/sizeof(double))!=(sizeof(x)/sizeof(double)))
    {
        cout<<"Size of two vectors is not equal, therefore dot product can not be calculated."<<endl;
    }
    double dotproduct = 0;
    for (int i = 0; i < size; i++)
    dotproduct += w[i] * x[i];
    return dotproduct;
}

double sigmoid(double z)
{
    double sigma = 1/(1+exp(-z));
    return sigma;
}

double gradient_sigmoid(double sigma)
{
    double grad_sigma = sigma * (1-sigma);
    return grad_sigma;
}

double gradient_cost(double y, double y_p)
{
    double dC = 2 * (y_p - y);
    return dC;
}

double* gradient_weights(double alpha,double y, double w[], double x[],int size, int iteration)
{
    double* dw = new double[size];
    for (int i = 0; i < size; i++)
    {
        dw[i] = (2*(sigmoid(dot_product(w,x,size))-y) * gradient_sigmoid(sigmoid(dot_product(w,x,size))))*x[i];
    }
    return dw;
}

double* update_weights(double *testing, double alpha, double w[], int size, int iteration)
{
    double* uw = new double[size];
    uw[0]=w[0];
    for (int i = 0; i < size; i++)
    {
        uw[i] = w[i] - alpha*testing[i];
    }
    return uw;
}

