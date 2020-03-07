#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cctype>
using namespace std;

int main(){
    const int MAX_WRONG=8;

    vector<string> words;
    words.emplace_back("GUESS");
    words.emplace_back("HANGMAN");
    words.emplace_back("DIFFICULT");

    srand(static_cast<unsigned int>(time(0)));
    random_shuffle(words.begin(), words.end());
    const string THE_WORD = words[0];
    int wrong = 0;
    string soFar(THE_WORD.size(), '-');
    string used = "";

    cout<<"Welcome to Hangman. Good luck!\n";

    while((wrong< MAX_WRONG) && (soFar != THE_WORD))
    {
        cout<<"\n\nYou have " << (MAX_WRONG - wrong);
        cout<<"incorrect guesses left. \n";
        cout<<"\nYou've used the following letters:\n"<< endl;
        cout<<"\nSo far, the word is:\n"<< soFar<<endl;
    }


}