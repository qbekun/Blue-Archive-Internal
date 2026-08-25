#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering { class ClampedFloatParameter; }

#define UNITYENGINE_RENDERING_UNIVERSAL_CHANNELMIXER_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xA062550)
#define UNITYENGINE_RENDERING_UNIVERSAL_CHANNELMIXER_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0xA0626F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CHANNELMIXER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA062700)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ChannelMixer_TypeDefinitionIndex = 32667;

	class ChannelMixer : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::ClampedFloatParameter* redOutRedIn; // 0x30
		::UnityEngine::Rendering::ClampedFloatParameter* redOutGreenIn; // 0x38
		::UnityEngine::Rendering::ClampedFloatParameter* redOutBlueIn; // 0x40
		::UnityEngine::Rendering::ClampedFloatParameter* greenOutRedIn; // 0x48
		::UnityEngine::Rendering::ClampedFloatParameter* greenOutGreenIn; // 0x50
		::UnityEngine::Rendering::ClampedFloatParameter* greenOutBlueIn; // 0x58
		::UnityEngine::Rendering::ClampedFloatParameter* blueOutRedIn; // 0x60
		::UnityEngine::Rendering::ClampedFloatParameter* blueOutGreenIn; // 0x68
		::UnityEngine::Rendering::ClampedFloatParameter* blueOutBlueIn; // 0x70

		::System::Boolean IsActive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CHANNELMIXER_ISACTIVE_OFFSET))(nullptr);
		}

		::System::Boolean IsTileCompatible()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CHANNELMIXER_ISTILECOMPATIBLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CHANNELMIXER_.CTOR_OFFSET))(nullptr);
		}

	};
}

