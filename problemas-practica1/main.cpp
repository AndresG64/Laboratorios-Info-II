#include <iostream>
#include <math.h>

using namespace std;
//this function can to check if one character is consonant, vowel or another and print what is it.
int cons_or_vowel();
//this function can to give you the change, using the maximum number of tickets
int change_ticket();

int main()
{
    return 0;
}
int cons_or_vowel()
{
    char letter;        //this is a data input
    int ascii=0;        //whit this int, i want to change my letter to ascii
    cout<<"Ingrese un caracter: ";cin>>letter;
    ascii=letter;       //change string to ascii
    if(ascii>=97 && ascii<=122) ascii-=32;      //if the letter is lowercase, we can to change that to capital letter here
    if(ascii>=65 && ascii<=90)                  //check if it is consonant or letter
    {
        if(ascii==65 || ascii==69 || ascii==73 || ascii==79 || ascii==85)   //check if it is vowel
        {
            cout<<letter<<" es vocal."<<endl;
        }
        else cout<<letter<<" es consonante."<<endl;
    }
    else cout<<"No es una letra."<<endl;
    return 0;
}
int change_ticket()
{
    int money;          //data input
    int fiftyT=50000, twentyT=20000,tenT=10000,fiveT=5000,twoT=2000,oneT=1000,fiveH=500,twoH=200,oneH=100,fifty=50;     //This is the change
    cout<<"Ingrese el dinero: ";cin>>money;

    money=money-((money/fiftyT)*);

    return 0;
}
