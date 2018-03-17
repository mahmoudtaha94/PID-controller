# PID Controller project
Udacity SDCND Term 2, Project 4


#### Project Steps
* Implement PID Controller for Steering and control the speed
* Optimize init parameters for each PID coefficient

## Results / Reflection
A video of the simulated car driving around the track can be found (https://youtu.be/QZ7koW1VWew)

#### Components of PID
* The "P" for proportional controls the response of the car to the CTE, if it's too high the car will respond too fast making it oscillate, too low won't make it respond
well to the curves. The P is just a constant number multiplied by the error. 

* The "I" for integral is making sure that the car is driving in the middle, by summing up all the previuos CTEs so that if the I error is negative, the car knows that it's on the left side of the track, if positive, it's on the right side. So this parameter help the car to stay in the middle by making the error almost 0. A low coefficent for I will cause the car to tend to drift to one side of the lane or the other.

* The "D" for derivate is the difference between two consequative CTEs that helps to get a smoother drive because it prevents the car from making big oscillations. Too low of a D coefficient will lead to the oscillations being too high with more overshooting.


#### Finding the right coefficients
the final values of the PID was determined by manual tuning and were(0.23,0.002,3.5).Also tried to do the Ziegler–Nichols method but once I play with the P parameter, the car go out of the track so i couldn't get stable and consistent oscillations. And for the speed control, I tried making another PID controller for the speed but it was making it harder for me to get the right values, instead of tuning 3 parameters now I tune 6 parameters, so i made it change with respect to the steering value using the using the negative absolute function which has this graph(^), +1 to make the peak at 1. 
