/**
 * @file main.cpp
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
#include "../src/Helper/Help.h"
#include "../src/Sockets/Socket.h"

/**
 * @brief Connector test
 *
 * @param argc argument count
 * @param argv arguments
 * @return int
 */
int main(int argc, char const *argv[])
{
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
          cout << "Current Time"
               << "\t"
               << "Connector"
               << "\t"
                  "Status"
               << endl;
          cout << "----------"
               << "\t"
               << "----------"
               << "\t"
               << "----------" << endl;
          cout << time(0) << "\t" << instance.Id() << "\t\t"
               << "Create" << endl;

          SocketStatus socketStatus = instance.Connect(ipEndPoint);
          cout << time(0) << "\t" << instance.Id() << "\t\t"
               << "Connect" << endl;
          int sendStatus = instance.Send(message);
          cout << time(0) << "\t" << instance.Id() << "\t\t"
               << "Send" << endl;
          int receiveStatus = instance.Receive();
          cout << time(0) << "\t" << instance.Id() << "\t\t"
               << "Receive" << endl;
          char *data = instance.Data();
          cout << time(0) << "\t" << instance.Id() << "\t\t"
               << data << endl;
     }
     return 0;
}