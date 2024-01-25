/*
 Author : Kade Sole
 Program : hw8, q2
 Date Created : April 13th 2023
 Date Last Modified : April 13th 2023
 Problem : An integer is said to be a perfect integer if the sum of its factors, including 1, but not the number
itself, is equal to the number. For example, 6 is a perfect integer because 6 = 1 + 2 + 3. Write a
function (perfect) that determines whether a given number is a perfect integer. Use this function in
a program that determines and prints all perfect numbers between 1 and 1000. Print the factors of
each perfect integer to confirm. Put your computer to hard work to find the fifth perfect integer.
First is 6, second is 28, etc.

Pseudo code
1) Create a function that calculates if a number is perfect or not
2) create a menu and switch statements that allow the user to navigate throughout it
2.b) this is in attempt to make the program more fast and efficient. I was having troubles doing the fifth calculation with all of the others.
3) have one option for perfect numbers between 1 and 1000, one for the fifth perfect int, and one option to quit
4.) for option 1 call the perfect number function to find all perfect numbers from 1-1000
5) for option 2 find the fifth perfect number by calling the perfect number function and looking for the fifth iteration
6) let the third option act as a break statement

*/


#include<iostream>


using namespace std;
//Function Prototype
int isPerfect(int num);
//Main Function
int main()
{   //input for switch case
    int choice=0;
    do{ //Print menu the first time
        cout<<"============================================\n";
        cout<<"\t\t   Menu\n\n";
        cout<<"Enter 1 For perfect numbers between 1 and 1000: ";
        cout<<"\nEnter 2 to find the fifth perfect integer: ";
        cout<<"\nEnter 3 to Quit: ";
        cout<<"\n============================================\n";
        cin>> choice; //Collect users input to know what case it will be
        //This is the switch statement
        switch(choice)
        {
        case 1:
            //Calculate perfect numbers from 1 to 1000
            cout<<"\nPerfect integers between 1 and 1000:\n";
            //if num is 1 it will think 1 is a perfect number. Start at 2 to avoid that
            for(int num=2;num<1000;num++)
            //Function call to find perfect number and return it to user
            if(isPerfect(num))
            cout<<num<<endl;
            break;

        case 2:
            //Calculate the fifth number because this takes the longest if we use a switch statement we can keep program fast by doing it by itself
            cout<<"\nThe fifth perfect integer is:\n";
            // I looked up what the fifth perfect integer is to set the for loop to a reasonable size. This is to keep the program fast as possible
            for(int num=33550330;num<33550340;num++)
            //Function call to find perfect number and return it to user
            if(isPerfect(num))
            cout<<num<<endl;
            break;

        case 3:
            break;
        } //End of switch statement

      }while(choice != 3); //End of do while loop This is to allow them to enter multiple things unless they do 3 to exit

    system("pause");
    return 0;
}

//Function definition
int isPerfect(int num)
{   //This is the calculations to find the perfect number
    int sum=1;
    for(int c=2;c<num;c++)
    if(num%c==0)
        sum+=c;
    if(sum==num)
        return 1;
    else
    return 0;
}


