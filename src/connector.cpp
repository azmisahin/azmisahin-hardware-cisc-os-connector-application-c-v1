/**
 * @file connector.cpp
 * @author Azmi ŞAHİN (azmisahin@outlook.com)
 * @brief emulation of risc-based architectures with a cisc architecture.
 * @version 0.1
 * @date 2022-05-02
 *
 * @copyright Copyright (c) 2022
 */

/**
 * Module dependencies
 */
#include "Helper/Help.h"
#include "Sockets/Socket.h"

/**
 * @brief Connector test
 *
 * @param argc argument count
 * @param argv arguments
 * @return int
 */
int main(int argc, char const *argv[])
{
     int result = -1;

     Help help;
     if (argc != 4)
     {
          help.Display(help.Usage());
     }
     else
     {
          char *hostName = (char *)argv[1];
          int portNumber = strtol(argv[2], NULL, 10);
          char *message = (char *)argv[3];

          IpAddress ipAddress(hostName);
          IpEndPoint ipEndPoint(ipAddress, portNumber);

          Socket instance(AddressFamiliy::InterNetwork, SocketType::Stream, ProtocolType::Ip);

          SocketStatus socketStatus = instance.Connect(ipEndPoint);

          int sendStatus = instance.Send(message);

          int receiveStatus = instance.Receive();

          result = receiveStatus;
     }
     return result;
}