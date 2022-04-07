#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <iterator>
#include "nlohmann/json.hpp"

using namespace std;
using json = nlohmann::json;

int main()
{
    json film;
    vector<string>  fields = {"country", "date", "name", "studio", "director", "producer", "main_hero", "actor"};
    vector<string>::iterator ptr;
    string s = "";
    cout << "Enter film info:" << endl;
    for(ptr = fields.begin(); ptr < fields.end(); ptr++){
        std::cout << "Enter " << *ptr << ":";
        getline(cin, s);
        film[*ptr] = s;
        s.clear();
    }

    ofstream file("c:\\temp\\films.json");
    file << film;

    return 0;

}
