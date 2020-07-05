#include <iostream>
#include <algorithm>
#include <string>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int  total_cal=0;
    int a,b,c,d;
    cin >> a >> b >> c >>d ;
char cal[100000];

    cin >> cal;

        for (int j=0 ; j<strlen(cal) ; j++)

        {

            if (cal[j]=='1')
            {
                total_cal+=a;
            }
            else  if (cal[j]=='2')
            {
                total_cal+=b;

            }

            else       if (cal[j]=='3')
            {
                total_cal+=c;

            }
            else if (cal[j]=='4')
            {
                total_cal+=d;
            }

        }


    cout << total_cal;
}




