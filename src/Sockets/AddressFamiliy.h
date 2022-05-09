/**
 * @file AddressFamiliy.h
 * @author Azmi ŞAHİN (azmisahin@outlook.com)
 * @brief Specifies the addressing scheme that an instance of the Socket class can use.
 * @version 0.1
 * @date 2022-05-04
 *
 * @copyright Copyright (c) 2022
 *
 */
#ifndef ADDRESSFAMILIY_H
#define ADDRESSFAMILIY_H

/**
 * Specifies the addressing scheme that an instance of the Socket class can use.
 */
enum AddressFamiliy
{
    /**
     * Unix local to host address.
     */
    Unix = 1,

    /**
     * Address for IP version 4.
     */
    InterNetwork = 2
};
#endif
