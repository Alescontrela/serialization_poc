#include <msgpack.h>
#include <iostream>
#include "MotorCommand.h"

int main(int argc, char **argv)
{


    MotorCommand PID(12.00, 15.00, 6.00);

    // serialize the object into a buffer
    msgpack::sbuffer sbuf;
    msgpack::pack(sbuf, PID);

    // unpack the object into a msgpack::object
    msgpack::object_handle oh = \
            msgpack::unpack(sbuf.data(), sbuf.size());
    msgpack::object obj = oh.get();

    std::cout << obj << std::endl;

    // re-constrcuct object using msgpack::object constructor
    MotorCommand PID2(obj);

    return 0;
}
