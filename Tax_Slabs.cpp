#include <iostream>
#include<iomanip>
typedef long long ll ;
using namespace std;

int main()
{
   
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll temp =n;
        ll x;
        ll tax = 0;
        float rate = 0.05;
        for (double i = 250000; i <= 1500000; i += 250000)
        {
            x = n - i;
            if (x > 0)
            {
                if (x >= 250000)
                {
                    tax = 250000 * rate + tax;
                }
                else
                {
                  
                    tax = tax + x * rate;
                }
               
            }
            else
            {
                break;
            }
            rate += 0.05;
            n-=250000;
        }
        if(n>0){
            cout<<1<<endl;
        }
        cout<< n - tax << endl;
        
     
    }
    return 0;
}
