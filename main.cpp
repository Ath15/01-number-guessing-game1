
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
    cout << endl;
    int number, guess, n1=0;
    char c = 'y';
    int maxn;
    int maxatt;
    
    int choice=0;
    cout << "Choose difficulty: \n" << "1. Easy = number between 1 and 50 \n" << "2. Medium = number between 1 and 100 \n" << "3. Hard = number between 1 and 500 \n" << endl;
    cout << "Enter your choice respectively " << endl;
    cin >> choice ;
     srand(time(0));

    if(choice==1){
    cout << "I am thinking of a number between 1 and 50. Can you guess it?" << endl;
     maxn=50;
    number = rand()%50+ 1;
    maxatt =15;
    }
    else if(choice==2){
     cout << "I am thinking of a number between 1 and 100. Can you guess it?" << endl;
      maxn=100;
          maxatt =10;

     number = rand()%100+ 1;
    }
    else if(choice==3){
    cout << "I am thinking of a number between 1 and 500. Can you guess it?" << endl;
     maxn=500;
         maxatt =7;

    number = rand()%500+ 1;
    }
    cout << "You only have " << maxatt << " attempts.Use them carefully" << endl;




  
   
    guess = 0;

    if(choice==1 || choice==2 || choice==3){
    while(c=='y'){
    while(n1!=number && maxatt!=0){
    cout << "Enter your guess" << endl;
    cin >> n1;
    if(cin.fail()){
        cin.clear();
        cin.ignore(1000,'\n');
        cout << "Please enter a valid number" << endl;
      continue;
    }
  
    if(n1>= 1 && n1<=maxn){
    
    guess++;
    maxatt--;

    
    if(n1==number){
        cout << "Your guess is correct" << endl;
        cout << "You won!!"<< endl;
        cout << "The number was : " << number << endl;
        cout << "You guessed in " << guess << " tries" << endl;
        cout << endl;

        cout << "Do you want to play again? (y/n)" << endl;
        cin >> c;
        if(c=='y'){
           
            
            number = rand()%maxn+1;
            guess = 0;
            n1=0;
            if(choice==1)
            maxatt=15;
             if(choice==2)
            maxatt=10;
             if(choice==3)
            maxatt=7;

        } 
        else{
            choice =-1;
         cout << "Thank you for playing" << endl;

        }
    }
    else if(n1>number){
        cout << "The guess is not correct " << endl;
        cout << "It is TOO HIGH!!" << endl;
      
    }
    else{
         cout << "The guess is not correct " << endl;
        cout << "It is TOO LOW!!" << endl;
     
    }

    }
    

else{
cout << "Please enter a valid input" << endl;
cout << "Enter a number between 1 and " << maxn  << endl;
}
    }
    if(maxatt==0 && n1!=number){
        cout << "Ouch!! You ran out of attempts" << endl;
        cout << "The number was : " << number << endl;
        cout << "Do you want to play again? (y/n)" << endl;
         cin >> c;
        if(c=='y'){
           
            
            number = rand()%maxn+1;
            guess = 0;
            n1=0;
            if(choice==1)
            maxatt=15;
             if(choice==2)
            maxatt=10;
             if(choice==3)
            maxatt=7;

        } 
        else{
            choice =-1;
         cout << "Thank you for playing" << endl;

        }
    }

    }

    }
    else{
     cout << "Inavlid choice.Please enter a valid choice that is: 1,2 or 3" << endl;
    }

}





