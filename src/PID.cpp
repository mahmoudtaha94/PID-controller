#include "PID.h"
#include <math.h>
#include <iostream>

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp_steer, double Ki_steer, double Kd_steer) {
	this->Kp_steer= Kp_steer;
	this->Ki_steer= Ki_steer;
	this->Kd_steer= Kd_steer;
	
	p_error=0;
	i_error=0;
	d_error=0;

}

void PID::UpdateError(double cte) {
	p_error =cte;
	i_error +=cte;
	d_error = cte - previuos_cte;
	previuos_cte = cte;
	
}

double PID::TotalError() {
	return -Kp_steer * p_error - Ki_steer * i_error - Kd_steer * d_error ;
}

