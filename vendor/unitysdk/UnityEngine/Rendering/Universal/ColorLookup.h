#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering { class TextureParameter; }
namespace UnityEngine::Rendering { class ClampedFloatParameter; }

#define UNITYENGINE_RENDERING_UNIVERSAL_COLORLOOKUP_VALIDATELUT_OFFSET UNITYSDK_OFFSET(0xA063630)
#define UNITYENGINE_RENDERING_UNIVERSAL_COLORLOOKUP_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0xA063880)
#define UNITYENGINE_RENDERING_UNIVERSAL_COLORLOOKUP_.CTOR_OFFSET UNITYSDK_OFFSET(0xA063890)
#define UNITYENGINE_RENDERING_UNIVERSAL_COLORLOOKUP_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xA063960)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ColorLookup_TypeDefinitionIndex = 32671;

	class ColorLookup : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::TextureParameter* texture; // 0x30
		::UnityEngine::Rendering::ClampedFloatParameter* contribution; // 0x38

		::System::Boolean ValidateLUT()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_COLORLOOKUP_VALIDATELUT_OFFSET))(nullptr);
		}

		::System::Boolean IsTileCompatible()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_COLORLOOKUP_ISTILECOMPATIBLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_COLORLOOKUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsActive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_COLORLOOKUP_ISACTIVE_OFFSET))(nullptr);
		}

	};
}

