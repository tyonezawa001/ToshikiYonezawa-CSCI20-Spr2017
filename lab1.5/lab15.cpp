#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string mainCharacter;
    string bodyPart;
    string deadlyWeapon;
    int timeForRecovery = 0;
    string horribleThing;
    string placeForRecovery;
    string wordRelative;
    string thing;
    int finalTimeForRecovery = 0;
    
    cout << endl;
    cout << "Please enter words for this story without spaces." << endl;
    cout << endl;
    
    cout << "Please enter a main character for the story: " << endl;
    cin >> mainCharacter;
    
    cout << "Please enter a name of body part from your body: " << endl;
    cin >> bodyPart;
    
    cout << "Please enter a name of weapon which you want to use: " << endl;
    cin >> deadlyWeapon;
    
    cout << "Please enter your favorite positive integer: " << endl;
    cin >> timeForRecovery;
    
    cout << "Please enter a thing you don't like: " << endl;
    cin >> horribleThing;
    
    cout << "Please enter your favorite place: " << endl;
    cin >> placeForRecovery;
    
    cout << "Please enter a kind of relative: " << endl;
    cin  >> wordRelative;
    
    cout << "Please enter a name of something you want to put on here: " << endl;
    cin >> thing;
    
    cout << "Please enter a number which in your brain now: " << endl;
    cin >> finalTimeForRecovery;
    
    cout << endl;
    cout << "When " << mainCharacter << " was a child, " << mainCharacter << " suffered a serious injury to " << bodyPart << " from being stabbed with a " << deadlyWeapon << "." << endl;
    cout << mainCharacter << " thought the serious injury required " << timeForRecovery << " month for recovery." << endl;
    cout << mainCharacter << " sensed that death was approaching because " << mainCharacter << " saw " << horribleThing << " in " << placeForRecovery << " everyday." << endl;
    cout << mainCharacter << " asked " << wordRelative << " about " << horribleThing << "." << endl;
    cout << wordRelative << " laughed out loud, and " << wordRelative << " explained " << horribleThing << " is just " << thing << "." << endl;
    cout << "Finally, " << mainCharacter << " left the " << placeForRecovery << " after " << finalTimeForRecovery << " days." << endl;
    
    return 0;
}