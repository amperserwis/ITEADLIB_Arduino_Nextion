/**
 * @file NexText.h
 *
 * The definition of class NexText. 
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
 
#ifndef __NEXTEXT_H__
#define __NEXTEXT_H__

#include "NexTouch.h"
#include "NexHardware.h"

/**
 * NexText,subclass of NexTouch,provides simple methods to control text component.
 *
 */
class NexText: public NexTouch
{
public: /* methods */
    NexText(NexPid pid, NexCid cid, const char *name);
    
    uint16_t getText(char *buffer, uint16_t len);    
    bool setText(const char *buffer);    
};


#endif /* #ifndef __NEXTEXT_H__ */
