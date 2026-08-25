#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering { class ColorParameter; }
namespace UnityEngine::Rendering { class ClampedFloatParameter; }

#define UNITYENGINE_RENDERING_UNIVERSAL_SPLITTONING_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0xA065ED0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SPLITTONING_.CTOR_OFFSET UNITYSDK_OFFSET(0xA065EE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SPLITTONING_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xA066030)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int SplitToning_TypeDefinitionIndex = 32704;

	class SplitToning : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::ColorParameter* shadows; // 0x30
		::UnityEngine::Rendering::ColorParameter* highlights; // 0x38
		::UnityEngine::Rendering::ClampedFloatParameter* balance; // 0x40

		::System::Boolean IsTileCompatible()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SPLITTONING_ISTILECOMPATIBLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SPLITTONING_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsActive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SPLITTONING_ISACTIVE_OFFSET))(nullptr);
		}

	};
}

