#include <iostream>

void checkAnswer(int questionNumber, std::string answer);
void displayOptions(int questionNo, std::string answers[4][4], int arraySize);

int score = 0;

int main()
{
    int questionNumber;
    std::string userAnswer;

    std::string questions[] = {
        // array of strings to hold the questions
        "1. What is the tallest mountain in the world?",
        "2. How many days are in a leap year?",
        "3. What is the largest planet in our solar system?",
        "4. What is the predecessor of C++?"
    };

    std::string options[4][4] = {
        // two-dimensional array of strings to hold the answer options
        {"A. Mt. Kilomanjaro", "B. Mt. Everest", "C. The Big MT", "D. Mt. Himalayas"},
        {"A. 366", "B. 365", "334", "D.367"},
        {"A. Saturn", "B. Earth", "C. Pluto", "D. Jupiter"},
        {"A. C#", "B. Assembly ARM", "C. Java", "D. C"}
    };

    int sizeOfQuestions = sizeof(questions) / sizeof(questions[0]);
    int rows = sizeof(options) / sizeof(options[0]);

    for (int i = 0; i < sizeOfQuestions; i++)
    {
        questionNumber = i;
        std::cout << questions[i] << std::endl;

        displayOptions(questionNumber, options, rows);
        std::cout << std::endl;
        std::cin >> userAnswer;

        while (!(userAnswer == "A" || userAnswer == "B" || userAnswer == "C" || userAnswer == "D"))
        {
            std::cout << "Please select a valid option! (A, B, C, D)" << '\n';
            std::cin >> userAnswer;
        }

        checkAnswer(questionNumber,userAnswer);
    }

    std::cout << "Thank you for playing, your score was: " << score << "/4" << "!" << '\n';


    return 0;
}

// function to check whether the answer given by the user is correct
void checkAnswer(int questionNumber, std::string answer)
{
    switch (questionNumber)
    {
    case 0:
        if (answer == "B")
        {
            std::cout << "Correct!" << std::endl;
            score++;
        }
        else
        {
            std::cout << "Incorrect!" << std::endl;
        }
        break;
    case 1:
        if (answer == "A")
        {
            std::cout << "Correct!" << std::endl;
            score++;
        }
        else
        {
            std::cout << "Incorrect!" << std::endl;
        }
        break;
    case 2:
        if (answer == "D")
        {
            std::cout << "Correct!" << std::endl;
            score++;
        }
        else
        {
            std::cout << "Incorrect!" << std::endl;
        }
        break;

    case 3:

        if (answer == "D")
        {
            std::cout << "Correct!" << std::endl;
            score++;
        }
        else
        {
            std::cout << "Incorrect!" << std::endl;
        }
        break;
    }
}

void displayOptions(int questionNo, std::string answers[4][4], int arraySize)
{
    for (int i = 0; i < arraySize; i++)
    {
        std::cout << answers[questionNo][i] << " ";
    }
}
