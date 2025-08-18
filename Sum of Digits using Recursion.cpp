#include<bits/stdc++.h>
using namespace std;

int mystic_Number(int id)
{
    if( id == 0 )
      return 0;
    return ( id%10 )+ mystic_Number( id/10 );

}

int main()
{
    int id;

    cout << "Enter Number : ";
    cin >> id;

    cout << "Sum = " << mystic_Number(id);
}
