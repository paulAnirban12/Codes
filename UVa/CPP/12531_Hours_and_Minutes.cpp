#include<bits/stdc++.h>

    using namespace std;

    int main()

    {
        int A ;
        while(scanf("%d",&A)!=EOF)
        {
            if(A < 0 || A > 180)
                break ;
            if(A%6 == 0)
                cout << "Y" << endl ;
            else 
                cout << "N" << endl;
        }
        return 0 ;
    }