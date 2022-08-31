
#include <iostream>

using namespace std;

int main()
{
    unsigned int input;
    cout << "Enter 1 to play 2048 game and Enter 2 to play snake and ladders game" << endl;
    cin >> input;
    if(input == 1)
    system("2048.exe");
    if(input == 2)
    system("snakes_and_ladders.exe");
     /*execute program here*/
    return 0;
}