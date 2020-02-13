//
//  Standard.cpp
//  ParcelDeliveryCost
//
//  Created by chin on 12/02/2020.
//  Copyright © 2020 chin. All rights reserved.
//

#include "Standard.hpp"
#include "People.hpp"
Standard::Standard(People s, People r, Parcel p): sender(s), recipient(r), p(p)
{
    
}

double Standard::calcCost()
{
    cout<<"------   Sender   ------"<<endl;
    sender.printInfo();
    cout<<"\n";
    cout<<"-----  Recipient   -----"<<endl;
    recipient.printInfo();
    cout<<"\n";
    cout<<"----  Delivery Cost ----"<<endl;
    cout<< "£";
    return p.getWeight() * 2.6;
}
