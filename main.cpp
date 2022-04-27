#include "MapTriple.h"
#include "MapSquare.h"
#include "MapAbsoluteValue.h"
#include "FilterOdd.h"
#include "FilterForTwoDigitPositive.h"
#include "FilterNonPositive.h"
#include "ReduceMinimum.h"
#include "ReduceGCD.h"
#include <string>
#include <algorithm>
#include <sstream>
using namespace std;

int main(){
    vector<int> yes;
    MapTriple* tripleVal = new MapTriple;
    MapSquare* squareVal = new MapSquare;
    FilterOdd* oddVal = new FilterOdd;
    MapAbsoluteValue* absVal = new MapAbsoluteValue;
    FilterNonPositive* nonPos = new FilterNonPositive;
    FilterForTwoDigitPositive* no2pp = new FilterForTwoDigitPositive;
    ReduceMinimum* minReduc = new ReduceMinimum;
    ReduceGCD* gcdReduc = new  ReduceGCD;
    string input;
    getline(cin, input);
    input.erase(remove(input.begin(), input.end(), ','), input.end());
    istringstream iss(input);
    for(string input; iss >> input; ) {
    yes.push_back(stoi(input));
    }

    yes = tripleVal->map(yes);
    yes = absVal->map(yes);
    yes = nonPos->filter(yes);
    yes = oddVal->filter(yes);

    cout << minReduc->reduce(yes) << " " << gcdReduc->reduce(yes) << endl;

}
