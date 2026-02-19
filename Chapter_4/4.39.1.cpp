// School Nutrition Programs / mistake solution
#include<iostream>

using namespace std;

int main()
{
    cout << "1 gram(g) = 1 calorie. Allowed calories = 500\n\n";
   int calories{501};

   int rice;
   int tortilla;

   int chicken;
   int eggs;

   int salad;
   int appleSlices;

   int milk;
   int juice;

   while(calories > 500)
   {
      calories = 0;

      int x{0};
      while(x == 0)
      {
         cout << "Choose 1 to rice(100g) or 2 to tortilla(150g): ";
         cin >> x;

         if(x > 2)
         {
            x = 0;
         }
         else if(x < 1)
         {
            x = 0;
         }
      }
      if(x == 1)
      {
         rice = 100;
         calories += rice;   
      }
      else
      {
         tortilla = 150;
         calories += tortilla;
      }

      int y;
      while(y == 0)
      {
         cout << "Choose 1 to chicken(150g) or 2 to eggs(100g): ";
         cin >> y;

         if(y > 2)
         {
            y = 0;
         }
         else if(y < 1)
         {
            y = 0;
         }
      }
      if(y == 1)
      {
         chicken = 150;
         calories += chicken; 
      }
      else
      {
         eggs = 100;
         calories += eggs;
      }

      int z{0};
      while(z == 0)
      {
         cout << "Choose 1 to salad(100g) or 2 to appleSlices(150g): ";
         cin >> z;

         if(z > 2)
         {
            z = 0;
         }
         else if(z < 1)
         {
            z = 0;
         }
      }
      if(z == 1)
      {
         salad = 100;
         calories += salad;
      }
      else
      {
         appleSlices = 150;
         calories += appleSlices;
      }

      int l{0};
      while(l == 0)
      {
         cout << "Choose 1 to milk(100g) or 2 to juice(150g): ";
         cin >> l;

         if(l > 2)
         {
            l = 0;
         }
         else if(l < 1)
         {
            l = 0;
         }
      }
      if(l == 1)
      {
         milk = 100;
         calories += milk;
      }
      else
      {
         juice = 150;
         calories += juice;
      }
   

      if(calories > 500)
      {
         cout << "You have exceeded the available calories!\n";
      }
   }

   cout << "Enjoy your meal!";
}