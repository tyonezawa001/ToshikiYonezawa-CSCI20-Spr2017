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
    cout << "Please enter the name for Monster One: "; 
    cin >> OneMonster.Name;
    cout << endl;
    
    cout << "Please enter the Head for " << OneMonster.Name << ": ";
    cin >> OneMonster.Head;
    cout << endl;
    
    cout << "Please enter the Eyes for " << OneMonster.Name << ": ";
    cin >> OneMonster.Eyes;
    cout << endl;
    
    cout << "Please enter the Ears for " << OneMonster.Name << ": ";
    cin >> OneMonster.Ears;
    cout << endl;
    
    cout << "Please enter the Nose for " << OneMonster.Name << ": "; 
    cin >> OneMonster.Nose;
    cout << endl;
    
    cout << "Please enter the Mouth for " << OneMonster.Name << ": ";
    cin >> OneMonster.Mouth;
    cout << endl;
    
    Monster TwoMonster;
    cout << "Please enter the name for Monster Two: "; 
    cin >> TwoMonster.Name;
    cout << endl;
    
    cout << "Please enter the Head for " << TwoMonster.Name << ": ";
    cin >> TwoMonster.Head;
    cout << endl;
    
    cout << "Please enter the Eyes for " << TwoMonster.Name << ": ";
    cin >> TwoMonster.Eyes;
    cout << endl;
    
    cout << "Please enter the Ears for " << TwoMonster.Name << ": ";
    cin >> TwoMonster.Ears;
    cout << endl;
    
    cout << "Please enter the Nose for " << TwoMonster.Name << ": "; 
    cin >> TwoMonster.Nose;
    cout << endl;
    
    cout << "Please enter the Mouth for " << TwoMonster.Name << ": ";
    cin >> TwoMonster.Mouth;
    cout << endl;
    
    Monster ThreeMonster;
    cout << "Please enter the name for Monster Two: "; 
    cin >> ThreeMonster.Name;
    cout << endl;
    
    cout << "Please enter the Head for " << ThreeMonster.Name << ": ";
    cin >> ThreeMonster.Head;
    cout << endl;
    
    cout << "Please enter the Eyes for " << ThreeMonster.Name << ": ";
    cin >> ThreeMonster.Eyes;
    cout << endl;
    
    cout << "Please enter the Ears for " << ThreeMonster.Name << ": ";
    cin >> ThreeMonster.Ears;
    cout << endl;
    
    cout << "Please enter the Nose for " << ThreeMonster.Name << ": "; 
    cin >> ThreeMonster.Nose;
    cout << endl;
    
    cout << "Please enter the Mouth for " << ThreeMonster.Name << ": ";
    cin >> ThreeMonster.Mouth;
    cout << endl;
    
    Monster FourMonster;
    cout << "Please enter the name for Monster Two: "; 
    cin >> FourMonster.Name;
    cout << endl;
    
    cout << "Please enter the Head for " << FourMonster.Name << ": ";
    cin >> FourMonster.Head;
    cout << endl;
    
    cout << "Please enter the Eyes for " << FourMonster.Name << ": ";
    cin >> FourMonster.Eyes;
    cout << endl;
    
    cout << "Please enter the Ears for " << FourMonster.Name << ": ";
    cin >> FourMonster.Ears;
    cout << endl;
    
    cout << "Please enter the Nose for " << FourMonster.Name << ": "; 
    cin >> FourMonster.Nose;
    cout << endl;
    
    cout << "Please enter the Mouth for " << FourMonster.Name << ": ";
    cin >> FourMonster.Mouth;
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
    
    cout << ThreeMonster.Name << ": ";
    cout << ThreeMonster.Head << ", ";
    cout << ThreeMonster.Eyes << ", ";
    cout << ThreeMonster.Ears << ", ";
    cout << ThreeMonster.Nose << ", ";
    cout << ThreeMonster.Mouth << endl;
    cout << endl;
    
    cout << FourMonster.Name << ": ";
    cout << FourMonster.Head << ", ";
    cout << FourMonster.Eyes << ", ";
    cout << FourMonster.Ears << ", ";
    cout << FourMonster.Nose << ", ";
    cout << FourMonster.Mouth << endl;
    cout << endl;
    
return 0;
     
}