#include<bits/stdc++.h>

    using namespace std;

    int main()

    {
        int Test,i ;
        int row,col ;
        cin >> Test ;
        for(i = 1 ; i <= Test ; i++)
        {
            cin >> row >> col ;
            row /= 3 ;
            col /= 3 ;
            cout << row * col << endl ;
        }
        return 0 ;
    }