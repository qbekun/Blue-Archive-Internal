#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class MXGlitchTypeParameter; }
namespace UnityEngine::Rendering { class FloatParameter; }
namespace UnityEngine::Rendering { class BoolParameter; }

#define UNITYENGINE_RENDERING_UNIVERSAL_MXGLITCH_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xA064E80)
#define UNITYENGINE_RENDERING_UNIVERSAL_MXGLITCH_.CTOR_OFFSET UNITYSDK_OFFSET(0xA064F00)
#define UNITYENGINE_RENDERING_UNIVERSAL_MXGLITCH_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0xA065190)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MXGlitch_TypeDefinitionIndex = 32694;

	class MXGlitch : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::Universal::MXGlitchTypeParameter* mode; // 0x30
		::UnityEngine::Rendering::FloatParameter* displacement; // 0x38
		::UnityEngine::Rendering::FloatParameter* threshold; // 0x40
		::UnityEngine::Rendering::FloatParameter* amount; // 0x48
		::UnityEngine::Rendering::FloatParameter* noiseSpeed; // 0x50
		::UnityEngine::Rendering::FloatParameter* shakePower; // 0x58
		::UnityEngine::Rendering::FloatParameter* activeRatio; // 0x60
		::UnityEngine::Rendering::BoolParameter* horizontalMode; // 0x68

		::System::Boolean IsActive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MXGLITCH_ISACTIVE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MXGLITCH_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsTileCompatible()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MXGLITCH_ISTILECOMPATIBLE_OFFSET))(nullptr);
		}

	};
}

