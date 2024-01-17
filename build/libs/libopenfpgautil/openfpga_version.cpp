#include "openfpga_version.h"

//This file is automatically processed by CMAKE and replaces
//the values between ampersand's with the releveant CMAKE variable
//before being compiled.
namespace openfpga {
    const char* VERSION = "1.2.753-dev+3b3aa150";
    const char* VERSION_SHORT = "1.2.753-dev";

    const size_t VERSION_MAJOR = 1;
    const size_t VERSION_MINOR = 2;
    const size_t VERSION_PATCH = 753;
    const char* VERSION_PRERELEASE = "dev";

    const char* VCS_REVISION = "Final1.1-776-g3b3aa150";
    const char* VCS_REVISION_SHORT = "3b3aa150";

    const char* COMPILER = "GNU 11.3.0 on Linux-5.19.0-35-generic x86_64";
    const char* BUILD_TIMESTAMP = "2023-03-09T12:45:33";
    const char* BUILD_INFO = "release ASSERT_LEVEL=2";
}
