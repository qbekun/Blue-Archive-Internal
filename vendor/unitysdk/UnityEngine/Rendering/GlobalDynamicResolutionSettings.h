#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class DynamicResolutionType; }
namespace UnityEngine::Rendering { class DynamicResUpscaleFilter; }
namespace UnityEngine::Rendering { class GlobalDynamicResolutionSettings; }

#define UNITYENGINE_RENDERING_GLOBALDYNAMICRESOLUTIONSETTINGS_NEWDEFAULT_OFFSET UNITYSDK_OFFSET(0x9FA91E0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int GlobalDynamicResolutionSettings_TypeDefinitionIndex = 33909;

	class GlobalDynamicResolutionSettings : public Il2CppObject
	{
	public:
		::System::Boolean enabled; // 0x10
		::System::Boolean useMipBias; // 0x11
		::System::Boolean enableDLSS; // 0x12
		::System::UInt32 DLSSPerfQualitySetting; // 0x14
		::System::Boolean DLSSUseOptimalSettings; // 0x18
		::System::Single DLSSSharpness; // 0x1C
		::System::Single maxPercentage; // 0x20
		::System::Single minPercentage; // 0x24
		::UnityEngine::Rendering::DynamicResolutionType* dynResType; // 0x28
		::UnityEngine::Rendering::DynamicResUpscaleFilter* upsampleFilter; // 0x29
		::System::Boolean forceResolution; // 0x2A
		::System::Single forcedPercentage; // 0x2C
		::System::Single lowResTransparencyMinimumThreshold; // 0x30
		::System::Single rayTracingHalfResThreshold; // 0x34

		::UnityEngine::Rendering::GlobalDynamicResolutionSettings* NewDefault()
		{
			return (return (::UnityEngine::Rendering::GlobalDynamicResolutionSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GLOBALDYNAMICRESOLUTIONSETTINGS_NEWDEFAULT_OFFSET))(nullptr);
		}

	};
}

