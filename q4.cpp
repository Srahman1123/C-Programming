#include<iostream>
using namespace std;

class Date {
    private:
        int month, day, year;
    public:
        Date() {month=1; day=1; year=2000;}
        Date(int m, int d, int y)  {
        month=m;
        day=d;
        year=y;}
        int getMonth(){
               return month;
               }      
        int getYear(){
            return year;
        }
};

int main()
{
    Date today;
    Date tomorrow(12, 13, 15);
    cout << today.getYear() << endl;
    cout << tomorrow.getYear() << endl;
}
