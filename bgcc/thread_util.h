/***********************************************************************
  * Copyright (c) 2012, Baidu Inc. All rights reserved.
  * 
  * Licensed under the BSD License
  * you may not use this file except in compliance with the License.
  * You may obtain a copy of the License at
  * 
  *      license.txt
  *********************************************************************/

#ifndef _BGCC2_THREAD_UTIL_H_
#define _BGCC2_THREAD_UTIL_H_

#include "bgcc_common.h"

namespace bgcc {
	class ThreadUtil {
	public:
		static int64_t self_id();
	};
}

#endif

