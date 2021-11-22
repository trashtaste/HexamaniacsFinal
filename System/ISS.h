#ifndef ISS_H
#define ISS_H

using namespace std;

//! ISS class
/*!
* Is the observer participant in the Observer Design Pattern. 
 */
class ISS {
public:
    
//! update 
/*!
* A pure virtual method that will be implemented by the concrete observer class ISSObservationRoom
*/
    void virtual update() = 0;
private:
    
};

#endif /* ISS_H */

