#include <iostream>
using namespace std;
float c_number(int& number);//city number
float y_harm(float& warranty, float& compulsory);
float franch(float& tfranc, float franc ,float paid);
float icbari();
float konullu();
float k_harm(float& warrant , float& compulsory);
float yy_harm(float& warranty);

int main()
{
    int i;
    cout<<"which tipe of insurance do you use?"<<endl;
    cout<<"compulsory - 1 , volunteer - 2: ";
    cin>>i;
    switch (i)
    {
    case 1:
        icbari();
        break;
    
    default:
        konullu();
        break;
    }

}
float icbari()
{
    float y_warranty, difference, y_damage, franchise, total_franchise, given, balce;
    int city_number;
    cout<<"Enter city code: ";
    cin>>city_number;
    c_number(city_number);
    

    switch(city_number)
    {
    case 1:

        cout<<"Monthly payment: 50. "<<endl;
        y_warranty = 25000;
        franchise = y_warranty / 100;
        cout<<"Your franchise is: "<<franchise<<endl;
       
        total_franchise = yy_harm(y_warranty);//nece defe odendiyi hesablanir
        difference = (25000 - y_warranty);//vesaitden cixan butun  mebleg ilki say kimi davaminda pul olur
        balce = y_warranty;       
        given = franch(total_franchise , franchise ,difference);
        cout<<"given: "<<given<< " franchise: "<<total_franchise<<" last balance: "<<balce; 
        break;
    case 2:
        cout<<"Monthly payment: 40."<<endl;
        y_warranty = 20000;
        franchise = y_warranty / 100;
        cout<<"Your franchise is: "<<franchise<<endl;
        
        total_franchise = yy_harm(y_warranty);//nece defe odendiyi hesablanir
        difference = (20000 - y_warranty);//vesaitden cixan butun  mebleg ilki say kimi davaminda pul olur
        balce = y_warranty;
        given = franch(total_franchise , franchise ,difference);
        cout<<"given: "<<given<< " franchise: "<<total_franchise<<" last balance: "<<balce ;     
       
        break;
    default:
        cout<<"Monthly payment: 30.";
        y_warranty = 15000;
        franchise = y_warranty / 100;
        cout<<"Your franchise is: "<<franchise<<endl;
        
        total_franchise = yy_harm(y_warranty);//nece defe odendiyi hesablanir
        balce = y_warranty;
        difference = (15000 - y_warranty);//vesaitden cixan butun  mebleg ilki say kimi davaminda pul olur
        given = franch(total_franchise , franchise ,difference);
        cout<<"given: "<<given<< " franchise: "<<total_franchise<<" last balance: "<<balce ;
       
        break;

    }
    return 0;
}
float konullu()
{    
    float y_warranty, difference, y_damage, franchise, total_franchise, given, balce, total_franchise2, warranty, given2, given3;
    float volounteer, franchise2, franchh;
    int city_number;
    cout<<"Enter city code: ";
    cin>>city_number;
    c_number(city_number);
    float compulsoryyy  ;
    

    switch(city_number)
    {
    case 1:
        cout<<"Enter volunteer number: ";
        cin>>volounteer;
        cout<<"Monthly payment: 50. "<<endl;
        y_warranty = 25000 + volounteer;
        warranty = 25000 + volounteer;
        franchise = 25000 / 100;
        franchise2 = (volounteer * 0.33) / 100;
        cout<<"Your franchise compulsory is: "<<franchise<<endl<<" your volunteer: "<<franchise2<<endl;
        
    
        compulsoryyy  = 25000;
    
        total_franchise = k_harm(y_warranty, compulsoryyy);

        total_franchise2 = y_harm(y_warranty, compulsoryyy);
        
        difference = warranty - y_warranty;
        total_franchise = total_franchise * franchise;
        total_franchise2 = total_franchise2 * franchise2;
        franchh = total_franchise + total_franchise2;
        given = difference - franchh;
        cout<<"given: "<<given<<" franch: "<<franchh<<" last money: "<<y_warranty ;
        break;
    case 2:
        cout<<"Enter volunteer number: ";
        cin>>volounteer;
        cout<<"Monthly payment: 40. "<<endl;
        y_warranty = 20000 + volounteer;
        warranty = 20000 + volounteer;
        franchise = 20000 / 100;
        franchise2 = (volounteer * 0.33) / 100;
        cout<<"Your franchise compulsory is: "<<franchise<<endl<<" your volunteer: "<<franchise2<<endl;
        
    
        compulsoryyy  = 20000;
    
        total_franchise = k_harm(y_warranty, compulsoryyy);

        total_franchise2 = y_harm(y_warranty, compulsoryyy);
        
        difference = warranty - y_warranty;
        total_franchise = total_franchise * franchise;
        total_franchise2 = total_franchise2 * franchise2;
        franchh = total_franchise + total_franchise2;
        given = difference - franchh;
        cout<<"given: "<<given<<" franch: "<<franchh<<" last money: "<<y_warranty ;
       
        break;
    default:
        
        cout<<"Enter volunteer number: ";
        cin>>volounteer;
        cout<<"Monthly payment: 30. "<<endl;
        y_warranty = 15000 + volounteer;
        warranty = 15000 + volounteer;
        franchise = 15000 / 100;
        franchise2 = (volounteer * 0.33) / 100;
        cout<<"Your franchise compulsory is: "<<franchise<<endl<<" your volunteer: "<<franchise2<<endl;
        
    
        compulsoryyy  = 15000;
    
        total_franchise = k_harm(y_warranty, compulsoryyy);

        total_franchise2 = y_harm(y_warranty, compulsoryyy);
        
        difference = warranty - y_warranty;
        total_franchise = total_franchise * franchise;
        total_franchise2 = total_franchise2 * franchise2;
        franchh = total_franchise + total_franchise2;
        given = difference - franchh;
        cout<<"given: "<<given<<" franch: "<<franchh<<" last money: "<<y_warranty ;
        break;

    }
    return 0;
    
}

