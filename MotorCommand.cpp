#include "MotorCommand.h"

MotorCommand::MotorCommand(double P, double I, double D)
{
    this->P = P;
    this->I = I;
    this->D = D;
}

MotorCommand::MotorCommand(msgpack::object const& o)
{
    this->P = o.via.array.ptr[0].as<double>();
    this->I = o.via.array.ptr[1].as<double>();
    this->D = o.via.array.ptr[2].as<double>();
}
