#include <iostream>
#include <map>
#include <string>

using namespace std;

// println helper
template <typename T>
void println(const T& value) {
    cout << value << '\n';
}

int main() {
    map<string, int> dict;
    string s;

    while (cin >> s) {
        ++dict[s];
    }

    for (const auto& [word, count] : dict) {
        cout << word << ": " << count << '\n';
        // or: println(word + ": " + to_string(count));
    }

    return 0;
}
