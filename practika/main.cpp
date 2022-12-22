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
   deque<string> works;  // ����� ����� ������� �����.
 
   int n = 0;            // ���-�� ������� �����.
   cin >> n;

   for (int i = 0; i < n; ++i)
   {
      string name, position;        
      cin >> name >>position;      //������ ��� � ������� ����� ������ (������� ������������).

      for (char& c : position)
         c = to_lowercase(c);      //�������� ������ �������� ��������� ����.

      if (position == "top")       //� ������ ������� ��������� ����� � ���������.
      {
         works.push_front(name);
      }
      else
      {
         works.push_back(name);
      }
   }

   

   int k = 0;        // ��� ������ ����� ����� ����� ���������� ������.
   cin >> k;

   for (int i = 0; i < k; ++i)
   {
      int x = 0;
      cin >> x;
      cout << works[x - 1] << endl;       // ����� ��� �����������, ��� ��� x-1 (���������� � 0).
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
      cin >> word >> page;          // ����� ����� � ��������
      index[page].insert(word);     // �������� ����. ����� - ��������
   }

   for (const auto& i : index)   
   {
      cout << i.first;             // ������� ��������
      for (const auto& word : i.second) 
         cout << " " << word;      // ������� �����
      
      cout << endl;;
   }
   
}



int main()
{
   //ZadanieOne();
   //ZadanieTwo();

   return 0;

}