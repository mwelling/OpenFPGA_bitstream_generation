#include "vtr_version.h"

//This file is automatically processed by CMAKE and replaces
//the values between ampersand's with the releveant CMAKE variable
//before being compiled.
namespace vtr {
    const char* VERSION = "8.1.0-dev+9e53e9a0a";
    const char* VERSION_SHORT = "8.1.0-dev";

    const size_t VERSION_MAJOR = 8;
    const size_t VERSION_MINOR = 1;
    const size_t VERSION_PATCH = 0;
    const char* VERSION_PRERELEASE = "dev";

    const char* VCS_REVISION = "v8.0.0-7093-g9e53e9a0a";
    const char* VCS_REVISION_SHORT = "9e53e9a0a";
    const char* COMPILER = "GNU 11.3.0 on Linux-5.19.0-35-generic x86_64";
    const char* BUILD_TIMESTAMP = "2023-03-09T12:34:30";
    const char* BUILD_INFO = "release IPO VTR_ASSERT_LEVEL=2";
}
