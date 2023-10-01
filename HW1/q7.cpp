#include "functions.h"

double* gradient_weights(double alpha,double y, double w[], double x[],int size)
{
    double* dw = new double[size];
    for (int i = 0; i < size; i++)
    {
        dw[i] = (2*(sigmoid(dot_product(w,x,size))-y) * gradient_sigmoid(sigmoid(dot_product(w,x,size))))*x[i];
    }
    return dw;
}

double* update_weights(double *testing, double alpha, double w[], int size)
{
    double* uw = new double[size];
    uw[0]=w[0];
    for (int i = 0; i < size; i++)
    {
        uw[i] = w[i] - alpha*testing[i];
    }
    return uw;
}

int main()
{
    double y = 1;
    double w[] = {0.0001,0.0001,0.0001};
    double x[] = {124,31.89,20.945};
    double alpha = 0.001;
    double* testing = gradient_weights(alpha,y,w,x,sizeof(w)/sizeof(double));
    for (int i = 0; i < sizeof(w)/sizeof(double); i++)
    {
        cout<<testing[i]<<endl;
    }
    double* updated_w = update_weights(testing,alpha,w,sizeof(w)/sizeof(double));
    for (int i = 0; i < sizeof(w)/sizeof(double); i++)
    {
        cout<<updated_w[i]<<endl;
    }
    delete[] testing;
    delete[] updated_w;

    return 0;
}