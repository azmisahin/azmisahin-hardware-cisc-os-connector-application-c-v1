/**
 * @file SocketStatus.h
 * @author Azmi ŞAHİN (azmisahin@outlook.com)
 * @brief Socket status
 * @version 0.1
 * @date 2022-05-04
 *
 * @copyright Copyright (c) 2022
 *
 */
#ifndef SOCKETSTATUS_H
#define SOCKETSTATUS_H

/**
 * Sockets return codes
 */
enum SocketStatus
{
    /**
     * Connected
     */
    Connected = 1,
    
    /**
     * Initialize
     */
    Initialize = 0,

    /**
     * Initialize error.
     */
    InitializeError = -1,

    /**
     * Convert error
     */
    ConvertError = -2,

    /**
     * Connection Error
     */
    ConnectionError = -3
};
#endif
