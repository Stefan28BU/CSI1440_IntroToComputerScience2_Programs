/*
 * author: Yufan Xu
 * assignment: homework 5 program
 * date created: 09/17/2017
 * date due: 09/17/2017
 * date last modified: 09/17/2017
 */

#include <iostream> //cin, cout, endl

using namespace std; //std::

//GameShip class: base class of GameShipWarp class
class GameShip
{
private:    //private member, cannot be accessed by derived class
    int y;
protected:  //protected member, can be accessed by derived class
    int x;
public:     //public member
    GameShip(); //default constructor
    GameShip(int x, int y) //constructor
        {this->x = x; this->y = y;} //set x and y by using 'this' pointer;
    int moveUp()    //increase y by 1
        {y += 1; return y;}
    int moveDown()  //decrease y by 1
        {y -= 1; return y;}
    int moveLeft()  //decrease x by 1
        {x -= 1; return x;}
    int moveRight() //increase x by 1
        {x += 1; return x;}
    void display()  //display result
        {cout << "(" << x << ", " << y << ")" << endl;}
};

//GameShipWarp class: derived class of GameShip class
class GameShipWarp: public GameShip
{
public: //public members
    GameShipWarp(int x, int y): GameShip(x, y){} //constructor
    int wrap()  //increase x by 10
        {x += 10; return x;}
};

//main fuction
int main() {
    //create GameShipWarp class
    //GameShip test1(3,4);
    GameShipWarp test(3,4);
    //calling functions from base class and display results
    test.moveUp();
    cout << "Move up by 1 unit: ";
    test.display();
    test.moveDown();
    cout << "Move down by 1 unit: ";
    test.display();
    test.moveLeft();
    cout << "Move left by 1 unit: ";
    test.display();
    test.moveRight();
    cout << "Move right by 1 unit: ";
    test.display();
    test.wrap();
    cout << "Move right by 10 units: ";
    test.display();

    //program ended return 0
    return 0;
}