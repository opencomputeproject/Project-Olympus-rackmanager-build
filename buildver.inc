/*
 * File: buildver.inc
 *
 * Description: Defines version numbers for the build components that
 *              will get included into the corresponding binary images.
 *
 * Copyright (C) 2016 Microsoft Corp
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *    Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 *    Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the
 *    distribution.
 *
 *    Neither the name of Microsoft Corp nor the names of its 
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 *  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 *  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 *  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 *  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 *  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 *  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

/* Note 1: There is a space character after every number for the formatting
 * in scripts to work right. Do not remove them.
 *
 * Note 2: ROLLING-BUILD-ID will be automatically updated by updatebuildver 
 * script. This file needs to be manually checked in to maintain increments.
 */

#define ROLLING_BUILD_ID            412 

// U-Boot version
#define BSP_VERSION_MAJOR           1 
#define BSP_VERSION_MINOR           0 
#define BSP_VERSION_REVISION        3 
#define BSP_PATCH_MD5SUM            47159e165ba4f6b6f14896ee849e37f2

// Devicetree version
#define DTS_VERSION_MAJOR           1 
#define DTS_VERSION_MINOR           0 
#define DTS_VERSION_REVISION        3 

// Kernel version
#define KER_VERSION_MAJOR           1 
#define KER_VERSION_MINOR           0 
#define KER_VERSION_REVISION        3 

// Root file system version
#define RFS_VERSION_MAJOR           1 
#define RFS_VERSION_MINOR           0 
#define RFS_VERSION_REVISION        3 

// Build package version
#define PKG_VERSION_MAJOR           1 
#define PKG_VERSION_MINOR           0 
#define PKG_VERSION_REVISION        3 
