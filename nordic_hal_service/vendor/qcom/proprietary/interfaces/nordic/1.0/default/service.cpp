#define LOG_TAG "vendor.shadowcreator..hardware.nordic@1.0-service"

#include <vendor/shadowcreator/hardware/nordic/1.0/INordic.h>
#include <hidl/LegacySupport.h>
#ifdef ARCH_ARM_32
#include <hwbinder/ProcessState.h>
#endif

using vendor::shadowcreator::hardware::nordic::V1_0::INordic;
using android::hardware::defaultPassthroughServiceImplementation;

int main() {
#ifdef ARCH_ARM_32
    android::hardware::ProcessState::initWithMmapSize((size_t)16384);
#endif
    return defaultPassthroughServiceImplementation<INordic>(10);
}