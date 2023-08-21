#include<bits/stdc++.h>

    using namespace std;

    int main()

    {
        int I,T ;
        cin>>T ;
        for(I = 1 ; I <= T ; I++)
        {
            int n,i = 0,a[200] ;
            cin>>n ;
            int sum = 0, count = 0 ;
            while(i < n)
            {
                cin>>a[i] ;
                sum += a[i] ;
                i++ ;
            }
            double avg = (double)sum/(double) n ;
            for(i = 0 ; i < n ; i++)
            {
                if(avg < a[i])
                {
                    count++ ;
                }
            }
            double percentage = (double)(count*100)/(double)n ;
            printf("%.3lf%%\n",percentage);
        }
           
        return 0 ;
    }