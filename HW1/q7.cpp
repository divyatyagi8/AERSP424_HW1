#include "functions.h"


int main()
{
    double y = 1;
    double w[] = {0.0001,0.0001,0.0001};
    double x[] = {124,31.89,20.945};
    double alpha = 0.001;
    int iteration = 1;
    double* testing = gradient_weights(alpha,y,w,x,sizeof(w)/sizeof(double),iteration);
    for (int i = 0; i < sizeof(w)/sizeof(double); i++)
    {
        cout<<testing[i]<<endl;
    }
    double* updated_w = update_weights(testing,alpha,w,sizeof(w)/sizeof(double),iteration);
    for (int i = 0; i < sizeof(w)/sizeof(double); i++)
    {
        cout<<updated_w[i]<<endl;
    }
    delete[] testing;
    delete[] updated_w;

    return 0;
}