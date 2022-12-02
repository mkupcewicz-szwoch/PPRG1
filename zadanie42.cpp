#include<iostream>
using namespace std;

void most_occurred_number(int nums[], int size)
{
  int max_count = 0;
  cout << "\nNajczesciej wystepujaca cyfra to: ";
  for (int i=0; i<size; i++)
  {
   int count=1;
   for (int j=i+1;j<size;j++)
       if (nums[i]==nums[j])
           count++;
   if (count>max_count)
      max_count = count;
  }

  for (int i=0;i<size;i++)
  {
   int count=1;
   for (int j=i+1;j<size;j++)
       if (nums[i]==nums[j])
           count++;
   if (count==max_count)
       cout << nums[i] << endl;
  }
 }
 
int main()
{   int g;
    cout << "Podaj liczbe elementow tabeli\n";
    cin >> g;
    cout << endl;
    int nums[g];

        for (int i = 0; i < g; ++i)
    {
        cout << "Podaj liczbe " << i + 1 << " : ";
        cin >> nums[i];
    }

    int n = sizeof(nums)/sizeof(nums[0]);
    cout << "Liczby tabeli: ";
    for (int i=0; i < n; i++) 
    cout << nums[i] <<" ";
    most_occurred_number(nums, n);
}