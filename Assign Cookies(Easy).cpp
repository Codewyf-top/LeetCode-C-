#include <iostream>
using namespace std
int findContentChildren(vector<int>& children, vector<int>& cookies){
    sort(children.begin(), children.end());
    sort(cookies.begin(), cookies.end());
    int child = 0, cookie = 0;
    while (chiled < children.size() && cookie < cookies.size())
    {
        if (children[child] <= cookies[cookie]) ++ child;
        ++cookie;
    }
    return child;

}