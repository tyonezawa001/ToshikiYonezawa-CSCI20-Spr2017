
/* Updated by: Toshiki Yonezawa
 * Updated on: 02/13/2017
 * The program is based on "Mad Libs" game, but it initiallized the variables to a default of my choice.
 */
 
#include <iostream>
#include <string>
using namespace std;

int main() {
    
    // initialize the variables to a default of my choice
    std::string mainCharacter("Toshiki");
    std::string bodyPart("Brain");
    std::string deadlyWeapon("Pencil");
    std::string timeForRecovery("42");
    std::string horribleThing("MassDictionary");
    std::string placeForRecovery("ClassRoom");
    std::string wordRelative("Mother");
    std::string thing("Book");
    std::string future("Death");
    
    // telling a story
    cout << endl;
    cout << "When " << mainCharacter << " was a child, " << mainCharacter << " suffered a serious injury to " << bodyPart << " from being stabbed with a " << deadlyWeapon << "." << endl;
    cout << mainCharacter << " thought the serious injury required " << timeForRecovery << " month for recovery." << endl;
    cout << "Before the happning, " << mainCharacter << " sensed that death was approaching because " << mainCharacter << " saw " << horribleThing << " in " << placeForRecovery << " everyday." << endl;
    cout << mainCharacter << " asked " << wordRelative << " about " << horribleThing << "." << endl;
    cout << wordRelative << " laughed out loud, and " << wordRelative << " explained " << horribleThing << " is just " << thing << "." << endl;
    cout << "Finally, " << mainCharacter << " thought " << horribleThing << " was an omen of " << future << "." << endl;
    
    return 0;
}