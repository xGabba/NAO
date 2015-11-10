#include "Objekte.h"

Objekte::Objekte()
{
    //set values for default constructor
    setType("Objekte");
    setColor(Scalar(0,0,0));
}

Objekte::Objekte(string name){

    setType(name);

    if(name=="blue"){
        //TODO: use "calibration mode" to find HSV min
        //and HSV max values

        setHSVmin(Scalar(92,150,0));
        setHSVmax(Scalar(124,255,255));

        //BGR value for Green:
        setColor(Scalar(255,0,0));
    }

    if(name=="green"){
        //TODO: use "calibration mode" to find HSV min
        //and HSV max values

        setHSVmin(Scalar(35,70,100));
        setHSVmax(Scalar(85,255,255));

        //BGR value for Yellow:
        setColor(Scalar(0,255,0));
    }

    if(name=="yellow"){
        //TODO: use "calibration mode" to find HSV min
        //and HSV max values

        setHSVmin(Scalar(1,124,123));
        setHSVmax(Scalar(35,255,255));

        //BGR value for Red:
        setColor(Scalar(0,255,255));
    }
	if(name=="red"){
        //TODO: use "calibration mode" to find HSV min
        //and HSV max values

		setHSVmin(Scalar(0,110,130));
		setHSVmax(Scalar(20,255,255));

        //BGR value for Red:
		setColor(Scalar(0,0,255));
	}
    if(name=="cyan"){
        //TODO: use "calibration mode" to find HSV min
        //and HSV max values

		setHSVmin(Scalar(86,105,130));
		setHSVmax(Scalar(100,255,255));

        //BGR value for Cyan:
		setColor(Scalar(255,255,0));
    }
    if(name=="magenta"){
        //TODO: use "calibration mode" to find HSV min
        //and HSV max values

		setHSVmin(Scalar(145,60,100));
		setHSVmax(Scalar(175,256,256));

        //BGR value for Magenta:
		setColor(Scalar(255,0,255));
    }
}

Objekte::~Objekte(void)
{
}

int Objekte::getXPos(){
    return Objekte::xPos;
}

void Objekte::setXPos(int x){
    Objekte::xPos = x;
}

int Objekte::getYPos(){
    return Objekte::yPos;
}

void Objekte::setYPos(int y){
    Objekte::yPos = y;
}

Scalar Objekte::getHSVmin(){
    return Objekte::HSVmin;
}

Scalar Objekte::getHSVmax(){
    return Objekte::HSVmax;
}

void Objekte::setHSVmin(Scalar min){
    Objekte::HSVmin = min;
}

void Objekte::setHSVmax(Scalar max){
    Objekte::HSVmax = max;
}
