#include<bits/stdc++.h>

    using namespace std;

    int main()

    {
        int I,T,a,b,i,sum ;
        cin>>T ;
        for(I = 1 ; I <= T ; I++)
        {
            sum = 0 ;
            cin>>a>>b ;
            if(a>b)
            {
                for(i = b ; i <= a ; i++)
                {
                    if(i%2 != 0)
                    {
                        sum += i ;
                    }
                }
            }
            else
            {
                for(i = a ; i <= b ; i++)
                {
                    if(i%2 != 0)
                    {
                        sum += i ;
                    }
                }
            }
            cout << "Case " << I << ": " << sum << endl ;
        }
        return 0 ;
    }