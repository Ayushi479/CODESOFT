#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
main()
{
 srand(time(0));
 int n=rand()%100+1;
 int a=0,g=0;
 cout<<"Let's start the game....."<<endl;
 cout<<"Guess the number between 1 to 100"<<endl;
 while(g!=n)
 {
    cout<<"Enter the number:";
    cin>>g;
    a++;
    if(g>n)
    { 
        cout<<"WRONG...too high!!Try Again..."<<endl;
    }
    else if(g<n)
    {
        cout<<"WRONG...too low!!Try Again..."<<endl;
    }
    else
    {
        cout<<"HURRAYYYYY...you guessed it correct in "<<a<<" attempts"<<endl; 
    }
 }
}