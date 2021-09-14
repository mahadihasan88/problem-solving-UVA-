#include<bits/stdc++.h>
using namespace std;

int main()
{


    list<int> mlist;
    list<int >llist;
    list<int> ::iterator it;
    for(int i=1; i<=5; i++)
        mlist.push_back(i);

    it=mlist.begin();
    it++;
    mlist.insert(it,30);

    mlist.insert(it,2,50);
    it--;
    vector <int> v(2,60);
    mlist.insert(it,v.begin(),v.end());
    cout<<endl;
    for(it=mlist.begin(); it!=mlist.end(); it++)
        cout<<*it<<" ";
    cout<<endl;
    return 0;

}
