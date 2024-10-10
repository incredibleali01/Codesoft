# Codesoft
C++ 
#include <iostream>

using namespace std;

int main()
{

   int randomnumber = rand() % 100 + 1; // create a random number from 1-100
   cout << "Welcome the the Game. guess a number game. Please guess a number from 1 to 100!" << endl;
   int tries = 1;
   int guess = 0;


   while (guess != randomnumber){
        cout << "Guess! ";
        cin >> guess;
            if (guess < randomnumber) {
                cout << "Woops - too low. Try again." << endl;
            }else if (guess > randomnumber) {
                cout << "Too high. Try again. "  << endl;
            }
        tries ++;
        }
        // added sass
        string comment;
        if (tries < 10) {
            comment = " - you are a superstar!";
        } else if (tries > 30) {
            comment = "Uhm.. That took you a long time.";
        }
        cout << "Great job you only took " << tries << " attempts!" << comment;

      return 0;
}
