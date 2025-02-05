# MyOwnStringLib

## 📌 Overview
**MyOwnStringLib** is a custom C++ string manipulation library that provides various functions for handling and processing strings efficiently. This library includes functionalities such as case conversion, trimming, word replacement, substring search, splitting strings, and more.

## 🚀 Features
- Convert strings to uppercase or lowercase.
- Trim leading, trailing, or both sides of a string.
- Count occurrences of a letter in a string.
- Replace words in a string with case sensitivity control.
- Split strings using a custom delimiter.
- Reverse a string.
- Compare strings for equality.
- Find the index of a substring within a string.



## 🔧 Usage
Include the header file in your C++ project and start using the functions:

```cpp
#include "MyOwnStringLib.h"
#include <iostream>
using namespace std;

int main() {
    string text = "  Hello World!  ";
    cout << "Trimmed: " << MyOwnStringLib::trim(text, "all") << endl;
    cout << "Lowercase: " << MyOwnStringLib::toLower(text) << endl;
    cout << "Word Count: " << MyOwnStringLib::WordsCounter(text, ' ') << endl;
    return 0;
}
```

## 📥 Installation
1. Clone the repository:
```bash
git clone https://github.com/YOUR_GITHUB_USERNAME/MyOwnStringLib.git
```
2. Include `MyOwnStringLib.h` in your C++ project.
3. Compile with:
```bash
g++ main.cpp MyOwnStringLib.cpp -o my_program
```

## 🛠️ Requirements
- C++11 or later
- A C++ compiler (GCC, Clang, MSVC, etc.)

## 💡 Contributing
Contributions are welcome! Feel free to fork the repository, improve the code, and submit pull requests.

## 📜 License
This project is open-source and available under the **MIT License**.

## ✉️ Contact
For any inquiries or suggestions, feel free to reach out!

