
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
#include <cstdlib>
#include <ctime>

int main(){
    for(int i = 1; i<=35 ; i++){
        cout << "=";
    }
    cout << endl;
   
    cout << setw(29) << "Number guessing game!!" << endl;
for(int i = 1; i<=35 ; i++){
        cout << "=";
    }
    cout << endl;;
    cout << "I am thinking of a number between 1 and 100. Can you guess it?" << endl;
    int number, guess, user_number;
    int&n1= user_number;
    srand(time(0));
    number = rand()%100 + 1;
    guess = 1;
    while(n1!=number){
    cout << "Enter your guess" << endl;
    cin >> n1;
    if(n1==number){
        cout << "Your guess is correct" << endl;
        cout << "You won!!"<< endl;
        cout << "The number was : " << number << endl;
        cout << "You guessed in " << guess << " tries" << endl;
    }
    else if(n1>number){
        cout << "The guess is not correct " << endl;
        cout << "It is TOO HIGH!!" << endl;
        guess++;
    }
    else{
         cout << "The guess is not correct " << endl;
        cout << "It is TOO LOW!!" << endl;
        guess++;
    }
}

}