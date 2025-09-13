# include <iostream>
using namespace std;

int substring_occurrence(string text, string pattern){
    if (pattern.size() == 0){
        return -1;
    }
    for ( int i = 0; i < text.size(); i++){
        int j = 0;
        while(j < pattern.size() && i + j < text.size() && text[i + j] == pattern[j]){
            j++;
        }
        if (j == pattern.size()){
            return i;
        }
    }
    return -1;
}

int main(){
    string arr [] = {"This is a book.", "book is on table.", "I got a ball.",""};
    cout << "Finding substring book in all strings:" << endl;
    int count = 1;
    for (string str : arr){
        cout << "Case no " << count << endl;
        count++;
        cout << "Location index for this case is:" << substring_occurrence(str,"book") << endl;
    }


}
