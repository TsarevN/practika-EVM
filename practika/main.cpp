#include <iostream> 
#include <deque> 
#include <string> 
#include <map> 
#include <set> 

using namespace std;

char to_lowercase(char c)
{
   if (c >= 'A' && c <= 'Z')
      return c + 32;

   return c;
}

void ZadanieOne()
{
   deque<string> works;  // Здесь будем хранить имена.
 
   int n = 0;            // кол-во сданных работ.
   cin >> n;

   for (int i = 0; i < n; ++i)
   {
      string name, position;        
      cin >> name >>position;      //Вводим имя и вариант сдачи работы (пробелы пропускаются).

      for (char& c : position)
         c = to_lowercase(c);      //избегаем случая введения заглавных букв.

      if (position == "top")       //в нужном порядке вставляем имена в контейнер.
      {
         works.push_front(name);
      }
      else
      {
         works.push_back(name);
      }
   }

   

   int k = 0;        // для какого числа работ нужно определить автора.
   cin >> k;

   for (int i = 0; i < k; ++i)
   {
      int x = 0;
      cin >> x;
      cout << works[x - 1] << endl;       // имена уже упорядочены, так что x-1 (начинается с 0).
   }
}

using namespace std;

void ZadanieTwo()
{
   map<int, set<string>> index;

   int n;
   cin >> n;
   for (int i = 0; i < n; ++i) {
      string word;
      int page;
      cin >> word >> page;          // пишем слово и страницу
      index[page].insert(word);     // страница ключ. слово - значение
   }

   for (const auto& i : index)   
   {
      cout << i.first;             // выводим страницу
      for (const auto& word : i.second) 
         cout << " " << word;      // выводим слово
      
      cout << endl;;
   }
   
}



int main()
{
   //ZadanieOne();
   //ZadanieTwo();

   return 0;

}