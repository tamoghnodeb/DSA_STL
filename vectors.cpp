#include <bits/stdc++.h>
using namespace std;
void vect()
{
    vector <int> v ;
    v.push_back(1);
    v.emplace_back(2);
    //emplace_back() is faster than push_back() because it constructs the element in place, avoiding unnecessary copies or moves.
    vector <pair<int,int>> vec;
    v.push_back({1,2});
    v.emplace_back(1,2);
    vector <int> v (5,100);//5 spaces of 100
    vector <int> v (5);//5 spaces created
    vector <int> v1 (5,20);
    vector <int> v2(v1);
    vector <int>::iterator it = v.begin();//iterator points to the first element of the vector
    it++;
    cout << *(it) << endl;

    it = it+2;
    cout << *(it) << endl;

    vector <int>::iterator it = v.end();//iterator points to the next position after the last element of the vector
    //if we do it-- then it will point to the last element of the vector
    vector <int>::iterator it = v.rend();
    //reverse the vector and then points to the next position after the last element of the vector which is reversed
    vector <int>::iterator it = v.rbegin();
    //reverse the vector and then points to the first element of the vector which is reversed
    cout << v[0] << v.at[0]<<endl;
    cout << v.back() << " ";//points to the last element of the vector
    //HOW TO PRINT AN ENTIRE VECTOR
    for (int vector <int>::iterator it = v.begin(); it!= v.end();it++)
    {
        cout << *(it) << " ";
    }
    //or we can write it as
    for (auto it = v.begin(); it!= v.end();it++)
    {
        cout << *(it) << " ";
    }
    //or we can write it as
    for (auto it : v)
    {
        cout << it << " ";
    }
    //suppose we have a vector {10,20,30,40,50} and we want to erase only 20 then
    v.erase (v.begin()+1);
    //now the vector will be {10,30,40,50}
    //now if we want to erase 30 and 40 then
    v.erase (v.begin()+1,v.begin()+3);//we have to mention begin+the index of the first element to be erased and begin+the index of the last element to be erased
    //now the vector will be {10,50}
    //INSERT FUNCTION
    vector <int> v2 (2,100);
    v.insert (v2.begin(),300);//inserts 300 at the beginning of the vector
    v.insert (v2.begin()+1,2,10);//inserts 10 two times at the second position of the vector
    vector <int> copy (2,50);
    v.insert (v.begin(),copy.begin(),copy.end());//inserts the entire copy vector at the beginning of the vector v
    cout << v.size() << endl;//size of the vector
    v.pop_back();//removes the last element of the vector
    v1.swap(v2);//swaps the contents of the two vectors
    v.clear();//removes all the elements of the vector
    cout << v.empty() << endl;//returns 1 if the vector is empty and 0 if it is not empty
}
int main()
{
    vect();
    return 0;
}