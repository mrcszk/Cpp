#include "MinimalTimeDifference.h"

int main()
{
    int hours;
    string time_HH_MM;
    vector <string> times;

    cout << "Ile godzin chcesz wpisac?" << endl;
    cin >> hours;
    cout << "Wpisz godzine w formacie HH:MM" << endl;
        for(int i=0;i<hours;i++) {
        cin >> time_HH_MM;

        stringstream ss;
        unsigned int time_uint;
        string time_str;

        //wyslanie zmiennej typu unsigned int do string stream, po czym pobranie jej do zmiennej typu string
        time_uint = minimaltimedifference::ToMinutes(time_HH_MM);
        cout << time_uint;
        ss << time_uint;
        ss >> time_str;
        times.push_back(time_str);
    }
    cout << "Najmniejsza roznica czasu miedzy podanymi godzinami to " << minimaltimedifference::MinimalTimeDifference(times) << " minut";
    return 0;
}