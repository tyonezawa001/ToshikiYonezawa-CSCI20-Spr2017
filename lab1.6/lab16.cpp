#include <iostream>
#include <string>
using namespace std;
struct Monster {
    string Name;
    string Head;
    string Eyes;
    string Ears;
    string Nose;
    string Mouth;
};

int main() {
    Monster OneMonster;
    OneMonster.Name = "OneMonster";
    OneMonster.Head = "Zombus";
    OneMonster.Eyes = "Spritem";
    OneMonster.Ears = "Vegitas";
    OneMonster.Nose = "None";
    OneMonster.Mouth = "Wackus";
    
    Monster TwoMonster;
    TwoMonster.Name = "TwoMonster";
    TwoMonster.Head = "Franken";
    TwoMonster.Eyes = "Vegitas";
    TwoMonster.Ears = "Spritem";
    TwoMonster.Nose = "Wackus";
    TwoMonster.Mouth = "Vegitas";
    
    cout << endl;
    cout << "MonsterOne: ";
    cout << OneMonster.Head << ", ";
    cout << OneMonster.Eyes << ", ";
    cout << OneMonster.Ears << ", ";
    cout << OneMonster.Nose << ", ";
    cout << OneMonster.Mouth << endl;
    cout << endl;
     
    cout << "MonsterTwo: ";
    cout << TwoMonster.Head << ", ";
    cout << TwoMonster.Eyes << ", ";
    cout << TwoMonster.Ears << ", ";
    cout << TwoMonster.Nose << ", ";
    cout << TwoMonster.Mouth << endl;
    cout << endl;
     
return 0;
     
}