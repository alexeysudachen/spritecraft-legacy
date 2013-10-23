
/*

Copyright © 2003-2013, Alexéy Sudachén, alexey@sudachen.name

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.

*/

//#if !defined __m_time_h__
//#define __m_time_h__
//
//#include "m_autoconf.h"
//#include "m_debug.h"
//
//extern "C" void _Yield();
//
//NAMESPACE_MSKIN_BEGIN
//
//void     MOLE_FUNCALL SleepMillis(unsigned);
//u32_t  MOLE_FUNCALL GetMillis(void);
//u32_t  MOLE_FUNCALL MSkin_time(u32_t*);
//pchar_t  MOLE_FUNCALL MSkin_ctime(u32_t*);
//void     MOLE_FUNCALL ResetMillis();
//
//NAMESPACE_MSKIN_END
//
//#if ( MSKIN_TARGET_PLATFORM == MSKIN_PLATFORM_WIN32 && \
//      MSKIN_TARGET_PLATFORM_EX == MSKIN_PLATFORM_EX_WCE )
//inline u32_t time(u32_t* t)  { return MSKINSPACE::MSkin_time(t); }
//inline pchar_t ctime(u32_t* t) { return MSKINSPACE::MSkin_ctime(t); }
//#else
//#include <time.h>
//#endif
//
//#endif //__m_time_h__

//#include "../../lib.os/xtime.h"