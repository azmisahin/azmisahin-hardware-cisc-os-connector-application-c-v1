/**
 * @file ProtocolType.h
 * @author Azmi ŞAHİN (azmisahin@outlook.com)
 * @brief Specifies the protocols that the Socket class supports.
 * @version 0.1
 * @date 2022-05-04
 *
 * @copyright Copyright (c) 2022
 *
 */
#ifndef PROTOCOLTYPE_H
#define PROTOCOLTYPE_H

/**
 * Specifies the protocols that the Socket class supports.
 */
enum ProtocolType
{
    /**
     * Internet Protocol.
     */
    Ip = 0,

    /**
     * Internet Control Message Protocol.
     */
    Icmp = 1,

    /**
     * Internet Group Management Protocol.
     */
    Igmp = 2,

    /**
     * Gateway to Gateway Protocol.
     */
    Ggp = 3,

    /**
     * Internel Protocol Version 4.
     */
    IpV4 = 4
};
#endif
