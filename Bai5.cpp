#include <iostream>
#include <iomanip>

void sortArray(double* anArray, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (anArray[j] > anArray[j + 1])
            {
                double temp = anArray[j];
                anArray[j] = anArray[j + 1];
                anArray[j + 1] = temp;
            }
        }
    }
}

double calculateAverage(double* anArray, int size)
{
    double sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += anArray[i];
    }
    return sum / size;
}

int main()
{
    int numScores;
    double* scores;

    std::cout << "Enter the number of test scores: ";
    std::cin >> numScores;

    scores = new double[numScores];

    for (int i = 0; i < numScores; i++)
    {
        std::cout << "Enter test score #" << i + 1 << ": ";
        std::cin >> scores[i];
    }

    sortArray(scores, numScores);

    double average = calculateAverage(scores, numScores);

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Sorted test scores:" << std::endl;
    for (int i = 0; i < numScores; i++)
    {
        std::cout << scores[i] << std::endl;
    }
    std::cout << "Average score: " << average << std::endl;

    delete[] scores;

    return 0;
}