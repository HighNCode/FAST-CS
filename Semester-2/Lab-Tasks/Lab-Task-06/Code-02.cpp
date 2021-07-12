/*
    Name : Waleed Bin Osama
    Roll Number : 20I-2440
    Section : A
    Lab Task : 07_2
*/

#include <iostream>

using namespace std;

class students
{
    private:
        int scores[5];
    
    public:
        void input()
        {
            cout << "\n Enter scores of five subjects : ";
            
            for(int x = 0; x < 5 ; x++)
            {
                cin >> scores[x];
                
                while(scores[x] < 0 || scores[x] > 50)
                {
                    cout << "\n Please re-enter score between 0 and 50 : ";
                    cin >> scores[x];
                }
            }
        }
        
        int calculateTotalScore()
        {
            int add = 0;
            
            for(int x = 0; x < 5 ; x++)
                add = add + scores[x];
            
            return add;
        }
};

int main()
{
    int n, high, counter = 0;
    students S[n];
    
    do
    {
        cout << "\n Enter the number of students between 1 and 100 : ";
        cin >> n;
    }
    while(n < 1 || n > 100);
    
    for(int x = 0 ; x < n ; x++)
    {
        cout << "\n Marks of student " << x + 1 << ":";
        S[x].input();
    }
    
    for(int x = 0 ; x < n ; x++)
    {
        if(x == 0)
            high = S[x].calculateTotalScore();

        else
            if(high < S[x].calculateTotalScore())
                counter++;
    }
    
    cout << "\n Number of students who have more marks the Kristen are : " << counter;
}