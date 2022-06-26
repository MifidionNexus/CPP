#include <iostream>
#include <cmath>
//faktors, power, root
using namespace std;
float power();
float ops();
float factorial();
float trigonomecktic_functions();
float calculate();
float quadrant_equalitons();
float avg_num();
int main()
{
    string y;
    int x,b ;
    cout<<"calculate numbers(1): \n";
    cout<<"calculate functions(2): \n" ;
    cout<<"calculate quadrant equalitons(3): \n";
    cout<<"average numbers(4): \n";
    cin>>x;
    switch (x)
    {
    case 1:
        calculate();
        cout<<"Continiue porgram?(Y/y): ";
        cin>>y;
        if(y =="Y" || y == "y"){ return main(); }
        break;
    case 2:
        cout<<"result: "<<ops();
        cout<<"\nContiniue porgram?(Y/y): ";
        cin>>y;
        if(y =="Y" || y == "y"){ return main(); }
 
        break;

    case 3:

        cout<<quadrant_equalitons();
        cout<<"Continiue porgram?(Y/y): ";
        cin>>y;
        if(y =="Y" || y == "y"){ return main(); }
 
        break;

    default:
        b = avg_num();
        cout<<b;
        cout<<"\nContiniue porgram?(Y/y): ";
        cin>>y;
        if(y =="Y" || y == "y"){ return main(); }
        break;
    }
}
float calculate()
{
    float num1, num2, result;

    string op;
    cout<<"only + -,*,/ supports. For the end task op should be '=' \n \n \n";
    cout<<"enter your first number :"<<endl;
    num1 = ops();
    result = num1;
    while (true)
    {
        cout<<"Enter your operator :";
        cin>>op;
        if (op == "=")
        {
            cout<<"Result:  "<<result<<endl<<endl;
            
            break;
        }
       
        if(op == "+"){
            num2 = ops();
            result = result + num2;
        }
        
        else if(op == "-"){
             num2 = ops();
            result = result - num2;
        }
        else if(op == "*"){
             num2 = ops();
            result = result * num2;
        }
        else if (op == "/")
        { 
            num2 = ops();
            if(num2 == 0)
            {
                result = INT_MAX;
                cout<<result<<endl;
                break;
            }

            else{ 
            result = result / num2;
            }
            
        }        
        else{
            cout<<"doesn't support.\n ";
        }
        
    
    }
        return 0;


}
float ops()
{
    int op;
    float x;
    float c;
    int a;
    a = 0;
    cout<<"Number - 1 , Power - 2; Root - 3; factorial -4, trigonomecktic functions - 5: ";
    cin>>op;
    switch (op)
    {
    case 1:
        cin>>x;
        c =x;
        break;
    case 2:
        c = power();
        break;
    case 3:
        while(true)
        {
        cin>>x;

        if(x >= 0)
        {
            c = sqrt(x);
        }
        else
        {
            a = a + 1;
            cout<<"Enter pozitve number: ";
            if(a == 3)
            {
                cout<<"You have tried enter negatuve number 3 times, calculater will restrat again))"<<endl;
                main();
            }
        }
        
        }
        break;
    case 4:
        while(true)
        {
        cin>>x;

        if(x >= 0)
        {
            c = factorial();
        }
        else
        {
            a = a + 1;
            cout<<"Enter pozitve number: ";
            if(a == 3)
            {
                cout<<"You have tried enter negatuve number 3 times, calculater will restrat again))"<<endl;
                main();
            }
        }
        
        }
        break;
    case 5:
        c = trigonomecktic_functions();
        break;
    default:
        main();
        break;

    }
    return c;
}
float power()
{
    float a, b, result;
    cout<<"Base number: ";
    cin>>a;
    cout<<"power: ";
    cin>>b;
    result = pow(a , b);
    return result;
}
float factorial()
{
    float x, result;
    cin>>x;
    result = 1;
    for(int i = 1; i <= x; i++ )
    {
        result = result * i;
    }
    return result;
}
float trigonomecktic_functions()
{
    int a;
    cout<<"sin - 1; cos - 2:  ";
    cin>>a;
    float x, y, c;
    cout<<"Enter deegres(enter between 0 - 360): ";
    cin>>x;
    y = x*3.14159/180;
    switch(a)
    {
        case 1:
            if(x == 0 || x == 180 || x == 360){c = 0;}
            else {c = sin(y);}
            break;

        case 2:
            if(x == 90 || x == 270){c = 0;}
            else{c = cos(y);}
            break;
       default:
            break;
    }
    return c;

}
float quadrant_equalitons()
{ 
        //double yazilir burda
    double a, b , c, x, y, z, x1, x2, x3,r1, root;
    string A, B;
    cout<<"ax^2 + bx + c\n";
    cout<<"enter a: ";
    cin>>a;
    cout<<"enter b: ";
    cin>>b;
    cout<<"enter c: ";
    cin>>c;
    x = pow(b, 2);
    y = a * c;
    z = x - 4*y;
    root = sqrt(z);
    r1 = 2 * a;

    if (z < 0)
    {
        cout<<"no root!\n";
    }
    if ( z == 0)
    {
        x1 = -b / r1;
        cout<<"root: "<<x1;
    }
    if( z > 0)
    {
        x2 = (-b + root) / r1;
        x3 = (-b - root) / r1;
        cout<<"first root: "<<x2<<endl;
        cout<<"second root: "<<x3<<endl<<endl;
    }
    
    return 0 ;

}
float avg_num()
{
    int a, b, c, d;
    float result;
    bool con = true;
    cout<<"Only numerical average supports \n";
    cout<<"infinty numbers(1) , certain number of figures(2): ";
    cin>>a;
    switch(a)
    {
        case 1:
            cout<<"For ending loop eneter '0'.\n ";
            d = 0;
            c = 0;
            while(con)
            {   
                cout<<"Enter " << d + 1 << ". number: ";
                cin>>b;
                if(b == 0)
                {
                    con = false;
                }
                c = c + b;
                d = d + 1;
                
            }
            result = c/d;
            break;
        default:
            cout<<"Enter number of digits: ";
            b = 0;
            d = 0;
            cin>>a;
            int arr[a];
            for(int i = 0; i < a; i++)
            {
                cout<<"enter" << i + 1 << ". number: ";
                cin>>c;  
                arr[i] = c;
            }
            for(int i = 0; i < a; i++)
            {
                d = d + arr[i];
            }
            result = d/a;
            break;
        }
    return result;                    
}
//end of program
