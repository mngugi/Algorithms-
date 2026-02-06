#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(int argc, char** argv) {
    map<string, int> dict;
    string s;

    while (cin >> s) {
        ++dict[s];
    }

    map<string, int>::iterator it = dict.begin();
    for (; it != dict.end(); ++it) {
        cout << it->first << ": " << it->second << "\n";
    }

    return 0;
}
