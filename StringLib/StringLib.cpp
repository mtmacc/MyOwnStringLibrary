#include "MyOwnStringLib.h"
#include <iostream>
using namespace std;

int main() {
    string text = "  Hello World!  ";
    string word = "hello";
    char letter = 'o';
    char separator = ' ';

    cout << "Original: '" << text << "'" << endl;
    cout << "Trimmed: '" << MyOwnStringLib::trim(text, "all") << "'" << endl;
    cout << "Lowercase: " << MyOwnStringLib::toLower(text) << endl;
    cout << "Uppercase: " << MyOwnStringLib::toUpper(text) << endl;
    cout << "Word Count: " << MyOwnStringLib::WordsCounter(text, separator) << endl;
    cout << "Letter Count: " << MyOwnStringLib::CounterLetter(text, letter) << endl;
    cout << "Reversed: " << MyOwnStringLib::ReverseStr(text) << endl;
    cout << "Find Substring 'World': " << MyOwnStringLib::findSubstring(text, "World") << endl;
    cout << "Replace 'World' with 'Everyone': " << MyOwnStringLib::ReplaceWordInStr(text, "Everyone", "World", true) << endl;

    vector<string> words = MyOwnStringLib::split(text, " ");
    cout << "Split words: ";
    for (const auto& w : words) {
        cout << "[" << w << "] ";
    }
    cout << endl;

    cout << "Equality check ('hello', 'Hello'): " << (MyOwnStringLib::equals("hello", "Hello") ? "True" : "False") << endl;
    
    return 0;
}
