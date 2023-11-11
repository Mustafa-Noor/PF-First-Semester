#include <iostream>
using namespace std;
void postmartem(string word);
main()
{
    string word;
    cout << "Enter a word: ";
    cin >> word;

    postmartem(word);

}

void postmartem(string word)
{
    for(int idx=0; word[idx]!='\0'; idx++)
    {
        cout << word[idx] << " found at position " << idx << endl;
    }
}