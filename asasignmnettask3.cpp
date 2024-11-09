#include <iostream>
#include <cstdlib>
#include <ctime>
int randnum();
using namespace std;

int main()
{
    int SecretNumber = randnum();
    int guess;
    int tries = 0;
    int score = 1000;
    int difference;
    do
    {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess > SecretNumber)
        {
            difference = guess - SecretNumber;
        }
        else
        {
            difference = SecretNumber - guess;
        }

        if (guess == SecretNumber)
        {
            cout << "Correct! You've guessed the number." << endl;
            break;
        }
        else if (difference > 200)
        {
            if (guess > SecretNumber)
                cout << "Too high." << endl;
            else
                cout << "Too low." << endl;
        }
        else if (difference > 10)
        {
            if (guess > SecretNumber)
                cout << "High." << endl;
            else
                cout << "Low." << endl;
        }
        else if (difference <= 10)
        {
            if (guess > SecretNumber)
                cout << "Slightly high." << endl;
            else
                cout << "Slightly low." << endl;
        }
        tries++;

        // SCORING SYSTEM
        if (difference > 500)
        {
            score -= 100;
        }
        else if (difference >= 301)
        {
            score -= 50;
        }
        else if (difference >= 201)
        {
            score -= 30;
        }
        else if (difference >= 101)
        {
            score -= 20;
        }
        else if (difference >= 11)
        {
            score -= 10;
        }

    } while (guess != SecretNumber);

    // PENALTIES
    if (tries >= 2 && tries <= 5)
    {
        score -= tries * 10;
    }
    else if (tries >= 6 && tries <= 10)
    {
        score -= tries * 20;
    }
    else if (tries > 10)
    {
        score -= tries * 50;
    }

    if (tries <= 3)
    {
        score += 200;
    }
    else if (tries <= 6)
    {
        score += 100;
    }

    if (score < 0)
    {
        score = 0;
    }

    cout << "Game Over! You guessed the number in " << tries << " attempts.\n";
    cout << "Your final score is: " << score << "\n";

    return 0;
}

int randnum()
{
    srand(static_cast<unsigned int>(time(0)));
    return rand() % 1000 + 1; // Generate random number between 1 and 10
}
