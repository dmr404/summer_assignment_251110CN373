#include <iostream>
using namespace std;

int main() {
    char str1[100], str2[100];
    cin.getline(str1, 100);
    cin.getline(str2, 100);

    int freq1[26] = {0}, freq2[26] = {0};

    for(int i = 0; str1[i] != '\0'; i++)
        freq1[str1[i] - 'a']++;

    for(int i = 0; str2[i] != '\0'; i++)
        freq2[str2[i] - 'a']++;

    bool anagram = true;

    for(int i = 0; i < 26; i++) {
        if(freq1[i] != freq2[i]) {
            anagram = false;
            break;
        }
    }

    if(anagram)
        cout << "Anagram";
    else
        cout << "Not Anagram";
}