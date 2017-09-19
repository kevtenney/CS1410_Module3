#include <iostream>
using namespace std;

// Global, Constants, and Structures
const int MAX_X = 10; //global constant variables
const int MAX_Y = 10; //everything in program can see these
const float IN_CM = 2.54;

struct Point    //must define struct above the prototype
{
    float x;    //x-coordinate
    float y;    //y-coordinate
};

// Prototypes
void ShowPoint(const struct Point &p); //passing by reference
//void ShowPoint(struct Point p) //passing the argument by value, making a copy
                                    //local copy will get destroyed
void UpdatePoint(struct Point &p); //passes by reference not copy because of the &

struct Point CreatePoint(); //no parameters so nothing inside ()
    // it is catching the struct point... if it was void it would not catch anything

struct Point CreatePointValue(float x = 1.0, float y = 1.0); //float x and y are the signature
// Main Program Program...this sets x as 0.0 for the default value

//Very small functions you can use inline functions
inline float InchesToCm(float val) { return val * IN_CM;};

int main(void)
{
    Point p1 = {2.5, 3.1};
    Point p2, p3;
    ShowPoint(p1);
    UpdatePoint(p1);
    ShowPoint(p1);

    p2 = CreatePoint();
    ShowPoint(p2);

    p3 = CreatePointValue(1.5, 7.9); //these are two required parameters
    ShowPoint(p3);

    p3 = CreatePointValue();
    ShowPoint(p3);

    p3.x = InchesToCm(1.5);
    ShowPoint(p3);

    return 0;

}

// Function Definitions
/* Take a constant address of a structure Point.
 * You cannot modify the content of the structure
 */
void ShowPoint(const struct Point &p)
{
    cout <<"X-coordinate is: "<<p.x << endl;
    cout <<"Y-coordinate is: "<<p.y << endl;
}
void UpdatePoint(struct Point &p)
{
    //Update x and y by incrementing their value
    //by 1
    p.x += 1.0;
    p.y = p.y + 1.0;
}
struct Point CreatePoint()
{
    Point p;
    p.x = 0.0;
    p.y = 0.0;

    return p; //this must match struct Point to return the same thing
};

/* Take two optional input values...If no values are
 * provided, use the DEFAULT values to initialize the
 * parameters*/
struct Point CreatePointValue(float x, float y)
//The default values only go in the prototype. Not here, on the
// definition
{
    Point p;
    p.x = x;
    p.y = y;
    return p;
}