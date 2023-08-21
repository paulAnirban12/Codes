#include<bits/stdc++.h>

    using namespace std;

    int main()

    {
        int N,I = 0,i ;
        int events,sum ;
        while(cin>>N)
        {
            if(N == 0)
                break;
            int given = 0 ;
            int notgiven = 0 ;
            I++ ;
            for(i = 1 ; i <= N ; i++)
            {
                cin >> events ;
                if(events > 0)
                {
                    notgiven++ ;
                }
                else
                {
                    given++ ;
                }
            }
            cout << "Case " << I << ": " << notgiven-given << endl ;
        }
        return 0 ;
    }