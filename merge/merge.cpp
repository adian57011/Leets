//this is a solve for merging two arrays.

#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>arr)
{
    for(int i = 0; i < arr.size();i++)
    {
        cout << arr[i]<<endl;
    }
}

int main()
{
    int a[5] = {2,4,6,8,10};
    int b[6] = {1,3,5,7,9,11};
    vector <int> c;

    int i = 0, j = 0 , k = 0;

    while(i<=5 && j <= 6)
    {
        if(a[i]<= b[j])
        {
            c.push_back(a[i++]);
        }
        else
        {
            c.push_back(b[j++]);
        }
    }

    for( ;i<=5;i++)
    {
        c.push_back(a[i]);
    }

    for( ;i<=5;i++)
    {
        c.push_back(b[j]);
    }

    display(c);


    return 0;
}
