#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

void displaydigit(vector<unsigned int> bin);

void dectobin();

void bintodec();

int main()
{
    bintodec();

    // dectobin();
    
    cout << endl << endl;
    return 0;
}

void displaydigit(vector<unsigned int> bin)
{
    cout << "[ ";
    for (int i = bin.size() - 1; i >= 0; i--){
        cout << bin[i] << " ";
    }
    cout << "]";
}

void dectobin(){

    vector<unsigned int> bin_digit;
    unsigned int dec(0), r(0), d(0);

    cout << "Entrez le decimal à convertir__";
    cin >> dec;
    cout << "Entrez le nombre de bit(0 si non defini)__";
    cin >> d;
    cout << endl;

    while (dec != 1){

        r = dec % 2;
        bin_digit.push_back(r);
        dec = (dec - r) / 2;

    }
    bin_digit.push_back(dec);

    const int deltaBit = d - bin_digit.size();

    if(deltaBit > 0){
        for (int i = 1; i <= deltaBit; i++)
        {
            bin_digit.push_back(0);
        }   
    }
    
    displaydigit(bin_digit);

}

void bintodec(){

    string bin("");
    unsigned int dec(0), j(0);

    cout << "Entrez le nombre binaire__";
    cin >> bin;

    for (int i = bin.size()-1; i >= 0; i--)
    {
        if(bin[j] == '1'){
            dec += pow(2, i);
        }
        j++;
    }

    cout << dec;
    
}