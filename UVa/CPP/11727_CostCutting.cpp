#include<bits/stdc++.h>

    using namespace std;

    int main()

    {
        int T,I,A,B,C,mid ;
        cin >> T ;
        for(I = 1 ; I <= T ; I++)
        {
            cin >> A >> B >> C ;
            if(A > B && A < C || A > C && A < B)
                mid = A ;
            else if(A < B && B < C || B > C && A > B)
                mid = B ;
            else
                mid = C ;
            cout << "Case " << I << ": " << mid << endl ;
        }
        return 0 ;
    }