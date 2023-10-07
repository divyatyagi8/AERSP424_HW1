// SF50 Vision
    AircraftModel SF50; // creates object
    double x_SF50[] = {87,38.67,6};
    SF50.name = "SF50 Vision";

    double wfinal1[] = {updated_w8[0], updated_w8[1], updated_w8[2]};
    double y_pred1 = sigmoid(dot_product(wfinal1,x_SF50,3));
    cout<<y_pred1<<endl;
    
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

    double wfinal2[] = {updated_w8[0], updated_w8[1], updated_w8[2]};
    double y_pred2 = sigmoid(dot_product(wfinal2,x_208C,3));
    cout<<y_pred2<<endl;
    
    if (y_pred1 > 0.5)
    {
        cout<<C208.name<<" Engine Type: Jet"<<endl;
    }

    else
    {
        cout<<C208.name<<" Engine Type: Turboprop"<<endl;
    }  