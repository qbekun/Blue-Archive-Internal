#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering { class ColorParameter; }
namespace UnityEngine::Rendering { class Vector2Parameter; }
namespace UnityEngine::Rendering { class ClampedFloatParameter; }
namespace UnityEngine::Rendering { class BoolParameter; }

#define UNITYENGINE_RENDERING_UNIVERSAL_VIGNETTE_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xA0661D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VIGNETTE_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0xA066210)
#define UNITYENGINE_RENDERING_UNIVERSAL_VIGNETTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA066220)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int Vignette_TypeDefinitionIndex = 32708;

	class Vignette : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::ColorParameter* color; // 0x30
		::UnityEngine::Rendering::Vector2Parameter* center; // 0x38
		::UnityEngine::Rendering::ClampedFloatParameter* intensity; // 0x40
		::UnityEngine::Rendering::ClampedFloatParameter* smoothness; // 0x48
		::UnityEngine::Rendering::BoolParameter* rounded; // 0x50

		::System::Boolean IsActive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VIGNETTE_ISACTIVE_OFFSET))(nullptr);
		}

		::System::Boolean IsTileCompatible()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VIGNETTE_ISTILECOMPATIBLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VIGNETTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

