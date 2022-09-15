#include <iostream>
#include <list>

using namespace std;

int main()
{
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        string str;
        cin >> str;

        list<char> word;
        auto cursor = word.begin();

        for (char i : str) {
            if (i == '-') {
                if (cursor != word.begin()) {
                    cursor--;
                    word.erase(cursor);
                    cout << *cursor << "\n";
                }
            }
            else if (i == '<') {
                if (cursor != word.begin()) {
                    cursor--;
                }
            }
            else if (i == '>') {
                if (cursor != word.end()) {
                    cursor++;
                }
            }
            else {
                word.insert(cursor, i);
            }
        }

        for (char i : word) {
            cout << i;
        }
        cout << "\n";
    }
}