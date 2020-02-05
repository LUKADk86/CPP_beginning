

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    cout << "saisissez un mot" << endl;
    string word;
    string gessWord;
    cin >>word;
    string selectedWord(word);
    string mix;
while (word.size()!=0){
    srand(time(0));

    int position = rand() % word.size();

    mix += word[position];
    word.erase(position, 1);
}

do {
     cout << endl << "Quel est ce mot ? " << mix << endl;
      cin >> gessWord;
if(selectedWord !=gessWord){
cout << "word" << selectedWord << "gessword" << gessWord <<endl;
} else{
cout << "bravo" << endl;
}
} while(selectedWord !=gessWord);
    return 0;
}
