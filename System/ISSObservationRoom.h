#ifndef ISSOBSERVATIONROOM_H
#define ISSOBSERVATIONROOM_H
#include "ISS.h"
#include <string>
class SpaceShip;

//! ISSObservationRoom class
/*!
* Is the concrete observer participant in the Observer Design Pattern. 
 */
class ISSObservationRoom : public ISS
{
public:
//! ISSObservationRoom constructor 
/*!
 * Initializes the ship variable
 */
    ISSObservationRoom(SpaceShip* s);
    
    /*!
 * destructor
 */
    ~ISSObservationRoom();
//! update method
/*!
 * Updates the roomState variable based on changes to the ship variable.
*/
    void update();


private:
    string roomState; //!< A string variable to record the room state.
    SpaceShip* ship; //!< A pointer to an object of type SpaceShip.

};

#endif /* ISSOBSERVATIONROOM_H */

