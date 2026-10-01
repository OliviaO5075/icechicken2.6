#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples

inline pros::Motor intake(-4);
inline pros::Motor intake2(7);
inline pros::Motor sixbar(12);
inline pros::Motor sixbar1(-19);
inline ez::Piston claw('G');