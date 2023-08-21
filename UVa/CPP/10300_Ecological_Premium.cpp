#include<bits/stdc++.h>

    using namespace std;

    int main()

    {
        int I,T ;
        while (scanf("%d",&T)!=EOF)
        {
            for(I = 1 ; I <= T ; I++)
            {
                int farmers,i ;
                cin>> farmers ;
                int sum = 0 ;
                for(i = 1 ; i <= farmers ; i++)
                {
                    int farm, animals, eco_friendliness ;
                    cin >> farm >> animals >> eco_friendliness ;
                    int premium = farm * eco_friendliness ;
                    sum += premium ;

                }
                cout << sum << endl ;
            }
        }
        
        return 0 ;
    }