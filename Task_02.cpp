#include <iostream>
#include <cstdlib>
#include <ctime>   

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0)));

    int min_val = 1;
    int max_val = 10;

    int random_num = rand() % (max_val - min_val + 1) + min_val;

    int user_num, moves = 0;

    cout << "Enter your number : ";
    cin >> user_num;

    while (user_num != random_num)
    {
        if (user_num > random_num)
        {
            cout << "Oops ! Your guess is high.\nChoose a lower number : ";
            cin >> user_num;
        }

        else
        {
            cout << "Oops ! Your guess is low.\nChoose a higher number : ";
            cin >> user_num;
        }

        moves++;
    }

    cout << "Congrats !! You guessed the right number in "<< moves << " moves ." << "\nNumber is " << random_num << "." << endl;


    return 0;
}