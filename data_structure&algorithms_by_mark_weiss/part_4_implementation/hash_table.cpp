#include <iostream>
#include <list>
#include <vector>
using namespace std;

class HashTable
{
    static const int SIZE = 7;

    vector<list<pair<int, string>>> table;

public:
    HashTable() : table(SIZE) {}

    int hash(int key)
    {
        return key % SIZE;
    }

    void insert(int key, string value)
    {
        int index = hash(key);

        table[index].push_back({key, value});
    }

    string get(int key)
    {
        int index = hash(key);
        for (auto &p : table[index])
        {
            if (p.first == key)
                return p.second;
        }
        return "NOT FOUND";
    }

    void remove(int key)
    {
        int index = hash(key);
        table[index].remove_if([&](auto &p)
                               { return p.first == key; });
    }
};

int main()
{
    HashTable ht;
    ht.insert(1, "Apple");

    cout << ht.get(1) << "\n"; // Apple
    return 0;
}