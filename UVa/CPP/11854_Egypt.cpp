#include<bits/stdc++.h>

    using namespace std;

    int main()

    {
        int A,B,C ;
        while (cin>>A>>B>>C)
        {
            if(A == 0 && B == 0 && C == 0)
            {
                break;
            }
            A *= A ;
            B *= B ;
            C *= C ;
            if(A == B + C || B == A + C || C == A + B)
            {
                cout << "right" << endl ;
            }
            else
            {
                cout << "wrong" << endl ;
            }
        }
        
        return 0 ;
    }