#include "EngineState.h"

EngineState :: EngineState():
        changed (false)
{}

EngineState :: EngineState(const EngineState& s) :
    changed (s.changed)
{}

void EngineState:: setChanged(){ changed = true;}

void EngineState:: showEngineState()
{
    if (changed)
    {
        cout << "The following has changed: ";
        if (changed) {cout << "Something has changed ";};
        cout << endl;
    }
    else { cout << "Nothing has changed" << endl; }
}
