#include <iostream>
using namespace std;

int main()
{
    int answer;
    int correct = 0;

    cout << "Global Warming Quiz\n\n";

    for (int i = 1; i <= 5; i++)
    {
        if (i == 1)
        {
            cout << "Q1: What is global warming?\n";
            cout << "1) A natural cooling of the Earth\n";
            cout << "2) A long-term increase in Earth’s average temperature\n";
            cout << "3) A short-term weather change\n";
            cout << "4) A volcanic activity\n";
            cin >> answer;

            if (answer == 2) correct++;
        }
        else if (i == 2)
        {
            cout << "\nQ2: Which gas is most responsible for human-caused global warming?\n";
            cout << "1) Oxygen\n";
            cout << "2) Nitrogen\n";
            cout << "3) Carbon dioxide (CO2)\n";
            cout << "4) Helium\n";
            cin >> answer;

            if (answer == 3) correct++;
        }
        else if (i == 3)
        {
            cout << "\nQ3: Which activity increases greenhouse gases the most?\n";
            cout << "1) Recycling\n";
            cout << "2) Burning fossil fuels\n";
            cout << "3) Planting trees\n";
            cout << "4) Using solar energy\n";
            cin >> answer;

            if (answer == 2) correct++;
        }
        else if (i == 4)
        {
            cout << "\nQ4: What do climate change skeptics often argue?\n";
            cout << "1) Climate change is caused only by humans\n";
            cout << "2) Climate change is not happening\n";
            cout << "3) Climate change exists but human impact is exaggerated\n";
            cout << "4) The Earth is getting colder\n";
            cin >> answer;

            if (answer == 3) correct++;
        }
        else if (i == 5)
        {
            cout << "\nQ5: Which organization publishes major climate reports?\n";
            cout << "1) WHO\n";
            cout << "2) FIFA\n";
            cout << "3) IPCC\n";
            cout << "4) NASA Jet Propulsion Lab\n";
            cin >> answer;

            if (answer == 3) correct++;
        }
    }

    cout << "\nYour score: " << correct << "/5\n";

    if (correct == 5)
        cout << "Excellent\n";
    else if (correct == 4)
        cout << "Very good\n";
    else
    {
        cout << "Time to brush up on your knowledge of global warming\n";
        cout << "Websites:\n";
        cout << "https://www.ipcc.ch\n";
        cout << "https://climate.nasa.gov\n";
        cout << "https://www.noaa.gov\n";
    }

    return 0;
}
