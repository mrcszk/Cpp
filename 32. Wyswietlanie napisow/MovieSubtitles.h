//
// Created by marci on 02.05.2019.
//

#ifndef INC_32_WYSWIETLANIE_NAPISOW_DVD_H
#define INC_32_WYSWIETLANIE_NAPISOW_DVD_H


#include <string>
#include <vector>

using std::string;
using std::vector;

class MovieSubtitles {
public:
    void static ShiftAllSubtitlesBy(const string input_file, const string output_file, int delay, int frame_rate);
private:
    vector<string> static readLines(const string input_file);
    string static delayLine(const string line, int delay, int frame_rate);
    void static validateLineFormat(const string line);
    void static writeToFile(const string output_file, vector<string> lines);
};

#endif //INC_32_WYSWIETLANIE_NAPISOW_DVD_H
