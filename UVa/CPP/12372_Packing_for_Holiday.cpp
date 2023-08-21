#include<bits/stdc++.h>

    using namespace std;

    int main()

    {
        int T,I ;
        int L,W,H ;
        cin>> T ;
        for(I = 1 ; I <= T ; I++)
        {
            int quality ;
            cin >> L >> W >> H ;
            if(L <= 20 && H <= 20 && W <= 20)
            {
                quality = 1 ;
            }
            else
            {
                quality = 0 ;
            }
            if(quality == 1)
            {
                cout << "Case " << I << ": good" << endl ;
            }
            else
            {
                cout << "Case " << I << ": bad" << endl ;
            }
        }
        return 0 ;
    }