#include iostream

using namespace std;

int main()
{
     розмір масиву
    int n;
    cin  n;
    
     створення масиву
    int a[n];
    for(int i = 0; i  n; i++)
    {
        cin  a[i];
    }
    
     чи є нуль нулів
    bool flag = false;
    for(int i = 1; i  n; i++)
    {
        if(a[i] == 0)
        {
            flag = true
        }
    }
    
     виведення
    if(flag)
        cout  є  endl;
    else
        cout  нема  endl;