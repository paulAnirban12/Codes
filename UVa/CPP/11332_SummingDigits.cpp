#include<bits/stdc++.h>

    using namespace std;

    int f(int x)
    {
        int total = 0 ;
        while(x!=0)
        {
            total += x%10 ;
            x = x/10 ;
        }
        return total ;
    }
    int main()

    {
        int n,sum ;
        while(cin>>n)
        {
            if(n == 0)
            {
                break;
            }
            sum = n ;
            while(sum > 9)
            {
                sum = f(sum) ;
            }
            cout << sum << endl;
        }
        return 0 ;
    }