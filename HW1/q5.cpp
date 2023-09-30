#include <iostream>
#include <cmath>

using namespace std;

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

int main()
{
    double z = 0.0176835;
    double sigma_z = sigmoid(z);
    double dsigma_z = gradient_sigmoid(sigma_z);

    cout<<sigma_z<<"\n"<<dsigma_z<<endl;
}