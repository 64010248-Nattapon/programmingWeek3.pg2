#include<iostream>
using namespace std;
int main()
{

    char ch;

    cout << "Enter a character : ";
    cin >> ch;

    ch = tolower(ch);

    switch (ch)
    {
    case 'a':
        cout << ch << " is Vowel";
        break;
    case 'e':
        cout << ch << " is Vowel";
        break;
    case 'i':
        cout << ch << " is Vowel";
        break;
    case 'o':
        cout << ch << " is Vowel";
        break;
    case 'u':
        cout << ch << " is Vowel";
        break;
    default:
        cout << ch << " is Consonant";
    }
    return 0;
}