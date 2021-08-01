#include "bits/stdc++.h"

using namespace std;

class heap{
private:
  vector<int> v = {-1};
  void heapify(int idx)
  {
    int last = v.size()-1;
    int min_idx = idx;
    int c1 = 2*idx;
    int c2 = c1+1;
    if(c1 <= last && v[c1] < v[min_idx])
      min_idx = c1;
    if(c2 <= last && v[c2] < v[min_idx])
      min_idx = c2;

    if(min_idx != idx)
    {
      swap(v[min_idx],v[idx]);
      heapify(min_idx);
    }
  }
public:
  void push(int d)
  {
     v.push_back(d);
     int idx = v.size()-1;

     while(idx > 1 && v[idx] < v[idx/2])
     {
      swap(v[idx],v[idx/2]);
      idx=idx/2;
     }
  }
  int get()
  {
    return v[1];
  }
  void pop()
  {
    int last = v.size()-1;
    swap(v[1],v[last]);
    v.pop_back();
    heapify(1);
  }
  bool empty()
  {
    return v.size()==1;
  }
};

int main()
{
  heap h;
  h.push(12);
  h.push(10);
  h.push(40);
  h.push(15);
  h.push(32);
  h.push(1);
  h.push(12);
  while(!h.empty())
  {
    cout << h.get() << ' ';
    h.pop();
  }
}