#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int start, first, second, third;
    
    int total ;
    
    while(scanf("%d %d %d %d",&start,&first,&second,&third)!=EOF)
    {
        if(start == 0 && first == 0 && second == 0 && third == 0)
        {
            break;
        }
        else
        {
            total = 1080 + ((start - first + 40)%40  + (second - first + 40)%40  + (second - third + 40)%40 ) * 9;
        }
        cout << total << endl ;
    }
}