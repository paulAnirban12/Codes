#include<bits/stdc++.h>

    using namespace std;

    int main()

    {
        int test,i,N,M,X,Y ;
        string direction ;
        while((scanf("%d",&test))!= EOF) 
        
        {
            if(test == 0)
            break ;
            cin>> N >> M ;
        
        for(i = 1 ; i <= test ; i++)
        {
            cin >> X >> Y ;
            if(X == N || Y == M)
            direction = "divisa" ;
            else if(X > N && Y > M)
            direction = "NE" ;
            else if(X < N && Y > M)
            direction = "NO" ;
            else if(X < N && Y < M)
            direction = "SO" ;
            else
            direction = "SE" ;
            cout << direction << endl ;
        }
        }
        return 0 ;
    }