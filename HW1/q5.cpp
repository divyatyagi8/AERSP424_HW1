#include <iostream>
#include "functions.h"

using namespace std;

int main()
{
    double z = 0.0176835;
    double sigma_z = sigmoid(z);
    double dsigma_z = gradient_sigmoid(sigma_z);

    cout<<sigma_z<<"\n"<<dsigma_z<<endl;
}