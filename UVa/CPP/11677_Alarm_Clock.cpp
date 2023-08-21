#include<bits/stdc++.h>

    using namespace std;

    int main()

    {
        int H1,H2,M1,M2 ;
        int current, alarm,sleep ;
        while(scanf("%d %d %d %d",&H1,&M1,&H2,&M2)!=EOF)
        {
            current = 0 ;
            alarm = 0 ;
            if(H1 == 0 && M1 == 0 && H2 == 0 && M2 == 0)
            {
                break;
            }
            else
            {
                if(H2 < H1)
                {
                    H2 += 24 ;
                }
                else if(H2 == H1)
                {
                    if(M2 < M1)
                    {
                        H2 += 24 ;
                    }
                }
                current = H1*60 + M1 ;
                alarm = H2 *60 + M2 ;
                sleep = alarm - current ;
                cout << sleep << endl ;
            }
        }   
        return 0 ;
    }