#define _USE_MATH_DEFINES
#ifdef _MSC_VER
#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif
#ifdef UNICODE
#undef UNICODE
#endif
#pragma warning(disable: 4244)
#endif
#ifdef _WIN32
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <Windows.h>
#undef LoadImage
#undef AddJob
#endif


#include "src/ASTCEncoder/AstcDecompressor.cpp"
#include "src/ASTCEncoder/IntegerEncoding.cpp"
#include "src/Base/Color.cpp"
#include "src/Base/CompressionJob.cpp"
#include "src/Base/Image.cpp"
#include "src/Base/IPixel.cpp"

#define Clamp Clamp_1
#include "src/Base/Pixel.cpp"
#undef Clamp

#include "src/BPTCEncoder/BptcCompressor.cpp"
#include "src/BPTCEncoder/CompressNVTT.cpp"
#include "src/BPTCEncoder/BptcDecompressor.cpp"
#include "src/BPTCEncoder/ParallelStage.cpp"

#define sad sad_1
#define Clamp Clamp_2
#include "src/BPTCEncoder/RGBAEndpoints.cpp"
#undef sad
#undef Clamp
#undef ALIGN_SSE

// #include "src/BPTCEncoder/BptcCompressorSIMD.cpp"
//#define kNumColorChannels kNumColorChannels_1
//#define kMaxNumDataPoints kMaxNumDataPoints_1
//#include "src/BPTCEncoder/RGBAEndpointsSIMD.cpp"
//#undef kNumColorChannels
//#undef kMaxNumDataPoints

#include "src/Core/CompressedImage.cpp"

#define sad sad_2
#define clamp clamp_1
#include "src/Core/TexComp.cpp"
#undef sad
#undef clamp

#include "src/Core/Thread.cpp"
#include "src/Core/ThreadGroup.cpp"
#include "src/Core/ThreadSafeStreambuf.cpp"

#define clamp clamp_2
#include "src/Core/WorkerQueue.cpp"
#undef clamp

#include "src/DXTEncoder/DxtCompressor.cpp"
#include "src/DXTEncoder/DxtDecompressor.cpp"
#include "src/ETCEncoder/EtcCompressor.cpp"
#include "src/ETCEncoder/EtcDecompressor.cpp"
#include "src/ETCEncoder/rg_etc1.cpp"
#undef strncpy

#define ReportError ReportError_1
#include "src/IO/ImageFile.cpp"
#undef ReportError

#define min min_1
#define abs abs_1
#define sad sad_3
#define ReportError ReportError_2
#include "src/IO/ImageLoader.cpp"
#undef min
#undef abs
#undef sad
#undef ReportError

#include "src/IO/ImageLoaderASTC.cpp"
#include "src/IO/ImageLoaderKTX.cpp"

#define ReportError ReportError_3
#include "src/IO/ImageLoaderPNG.cpp"
#undef ReportError

#include "src/IO/ImageLoaderPVR.cpp"
#include "src/IO/ImageLoaderTGA.cpp"
#include "src/IO/ImageWriter.cpp"
#include "src/IO/ImageWriterKTX.cpp"
#include "src/IO/ImageWriterPNG.cpp"
#include "src/PVRTCEncoder/Block.cpp"
#include "src/PVRTCEncoder/PvrtcCompressor.cpp"
#include "src/PVRTCEncoder/CompressorPVRLib.cpp"

#define Interleave Interleave_1
#include "src/PVRTCEncoder/PvrtcDecompressor.cpp"
#undef Interleave

#define Clamp Clamp_3
#include "src/PVRTCEncoder/PVRTCImage.cpp"
#undef Clamp

#ifdef _WIN32
#include "src/Core/StopWatchWin32.cpp"
#include "src/Core/ThreadWin32.cpp"
#include "src/IO/FileStreamWin32.cpp"
#else
#include "src/Core/ThreadPThread.cpp"
#include "src/IO/FileStreamUnix.cpp"
#if defined(__APPLE__)
#include "src/Core/StopWatchOSX.cpp"
#elif defined(__ANDROID__)
#include "src/Core/StopWatchUnix.cpp"
#endif
#endif

#include "third_party/tga/targa.c"
