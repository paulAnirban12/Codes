#include<bits/stdc++.h>

    using namespace std;

    int main()

    {
        long long int a,b ;
        while(scanf("%lld %lld",&a,&b)!=EOF)
        {
            long long int dif = a - b  ;
            if(dif < 0)
            {
                dif *= -1 ;
            }
            cout << dif << endl ;
        }
        return 0 ;
    }