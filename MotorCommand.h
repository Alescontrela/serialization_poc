#include <msgpack.hpp>

class MotorCommand
{
public:
    // user-defined constructor and de-serialization constructor
    MotorCommand(double P, double I, double D);
    MotorCommand(msgpack::object const& o);

    double P;
    double I;
    double D;
    MSGPACK_DEFINE(P, I, D);
};
