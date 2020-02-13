//
//  main.cpp
//  ParcelDeliveryCost
//
//  Created by chin on 12/02/2020.
//  Copyright © 2020 chin. All rights reserved.
//

#include <iostream>
#include <vector>

#include "People.hpp"
#include "Parcel.hpp"
#include "Standard.hpp"
#include "TwoDay.hpp"
#include "OneDay.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    //cout << "Hello, World!\n";
    People s("Muhammad Ahmed", "4 Newick Road", "London", "E5 0RR");
    People r("Yusuf Bismillah", "2a Southwold Road", "London", "E5 9OR");
    Parcel q (32.0);
    
    
    vector<Standard*> v;
    
    
    TwoDay td(s,r,q);
    Standard* td1 = &td;
    
    OneDay od(s,r,q);
    Standard* od1 = &od;
    
    Standard* st1;
    st1 = new Standard (s, r, q);
    v.push_back(st1);
    v.push_back(td1);
    v.push_back(od1);
    
    for(int i=0; i<v.size(); i++)
     {
         cout <<"Cost of Delivery £"<< v[i]->calcCost() << i << endl;;
     }
     cout << "\n" << endl;
    
    


    
    return 1;
}