float y_harm(float& warranty, float& compulsory)
{
    float damage;
    float c = 0;
    string y;
    if(compulsory == 0)
    {
        c = c - 1;
    }
    while(true)
    {
        c = c + 1;
        
        cout<<"Within a year, the fire broke out again? (Y/N)";
        cin>>y;
        if(y == "N" || y == "n")
        {
            break;
        }
        cout<<"Enter your damge: ";
        cin>>damage;
        if( damage >= warranty)
        {
            warranty = 0;
            break;
        }
        warranty = warranty - damage;
        
    }
    return c;
}
float franch(float& tfranc,float franc ,float paid)
{
    tfranc = franc * tfranc;
    paid = paid - tfranc;
    return paid;
}
float c_number(int& number)
{
    int x , y, z;
    if(number == 12)
    {
        number = 1;
    }
    else if(number == 18 || number == 22 || number == 36)
    {
        number = 2;
    }
    else
    {
        number = 3;
    }
    return 0;
}
float k_harm(float& warrant, float& compulsory)
{
    float damage;
    float dmg_calc = 0;
    int c = 0;
    string y;
    while(true)
    {
        c = c + 1;
        cout<<"Enter your damage: ";
        cin>>damage;
        dmg_calc = dmg_calc + damage;
        
        if(dmg_calc > compulsory)
        {
            warrant = warrant - damage;
            break;
        }
        
        
        
        warrant = warrant - damage;
        cout<<"Within a year, the fire broke out again? (Y/N)";
        cin>>y;
        if(y == "N" || y == "n")
        {
            if(dmg_calc <= compulsory)
            {
                compulsory = 0;
            }
            break;
        }
        
    }
    return c;
}
float yy_harm(float& warranty)
{
    float damage;
    int c = 0;
    string y;
    while(true)
    {
        c = c + 1;
        cout<<"Enter your damge: ";
        cin>>damage;
        if( damage >= warranty)
        {
            warranty = 0;
            break;
        }
        warranty = warranty - damage;
        cout<<"Within a year, the fire broke out again? (Y/N)";
        cin>>y;
        if(y == "N" || y == "n")
        {
            break;
        }
        
    }
    return c;
}//end of program 
