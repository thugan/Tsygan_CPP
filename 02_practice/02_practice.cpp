#include <iostream>
using namespace std;

int main()
{
    int duim;
    const float cm_in_duim = 2.54;
    cout << "Enter inch to convert : ";
    cin >> duim;
    int tv_in_cm = duim * cm_in_duim;
    cout << "Your TV is " << tv_in_cm << " cm" << endl;

    int corm_g;
    const float kg = 1000;
    cout << "Enter how much nuts your humster eat per day : ";
    cin >> corm_g;
    float korm_30_days = corm_g / kg;
    cout << "Your humster eats " << korm_30_days << " kg per 30 days" << endl;
}