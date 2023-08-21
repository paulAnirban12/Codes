#include<bits/stdc++.h>

    using namespace std ;


    int main()
    {
        int T , I;
        cin >> T ;
        for(I = 1 ; I <= T ; I++)
        {
            int C,d ;
            float F ;
            cin >> C >> d ;
            F = (float)(9*C)/5 + 32 ;
            F += (float) d ;
            float newC ;
            newC =(float) (F-32)*5/9 ;
            cout << "Case " << I << ": " ;
            printf("%.2f\n",newC);
        }
        return 0 ;
    }