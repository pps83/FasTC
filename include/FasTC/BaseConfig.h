// Copyright 2016 The University of North Carolina at Chapel Hill
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// Please send all BUG REPORTS to <pavel@cs.unc.edu>.
// <http://gamma.cs.unc.edu/FasTC/>

#ifndef BASECONFIG_H_
#define BASECONFIG_H_

// Does our compiler support cpp11 types?
#define FASTC_BASE_HAS_CPP11_TYPES

// ImageLoader.h/ImageWriter.h
#define PNG_FOUND
#define OPENGL_FOUND

// BPTCConfig.h
// Do we have the proper popcnt instruction defined?
#define NO_INLINE_ASSEMBLY
#define HAS_SSE_POPCNT
//#define HAS_SSE_41

#define HAS_ATOMICS
//#define HAS_GCC_ATOMICS
#define HAS_MSVC_ATOMICS
// #define FOUND_NVTT_BPTC_EXPORT

// PVRTCDefines.h
//#define PVRTEXLIB_FOUND
//#define DEBUG_PVRTC_DECODER

#endif /* BASECONFIG_H_ */
