#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering { class ClampedFloatParameter; }

#define UNITYENGINE_RENDERING_UNIVERSAL_WHITEBALANCE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA066400)
#define UNITYENGINE_RENDERING_UNIVERSAL_WHITEBALANCE_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0xA0664E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WHITEBALANCE_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xA0664F0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int WhiteBalance_TypeDefinitionIndex = 32709;

	class WhiteBalance : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::ClampedFloatParameter* temperature; // 0x30
		::UnityEngine::Rendering::ClampedFloatParameter* tint; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WHITEBALANCE_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsTileCompatible()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WHITEBALANCE_ISTILECOMPATIBLE_OFFSET))(nullptr);
		}

		::System::Boolean IsActive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WHITEBALANCE_ISACTIVE_OFFSET))(nullptr);
		}

	};
}

