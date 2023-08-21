#include<bits/stdc++.h>

    using namespace std;

    int main()

    {
        int a,b,i,channel ;
        while(cin>>a>>b)
        {
            if(a == -1 && b == -1)
                break;
            //channel = 0 ;
            if(a<b)
            {
                if(b-a>50)
                {
                    a+= 100 ;
                    channel = a-b ;
                }
                else
                {
                    channel = b-a ;
                }
            }
            else
            {
                if(a-b > 50)
                {
                    b += 100 ;
                    channel = b-a ;
                }
                else
                {
                    channel = a-b ;
                }
            }

            cout << channel << endl ;
        }
        return 0 ;
    }