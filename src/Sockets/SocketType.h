/**
 * @file SocketType.h
 * @author Azmi ŞAHİN (azmisahin@outlook.com)
 * @brief communication type
 * @version 0.1
 * @date 2022-05-04
 *
 * @copyright Copyright (c) 2022
 *
 */
#ifndef SOCKETTYPE_H
#define SOCKETTYPE_H

/**
 * communication type
 */
enum SocketType
{
    /**
     * SOCK_STREAM: TCP(reliable, connection oriented)
     */
    Stream = 1,
    /**
     * SOCK_DGRAM: UDP(unreliable, connectionless)
     */
    Datagram = 2
};
#endif
