#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class MXVignetteBlendParameter; }
namespace UnityEngine::Rendering { class ColorParameter; }
namespace UnityEngine::Rendering { class Vector2Parameter; }
namespace UnityEngine::Rendering { class ClampedFloatParameter; }
namespace UnityEngine::Rendering { class BoolParameter; }

#define UNITYENGINE_RENDERING_UNIVERSAL_MXVIGNETTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0657F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MXVIGNETTE_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0xA065A80)
#define UNITYENGINE_RENDERING_UNIVERSAL_MXVIGNETTE_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xA065A90)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MXVignette_TypeDefinitionIndex = 32700;

	class MXVignette : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::Universal::MXVignetteBlendParameter* blend; // 0x30
		::UnityEngine::Rendering::ColorParameter* color; // 0x38
		::UnityEngine::Rendering::Vector2Parameter* center; // 0x40
		::UnityEngine::Rendering::ClampedFloatParameter* intensity; // 0x48
		::UnityEngine::Rendering::ClampedFloatParameter* smoothness; // 0x50
		::UnityEngine::Rendering::BoolParameter* rounded; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MXVIGNETTE_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsTileCompatible()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MXVIGNETTE_ISTILECOMPATIBLE_OFFSET))(nullptr);
		}

		::System::Boolean IsActive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MXVIGNETTE_ISACTIVE_OFFSET))(nullptr);
		}

	};
}

