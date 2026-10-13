// Count vowels by walking through a character pointer.
#include <iostream>
#include <cctype>
using namespace std;

int countVowels(const char* text) {
    if (text == nullptr) return 0;

    int count = 0;
    while (*text != '\0') {
        char letter = static_cast<char>(tolower(
            static_cast<unsigned char>(*text)));

        if (letter == 'a' || letter == 'e' || letter == 'i' ||
            letter == 'o' || letter == 'u') {
            count++;
        }
        ++text;
    }
    return count;
}

int main() {
    const char sentence[] = "Pointers are useful";
    cout << countVowels(sentence) << '\n';
}
