#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <algorithm>

using namespace std;

// CTL
//  Algorithms
//  Containers
//  Functions
//  Iterators

bool comp(pair<int, int> p1, pair<int, int> p2);

int main()
{

    // Pairs
    pair<int, int> p = {1, 3};                                  // pair STL
    pair<pair<int, int>, pair<int, int>> nP = {{1, 2}, {3, 4}}; // nested pairs
    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};            // defining an array with a pair
    cout << arr[1].second << endl;
    cout << arr[2].first << endl;
    cout << p.first << " " << p.second << endl;
    cout << nP.first.first << " " << nP.first.second << " " << nP.second.first << " " << nP.second.second << endl;

    // -----------------------------------------------------------------------------------------------

    // Vectors-Dynamic array can increase or decrease the size of an array

    vector<int> v;
    v.push_back(1);    // only inserts the element
    v.emplace_back(2); // increase the size and insert the elements as well
    cout << v[1] << endl;

    vector<pair<int, int>> v_p;
    v_p.push_back({1, 3}); // nested STL
    cout << v_p[0].first << " " << v_p[0].second << endl;
    vector<int> v1(5, 20); // 5 instances of 20 ex -> {20,20,20,20,20}
    vector<int> v2(v1);
    v1.push_back(1); // Size Dynamically increases
    v1.push_back(2);
    v1.push_back(3);
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;
    cout << v1.back() << endl; // v1.back() -gives the last element value

    vector<int>::iterator it = v1.begin();
    vector<int>::iterator it_end = v1.end(); // directs  to a memory just after the end of last element

    // Two Ways to iterate over the vector
    //  1-Using the Pointer
    cout << "Iteration of Vector #1" << endl;
    for (vector<int>::iterator iter = v1.begin(); iter != v1.end(); iter++)
    {
        cout << *(iter) << " ";
    }
    cout << endl;
    cout << endl;
    // or
    cout << "Iteration of Vector #2" << endl;
    for (auto iter = v1.begin(); iter != v1.end(); iter++)
    {
        cout << *(iter) << " ";
    }
    cout << endl;
    cout << endl;
    // or
    cout << "Iteration of Vector #3" << endl;
    for (auto iter : v1)
    {
        cout << iter << " ";
    }
    cout << endl;
    cout << endl;

    // Deletion in Vector

    v1.erase(v1.begin() + 1);

    for (auto iter : v1)
    {
        cout << iter << " ";
    }
    cout << endl;
    cout << endl;

    v1.erase(v1.begin() + 1, v1.begin() + 4); // erase(start point, end point)

    for (auto iter : v1)
    {
        cout << iter << " ";
    }
    cout << endl;
    cout << endl;

    // Insertion

    v1.insert(v1.begin(), 300);
    v1.insert(v1.begin() + 2, 10, 6); // insert(position,no.of times you want to add, no. you want to add)

    for (auto iter : v1)
    {
        cout << iter << " ";
    }
    cout << endl;
    cout << endl;

    // insert in another vector

    vector<int> copy(2, 10);
    v1.insert(v1.begin(), copy.begin(), copy.end()); // inserted at beginning ->insert(vector to be added,start pos of another vector, end pos)

    for (auto iter : v1)
    {
        cout << iter << " ";
    }
    cout << endl;
    cout << endl;

    cout << "Printing the V2 first element " << v2[0] << " and second element " << v2[1] << endl;

    // list

    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(4);
    ls.push_front(1);
    ls.emplace_front(25);

    cout << "List Iteration: " << endl;
    for (auto iter = ls.begin(); iter != ls.end(); iter++)
    {
        cout << *(iter) << " ";
    }
    cout << endl;
    cout << endl;
    // rest functions are same as that of vector
    // ------------------------------------------------------------------------------------------

    // Stack

    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.emplace(6);
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    cout << st.size() << endl;
    cout << st.empty() << endl;

    stack<int> st1;
    st.swap(st1);

    // Queue

    queue<int> q;
    q.push(2);
    q.push(10);
    q.emplace(5);

    cout << "Queue Front " << q.front() << endl;
    cout << "Queue Back " << q.back() << endl;

    q.pop();
    cout << "Queue Front " << q.front() << endl;

    // Priority Queue

    priority_queue<int> pq;
    pq.push(10);
    pq.push(2);
    pq.push(3);
    pq.push(20);
    pq.push(100);
    pq.push(-5);              // arranges in tree fashion
    cout << pq.top() << endl; // gives the highest value elements
    pq.pop();

    // Minimum Heap
    priority_queue<int, vector<int>, greater<int>> pq_min;
    pq_min.push(5);
    pq_min.push(50);
    pq_min.push(5);
    pq_min.push(2);
    pq.emplace(10);               // remmeber that the elements are stored in treefashion
    cout << pq_min.top() << endl; // gives the minimum element

    set<int> se_t; // stores unique element in sorted order
    se_t.insert(1);
    se_t.insert(5);
    se_t.insert(7);
    se_t.insert(2);
    se_t.insert(4);

    auto it1 = se_t.find(3); // returns a iterator, if not found gives the end of the set->se_t.end()
    se_t.erase(7);
    int cnt = se_t.count(7);
    auto first = se_t.find(1);
    auto end = se_t.find(4);
    se_t.erase(first, end); // erase just like that of the vector
    // everything happens in logN time

    multiset<int> ms; // only sorted but not unique
    ms.insert(10);
    ms.insert(10);
    ms.insert(10);
    ms.insert(1);
    ms.insert(20);
    ms.find(10);
    ms.erase(ms.find(10));              // erases the only element which you gave address of
    ms.erase(ms.find(10), ms.find(10)); // element to be erased to range of elements to be erased
    ms.erase(10);                       // erases all the instances of 10
    cout << *(ms.end()) << endl;

    unordered_set<int> Uset; // stores unique but not sorted

    // Map -> {key,value}

    map<int, int> mpp1;            //(key=int,val=int)
    map<int, pair<int, int>> mpp2; // key=int, val=pair
    map<pair<int, int>, int> mpp3; // key=pair,val=int
    mpp1[1] = 2;                   //->stores like {1,2}
    mpp1.insert({2, 5});
    mpp1.emplace(3, 1);
    mpp2[2] = {4, 5};  // stores like {2,{4,5}}
    mpp3[{3, 8}] = 10; // stores like {{3,8}},10}

    for (auto iter_mpp : mpp1)
    {
        cout << iter_mpp.first << " " << iter_mpp.second << endl; // stores in the form of sorted key!
    }
    auto iter_map1 = mpp1.find(1);
    // cout << *(iter_map1) << endl; ->This shows an error

    multimap<int, int> multimpp;  // everything same as map,only it can store multiple keys
    unordered_map<int, int> Umpp; // same as set and unordered set difference

    // Containers and Iterators are all done here, No more thant this would be good
    // Functions as of now is not useful

    // Algorithms
    // SortingAlgo
    int a[4] = {2, -1, 5, 3};
    sort(a, a + 4);
    sort(a + 1, a + 4, greater<int>()); // portion of array or vector you want to sort

    pair<int, int> pair_1[] = {{1, 2}, {2, 5}, {-1, 0}};
    sort(pair_1, pair_1 + 3, comp);

    int num = 7;
    int num_cnt = __builtin_popcount(num);
    cout << num_cnt << endl;

    long long num1 = 72545651641566;
    int num_cnt1 = __builtin_popcount(num1);
    cout << num_cnt1 << endl;

    // String Algo
    string s = "123"; // must always start with sorted string, if its not, make it
    // sort(s.begin(),s.end());
    cout << "All the Permutations" << endl;
    do
    {
        cout << s << endl;

    } while (next_permutation(s.begin(), s.end()));

    return 0;
}

bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
        return true;
    else if (p1.second > p2.second)
        return false;
    else
    {
        if (p1.first > p2.first)
            return true;
        return false;
    }
}

// All types of STL
// #include <cstdlib>
// #include <csignal>
// #include <csetjmp>
// #include <cstdarg>
// #include <typeinfo>
// #include <typeindex>
// #include <type_traits>
// #include <bitset>
// #include <functional>
// #include <utility>
// #include <ctime>
// #include <chrono>
// #include <cstddef>
// #include <initializer_list>
// #include <tuple>
// #include <new>
// #include <memory>
// #include <scoped_allocator>
// #include <climits>
// #include <cfloat>
// #include <cstdint>
// #include <cinttypes>
// #include <limits>
// #include <exception>
// #include <stdexcept>
// #include <cassert>
// #include <system_error>
// #include <cerrno>
// #include <cctype>
// #include <cwctype>
// #include <cstring>
// #include <cwstring>
// #include <cwchar>
// #include <cuchar>
// #include <string>
// #include <array>
// #include <vector>
// #include <deque>
// #include <list>
// #include <forward_list>
// #include <set>
// #include <map>
// #include <unordered_set>
// #include <unordered_map>
// #include <stack>
// #include <queue>
// #include <algorithm>
// #include <iterator>
// #include <cmath>
// #include <complex>
// #include <valarray>
// #include <random>
// #include <numeric>
// #include <ratio>
// #include <cfenv>
// #include <iosfwd>
// #include <ios>
// #include <istream>
// #include <ostream>
// #include <iostream>
// #include <fstream>
// #include <sstream>
// #include <strstream>
// #include <iomanip>
// #include <streambuf>
// #include <cstdio>
// #include <locale>
// #include <clocale>
// #include <codecvt>
// #include <regex>
// #include <atomic>
// #include <thread>
// #include <mutex>
// #include <future>
// #include <condition_variable>
// #include <ciso646>
// #include <ccomplex>
// #include <ctgmath>
// #include <cstdalign>
// #include <cstdbool>