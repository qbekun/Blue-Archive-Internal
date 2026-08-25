#pragma once
#include <stdint.h>
#include "offsets.h"
#include <unitysdk/unitysdk.h>

// The Il2Cpp SDK leaves some useful methods commented out.
// Their offsets are still defined, so we re-expose them here.
namespace SDK_Ext
{
    // O85a2fc0eec9d88d3f1abf8cb5586d22608a4ec05a279baa18ae3ecaf543a085a::O1a45b2fb40755b29b1f18b574e02c01a62111b7f70841e279a7bffd2b4ebcf71 (TryGetValue)
    inline bool StatGetValue(void* stat, int32_t statType, int64_t* outValue)
    {
        if (!stat || !outValue) return false;
        return ((bool(*)(void*, int32_t, int64_t*, void*))((PBYTE)hIl2Cpp + OFFSET_STAT_TRYGETVALUE))(stat, statType, outValue, nullptr);
    }

    // O85a2fc0eec9d88d3f1abf8cb5586d22608a4ec05a279baa18ae3ecaf543a085a::O85215d4fc802131144c04185e727b5637ab0c51f02b54f963f818a3c2cb93363 (SetValue)
    inline void StatSetValue(void* stat, int32_t statType, int64_t value)
    {
        if (!stat) return;
        ((void(*)(void*, int32_t, int64_t, void*))((PBYTE)hIl2Cpp + OFFSET_STAT_SETVALUE))(stat, statType, value, nullptr);
    }
}