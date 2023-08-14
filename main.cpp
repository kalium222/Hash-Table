#include <vector>
#include <iostream>
#include <forward_list>
#include "hashtable.hpp"

using namespace std;

// void print_hash(HashTable<int, int, std::hash<int>, std::equal_to<int>> h) {
//     cout << "!" << endl;
//     for (auto it=h.begin(); it.bucketIt!=h.buckets.end(); it++) {
//         cout<<"is called"<<endl;
//         std::cout << "(" << it->first << ", " << it->second << ")";
//     }
// }

int main() {
    HashTable<int, int, std::hash<int>, std::equal_to<int>> h;
    cout << h.bucketSize() << endl;
    for (auto i=1; i<5; i++) {
        h.insert(i, i);
    }
    h.erase(1);
    
    cout << (h.begin()==h.end()) << endl;
    // print_hash(h);

    // typedef forward_list<int> Int_FList;
    // typedef vector<Int_FList> Buckets;
    // Buckets buckets;
    // Int_FList fl1 = {1,2,3,4,5};
    // buckets.push_back(fl1);
    // cout << "main" << endl;
    // buckets.push_back(Int_FList());
    // buckets.begin()->emplace_after(buckets.begin()->before_begin(), 1);
    // cout << (buckets.begin()== buckets.end()) << endl;
    

    return 0;
}