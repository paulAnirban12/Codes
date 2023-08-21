#include<bits/stdc++.h>

    using namespace std;

    int main()

    {
        int I,T,N,i ;
        int speed,max ;
        cin >> T ;
        for(I = 1 ; I <= T ; I++)
        {
            max = 0 ;
            cin >> N ;
            for(i = 1 ; i <= N ; i++)
            {
                cin >> speed ;
                if(speed > max)
                {
                    max = speed ;
                }
            }
            cout << "Case " << I << ": " << max << endl ;
        }
        return 0 ;
    }