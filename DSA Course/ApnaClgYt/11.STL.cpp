#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <queue>
#include <map>
#include <unordered_map>
#include <set>
#include <algorithm>

using namespace std;

// int main()
// {
//   vector<int> v = {1, 2, 3, 4, 5};

//   vector<int>::iterator itr;
//   for (itr = v.begin(); itr != v.end(); itr++)
//   {
//     cout << *itr << endl;
//   }
//   return 0;
// }
// int main()
// {
//   vector<int> v = {1, 2, 3, 4, 5};

//   vector<int>::reverse_iterator itr;
//   for (itr = v.rbegin(); itr != v.rend(); itr++)
//   {
//     cout << *itr << endl;
//   }
//   return 0;
// }

// int main()
// {
//   list<int> l;
//   l.push_back(1);
//   l.push_back(2);
//   l.push_front(3);
//   l.push_front(4);

//   for (int val : l)
//   {

//     cout << val << endl; // 4,3,1,2
//   }
// }

// int main()
// {
//   deque<int> d;
//   d.push_back(1);
//   d.push_back(2);
//   d.push_front(3);
//   d.push_front(4);

//   for (int val : d)
//   {

//     cout << val << endl; // 4,3,1,2
//   }
//   cout << d[0];
// }

// int main()
// {

//   pair<int, char> p = {6, 'a'};
//   pair<int, string> c = {7, "apple"};

//   // // pair of pairs
//   pair<int, pair<char, int>> k = {1, {'c', 3}};

//   cout << p.first << endl;
//   cout << p.second << endl;

//   cout << c.first << endl;
//   cout << c.second << endl;

//   cout << k.first << endl;         // 1
//   cout << k.second.first << endl;  // c
//   cout << k.second.second << endl; // 3

//   // // // Vector of pairs
//   cout << "Vector of pairs below\n";
//   vector<pair<int, int>> vec = {{1, 2},
//                                 {3, 4},
//                                 {5, 6}};

//   vec.push_back({7, 8});   // It just inserts pre-created pairs, we need to create pairs here. Mostly used
//   vec.emplace_back(9, 10); // emplace_back creates inplace objects at the time of insertion. ie. It creates pairs automatically using the individual values. Efficient and faster compared to push_back

//   // for (pair<int, int> m : vec)
//   for (auto m : vec)
//   {
//     cout << m.first << endl; // 1,3,5
//   }
// }

// int main()
// {

//   // // // Priority Queue
//   priority_queue<int> q;
//   // reverse order priority queue
//   priority_queue<int, vector<int>, greater<int>> t;
// }

// int main()
// {
//   // // // Other maps

//   // Multimap
//   multimap<string, int> m;

//   m.insert({"tv", 100});
//   m.insert({"tv", 100});
//   m.insert({"tv", 100});
//   m.insert({"tv", 100});
//   // o/p: tv 100  tv 100 tv 100 tv 100

//   // After erasing tv, all the keys are erased
//   m.erase("tv");

//   // To delete 1 key, we need to pass iterator
//   m.erase(m.find("tv"));
//   for (auto p : m)
//   {
//     cout << p.first << " " << p.second << endl;
//   }
// }

// int main()
// {
//   set<int> s;
//   s.insert(1);
//   s.insert(1);
//   s.insert(1);
//   s.insert(1);
//   s.insert(2);
//   s.insert(3);
//   s.insert(7);
//   s.insert(4);
//   s.insert(11);

//   cout << "lower bound: " << *(s.lower_bound(6)) << endl; // 7 if 6 not there
//   cout << "upper bound: " << *(s.upper_bound(7)) << endl; // 11, as its next to 7

//   for (int val : s)
//   {
//     cout << val << endl;
//   }
//   cout << "size of set: " << s.size();
// }

int main()
{
  vector<pair<int, int>> vec = {{2, 3}, {4, 1}, {22, 122}};

  sort(vec.begin(), vec.end());

  for (auto p : vec)
  {
    cout << p.first << " " << p.second << endl;
  }
}