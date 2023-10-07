#include "functions.h"

class AircraftModel
{
    public:
        int enginetype;
        string name;
};

int main()
{

    double alpha = 0.001;
    double w[] = {0.0001,0.0001,0.0001};

    // M-346 Master
    AircraftModel M346Master; // creates object
    double x_M346Master[] = {124,31.89,20.945};
    M346Master.enginetype = 1;
    M346Master.name = "M-346 Master";

    double* dw1 = gradient_weights(alpha,M346Master.enginetype,w,x_M346Master,3,1);
    double* updated_w1 = update_weights(dw1,alpha,w,3,1);

    for (int i = 0; i < 110; i++)
        {
            double uw1[] = {updated_w1[0], updated_w1[1], updated_w1[2]};
            double* dw1 = gradient_weights(alpha,M346Master.enginetype,uw1,x_M346Master,3,i);
            delete[] updated_w1;
            double* updated_w1 = update_weights(dw1,alpha,uw1,3,i);

        }
    cout<<M346Master.name<<" final w: ["<<updated_w1[0]<<", "<<updated_w1[1]<<", "<<updated_w1[2]<<"]"<<endl;
    double w2[] = {updated_w1[0], updated_w1[1], updated_w1[2]};
    // M-346 Master


    // AT-402B
    AircraftModel AT402B;
    double x_AT402B[] = {74,51.08,9.17};
    AT402B.enginetype = 0;
    AT402B.name = "AT-402B";

    double* dw2 = gradient_weights(alpha,AT402B.enginetype,w2,x_AT402B,3,1);
    double* updated_w2 = update_weights(dw2,alpha,w2,3,1);

    for (int i = 0; i < 110; i++)
        {
            double uw2[] = {updated_w2[0], updated_w2[1], updated_w2[2]};
            double* dw2 = gradient_weights(alpha,AT402B.enginetype,uw2,x_AT402B,3,i);
            delete[] updated_w2;
            double* updated_w2 = update_weights(dw2,alpha,uw2,3,i);

        }
    cout<<AT402B.name<<" final w: ["<<updated_w2[0]<<", "<<updated_w2[1]<<", "<<updated_w2[2]<<"]"<<endl;
    double w3[] = {updated_w2[0], updated_w2[1], updated_w2[2]};
    // AT-402B

    // MB-326
    AircraftModel MB326;
    double x_MB326[] = {103,34.67,8.3};
    MB326.enginetype = 1; 
    MB326.name = "MB-326";

    double* dw3 = gradient_weights(alpha,MB326.enginetype,w3,x_MB326,3,1);
    double* updated_w3 = update_weights(dw3,alpha,w3,3,1);

    for (int i = 0; i < 110; i++)
        {
            double uw3[] = {updated_w3[0], updated_w3[1], updated_w3[2]};
            double* dw3 = gradient_weights(alpha,MB326.enginetype,uw3,x_MB326,3,i);
            delete[] updated_w3;
            double* updated_w3 = update_weights(dw3,alpha,uw3,3,i);

        }
    cout<<MB326.name<<" final w: ["<<updated_w3[0]<<", "<<updated_w3[1]<<", "<<updated_w3[2]<<"]"<<endl;
    double w4[] = {updated_w3[0], updated_w3[1], updated_w3[2]};
    // MB-326

    // AT-502B
    AircraftModel AT502B;
    double x_AT502B[] = {77,52,9.4};
    AT502B.enginetype = 0;
    AT502B.name = "AT-502B"; 

    double* dw4 = gradient_weights(alpha,AT502B.enginetype,w4,x_AT502B,3,1);
    double* updated_w4 = update_weights(dw4,alpha,w4,3,1);

    for (int i = 0; i < 110; i++)
        {
            double uw4[] = {updated_w4[0], updated_w4[1], updated_w4[2]};
            double* dw4 = gradient_weights(alpha,AT502B.enginetype,uw4,x_AT502B,3,i);
            delete[] updated_w4;
            double* updated_w4 = update_weights(dw4,alpha,uw4,3,i);

        }
    cout<<AT502B.name<<" final w: ["<<updated_w4[0]<<", "<<updated_w4[1]<<", "<<updated_w4[2]<<"]"<<endl;   
    double w5[] = {updated_w4[0], updated_w4[1], updated_w4[2]};
    //AT-502B

    // MB-339
    AircraftModel MB339;
    double x_MB339[] = {104,35.63,13};
    MB339.enginetype = 1;   
    MB339.name = "MB-339";

    double* dw5 = gradient_weights(alpha,MB339.enginetype,w5,x_MB339,3,1);
    double* updated_w5 = update_weights(dw5,alpha,w5,3,1);

    for (int i = 0; i < 110; i++)
        {
            double uw5[] = {updated_w5[0], updated_w5[1], updated_w5[2]};
            double* dw5 = gradient_weights(alpha,MB339.enginetype,uw5,x_MB339,3,i);
            delete[] updated_w5;
            double* updated_w5 = update_weights(dw5,alpha,uw5,3,i);

        }
    cout<<MB339.name<<" final w: ["<<updated_w5[0]<<", "<<updated_w5[1]<<", "<<updated_w5[2]<<"]"<<endl;   
    double w6[] = {updated_w5[0], updated_w5[1], updated_w5[2]};
    // MB-339

    // AT-602
    AircraftModel AT602;
    double x_AT602[] = {92,56,12.5};
    AT602.enginetype = 0;
    AT602.name = "AT-602";   

    double* dw6 = gradient_weights(alpha,AT602.enginetype,w6,x_AT602,3,1);
    double* updated_w6 = update_weights(dw6,alpha,w6,3,1);

    for (int i = 0; i < 110; i++)
        {
            double uw6[] = {updated_w6[0], updated_w6[1], updated_w6[2]};
            double* dw6 = gradient_weights(alpha,AT602.enginetype,uw6,x_AT602,3,i);
            delete[] updated_w6;
            double* updated_w6 = update_weights(dw6,alpha,uw6,3,i);

        }
    cout<<AT602.name<<" final w: ["<<updated_w6[0]<<", "<<updated_w6[1]<<", "<<updated_w6[2]<<"]"<<endl;   
    double w7[] = {updated_w6[0], updated_w6[1], updated_w6[2]};
    // AT-602

    // L159
    AircraftModel L159;
    double x_L159[] = {130,31.29,17.637};
    L159.enginetype = 1;
    L159.name = "Aero L-159 Alca";

    double* dw7 = gradient_weights(alpha,L159.enginetype,w7,x_L159,3,1);
    double* updated_w7 = update_weights(dw7,alpha,w7,3,1);

    for (int i = 0; i < 110; i++)
        {
            double uw7[] = {updated_w7[0], updated_w7[1], updated_w7[2]};
            double* dw7 = gradient_weights(alpha,L159.enginetype,uw7,x_L159,3,i);
            delete[] updated_w7;
            double* updated_w7 = update_weights(dw7,alpha,uw7,3,i);

        }
    cout<<L159.name<<" final w: ["<<updated_w7[0]<<", "<<updated_w7[1]<<", "<<updated_w7[2]<<"]"<<endl;   
    double w8[] = {updated_w7[0], updated_w7[1], updated_w7[2]};
    // L159

    // AT504
    AircraftModel AT504;
    double x_AT504[] = {73,52,9.6};
    AT504.enginetype = 0;  
    AT504.name = "AT-504";

    double* dw8 = gradient_weights(alpha,AT504.enginetype,w8,x_AT504,3,1);
    double* updated_w8 = update_weights(dw8,alpha,w8,3,1);

    for (int i = 0; i < 110; i++)
        {
            double uw8[] = {updated_w8[0], updated_w8[1], updated_w8[2]};
            double* dw8 = gradient_weights(alpha,AT504.enginetype,uw8,x_AT504,3,i);
            delete[] updated_w8;
            double* updated_w8 = update_weights(dw8,alpha,uw8,3,i);

        }
    cout<<AT504.name<<" final w: ["<<updated_w8[0]<<", "<<updated_w8[1]<<", "<<updated_w8[2]<<"]"<<endl; 
    double fw[] = {updated_w8[0], updated_w8[1], updated_w8[2]};

    // SF50 Vision
    AircraftModel SF50; // creates object
    double x_SF50[] = {87,38.67,6};
    SF50.name = "SF50 Vision";

    double y_pred1 = sigmoid(dot_product(fw,x_SF50,3));
    //cout<<y_pred1<<endl;
    
    if (y_pred1 > 0.5)
    {
        cout<<SF50.name<<" Engine Type: Jet"<<endl;
    }

    else
    {
        cout<<SF50.name<<" Engine Type: Turboprop"<<endl;
    }  

    // 208 Caravan
    AircraftModel C208; // creates object
    double x_208C[] = {79,52.08,8};
    C208.name = "208 Caravan";

    double y_pred2 = sigmoid(dot_product(fw,x_208C,3));
    //cout<<y_pred2<<endl;
    
    if (y_pred2 > 0.5)
    {
        cout<<C208.name<<" Engine Type: Jet"<<endl;
    }

    else
    {
        cout<<C208.name<<" Engine Type: Turboprop"<<endl;
    }  

    // Aero L-29 Delfin
    AircraftModel L29; // creates object
    double x_L29[] = {92,33.75,7.804};
    L29.name = "Aero L-29 Delfin";

    double y_pred3 = sigmoid(dot_product(fw,x_L29,3));
    //cout<<y_pred3<<endl;
    
    if (y_pred3 > 0.5)
    {
        cout<<L29.name<<" Engine Type: Jet"<<endl;
    }

    else
    {
        cout<<L29.name<<" Engine Type: Turboprop"<<endl;
    }  

    // AT-802U
    AircraftModel AT802; // creates object
    double x_AT802[] = {91,59.25,16};
    AT802.name = "AT-802U";

    double y_pred4 = sigmoid(dot_product(fw,x_AT802,3));
    //cout<<y_pred4<<endl;
    
    if (y_pred4 > 0.5)
    {
        cout<<AT802.name<<" Engine Type: Jet"<<endl;
    }

    else
    {
        cout<<AT802.name<<" Engine Type: Turboprop"<<endl;
    }  
}


