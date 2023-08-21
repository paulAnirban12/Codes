#include<bits/stdc++.h>

    using namespace std;

    int main()

    {
        int I,T,N,i ;
        int a[100],high,low ;
        cin >> T ;
        for(I=1 ; I <= T ; I++)
        {
            high = 0 ;
            low = 0 ;
            cin >> N ;
            for(i = 0 ; i < N ; i++)
            {
                cin >> a[i] ;
            }
            int jump = a[0] ;
            for(i = 1 ; i < N ; i++)
            {
                if(jump < a[i])
                {
                    high++ ;
                }
                else if (jump > a[i])
                {
                    low++ ;
                }
                else
                {
                    high = high ;
                    low = low ;
                }
                jump = a[i] ;
            }
            cout << "Case " << I << ": " << high << " " << low << endl ;
        }
        return 0 ;
    }