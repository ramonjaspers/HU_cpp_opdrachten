//
// Created by Ramon Jaspers on 2/18/2018.
//

#include <vector>
#include <iostream>

using namespace std;

void mySwap(char &c1, char &c2){
    // eigen swap functie
    char c3 = c1;
    c1 = c2;
    c2 = c3;
}

void reverse(string &word){
    int n = word.length();
    for (int i=0; i<n/2; i++) {
        mySwap(word[i], word[n - i - 1]);
    }

}


bool isPalindroom(string & word){
    string orginalWord = word;
    cout << word << " - ";
    reverse(word);
    cout << word;
    for(unsigned int i=0; i<word.size(); i++){
        if(word[i] != orginalWord[i]){
            return false;
        }
    }
    return true;
}


int main(){
    vector<string> words = {"stekkerdoos", "Halloween", "lepel", "flesje", "bommelding"};
    for(unsigned int i = 0; i < words.size(); i++) {
        bool palindroom = isPalindroom(words[i]);
        if (!palindroom){ cout << " is the word  "<< words[i] << " a palindrome? " << "no" << endl;}
        if (palindroom){ cout << " is the word  "<< words[i] << " a palindrome? " << "yes" << endl;}

    }
}