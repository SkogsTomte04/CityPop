#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

map<string,int> nzPop = {};


void AllCities() {
    cout << "City and Population:\n";

    for (auto it = nzPop.begin(); it != nzPop.end(); ++it) {

        cout << "[" << it->first << "] = (" << it->second << ") " << endl;

    }
}


int main()
{
    string userInput;
    bool  active = false;
    string cityname;
    
    nzPop["Invercargill"] = 56800;
    nzPop["Hamilton"] = 179900;
    nzPop["Tauranga"] = 158300;
    nzPop["Napier"] = 157400;
    nzPop["Dunedin"] = 130400;
    nzPop["Whangārei"] = 100500;
    nzPop["Auckland"] = 1652000;
    nzPop["Palmerston North"] = 90400;
    nzPop["Christchurch"] = 389300;
    nzPop["New Plymouth"] = 87700;
    nzPop["Rotorua"] = 76800;
    nzPop["Nelson"] = 54500;
    nzPop["Gisborne"] = 52100;
    nzPop["Whanganui"] = 48700;
    nzPop["Timaru"] = 48500;
    nzPop["Wellington"] = 434900;
    
    while (true) {
        cout << "Cities in Nz\n";


        cin >> userInput;
        
        

        if (nzPop.find(userInput) != nzPop.end()) {

            cout << "City: " << "[" << userInput << "]" << "\tPopulation " << "(" << nzPop[userInput] << ")" << endl;

        }


        if (userInput == "*") {

            AllCities();

        }
        cout << would you like to play again
        system("cls");
    }
    
    
    
}


