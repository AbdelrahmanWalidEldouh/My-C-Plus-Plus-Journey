// School Nutrition Programs
#include <iostream>

using namespace std;

int main()
{
    cout << "Recommended caloric needs per child = 300\n\n";

    int totalCalories{0};

    int ingredients{0};
    cout << "Number of ingredients: ";
    cin >> ingredients;

    int ingredientCalories{0};

    int count = ingredients;
    while (count > 0)
    {
        cout << "Calories of this ingredient: ";
        cin >> ingredientCalories;

        cout << "Adding...\n";
        totalCalories += ingredientCalories;

        count--;
    }

    int children{0};
    cout << "\nNumber of children: ";
    cin >> children;

    int caloriesPerChild = totalCalories / children;

    if (caloriesPerChild < 300)
    {
        cout << "Not enough!";
    }
    else
    {
        cout << "Enough calories.";
    }

}
