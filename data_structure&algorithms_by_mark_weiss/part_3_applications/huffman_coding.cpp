#include <iostream>
#include <unordered_map>
#include <queue>
using namespace std;

struct Node
{
    int freq;
    char ch;

    Node *leftNode;
    Node *rightNode;

    Node(char c, int f) : ch(c), freq(f), leftNode(nullptr), rightNode(nullptr) {}
};

struct Compare
{
    bool operator()(Node *a, Node *b)
    {
        return a->freq > b->freq;
    }
};

void generateCodes(Node *root, string code, unordered_map<char, string> &huffmanCode)
{
    if (!root)
        return;

    // If leaf node -> contains a character
    if (!root->leftNode && !root->rightNode)
    {
        huffmanCode[root->ch] = code;
    }

    generateCodes(root->leftNode, code + "0", huffmanCode);
    generateCodes(root->rightNode, code + "1", huffmanCode);
};

void huffmanEncoding(const string &text)
{
    // creating frequency table
    unordered_map<char, int> freq;
    for (char ch : text)
    {
        freq[ch]++;
    }

    // creating a priority queue
    priority_queue<Node *, vector<Node *>, Compare> pq;

    for (auto pair : freq)
    {
        pq.push(new Node(pair.first, pair.second));
    }

    // building huffman tree
    while (pq.size() > 1)
    {
        Node *left = pq.top();
        pq.pop();
        Node *right = pq.top();
        pq.pop();

        Node *newNode = new Node('\0', left->freq + right->freq);
        newNode->leftNode = left;
        newNode->rightNode = right;

        pq.push(newNode);
    }

    Node *root = pq.top();

    // generate huffman codes
    unordered_map<char, string> huffmanCode;
    generateCodes(root, "", huffmanCode);

    cout << "Huffman Codes:\n";
    for (auto pair : huffmanCode)
    {
        cout << pair.first << " : " << pair.second << "\n";
    }

    // Encode the input string

    cout << "\nOriginal string: " << text;
    string encoded = "";

    for (char ch : text)
    {
        encoded += huffmanCode[ch];
    }

    cout << "\nEncoded string: " << encoded << '\n';
};

int main()
{
    string text = "AAABBC";
    huffmanEncoding(text);
    return 0;
}
