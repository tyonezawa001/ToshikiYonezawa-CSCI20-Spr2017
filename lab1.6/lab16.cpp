/* Created by: Toshiki Yonezawa
 * Created on: 02/03/2017
 * I created a MonsterStruct with six characteristics of a monster.
 * Program must output two monsters, and it explains about name and each body parts.
 */

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
    
    cout << endl;
    cout << "Please enter the characteristics of two of the monster!" << endl;
    cout << endl;
    cout << "You can freely name for each monsters." << endl;
    cout << endl;
    cout << "You can choose the characteristics from Zombus, Spritem, Vegitas, Wackus and None." << endl;
    cout << endl;
    
    // it explains each body parts of two monsters. 
    Monster OneMonster;
    cout << "Please decide the name for Monster One: "; 
    cin >> OneMonster.Name;
    cout << endl;
    
    cout << "Please decide the Head for " << OneMonster.Name << "!";
    cin >> OneMonster.Head;
    cout << endl;
    
    cout << "Please decide the Eyes for " << OneMonster.Name << "!";
    cin >> OneMonster.Eyes;
    cout << endl;
    
    cout << "Please decide the Ears for " << OneMonster.Name << "!";
    cin >> OneMonster.Ears;
    cout << endl;
    
    cout << "Please enter the Nose for " << OneMonster.Name << "!"; 
    cin >> OneMonster.Nose;
    cout << endl;
    
    cout << "Please enter the Mouth for " << OneMonster.Name << "!";
    cin >> OneMonster.Mouth;
    cout << endl;
    
    Monster TwoMonster;
    cout << "Please decide the name for Monster Two: "; 
    cin >> TwoMonster.Name;
    cout << endl;
    
    cout << "Please decide the Head for " << TwoMonster.Name << "!";
    cin >> TwoMonster.Head;
    cout << endl;
    
    cout << "Please decide the Eyes for " << TwoMonster.Name << "!";
    cin >> TwoMonster.Eyes;
    cout << endl;
    
    cout << "Please decide the Ears for " << TwoMonster.Name << "!";
    cin >> TwoMonster.Ears;
    cout << endl;
    
    cout << "Please enter the Nose for " << TwoMonster.Name << "!"; 
    cin >> TwoMonster.Nose;
    cout << endl;
    
    cout << "Please enter the Mouth for " << TwoMonster.Name << "!";
    cin >> TwoMonster.Mouth;
    cout << endl;
    
    // it outputs for each monsters.
    cout << endl;
    cout << OneMonster.Name << ": ";
    cout << OneMonster.Head << ", ";
    cout << OneMonster.Eyes << ", ";
    cout << OneMonster.Ears << ", ";
    cout << OneMonster.Nose << ", ";
    cout << OneMonster.Mouth << endl;
    cout << endl;
     
    cout << TwoMonster.Name << ": ";
    cout << TwoMonster.Head << ", ";
    cout << TwoMonster.Eyes << ", ";
    cout << TwoMonster.Ears << ", ";
    cout << TwoMonster.Nose << ", ";
    cout << TwoMonster.Mouth << endl;
    cout << endl;
    
return 0;
     
}