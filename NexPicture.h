/**
 * @file NexPicture.h
 *
 * The definition of class NexPicture. 
 *
 * @author Wu Pengfei (email:<pengfei.wu@itead.cc>)
 * @date 2015/8/13
 *
 * @copyright 
 * Copyright (C) 2014-2015 ITEAD Intelligent Systems Co., Ltd. \n
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 */

#ifndef __NEXPICTURE_H__
#define __NEXPICTURE_H__

#include "NexTouch.h"
#include "NexHardware.h"

/**
 * NexPicture,subclass of NexTouch,provides simple methods to control picture component. 
 *
 */
class NexPicture: public NexTouch
{
public: /* methods */
    NexPicture(NexPid pid, NexCid cid, const char *name);
    
    bool getPic(uint32_t *number);
    bool setPic(uint32_t number);
};


#endif /* #ifndef __NEXPICTURE_H__ */
