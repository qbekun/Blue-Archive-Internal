#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering { class Vector4Parameter; }
namespace UnityEngine::Rendering { class MinFloatParameter; }

#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWSMIDTONESHIGHLIGHTS_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xA065BF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWSMIDTONESHIGHLIGHTS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA065C90)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWSMIDTONESHIGHLIGHTS_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0xA065EC0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ShadowsMidtonesHighlights_TypeDefinitionIndex = 32703;

	class ShadowsMidtonesHighlights : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::Vector4Parameter* shadows; // 0x30
		::UnityEngine::Rendering::Vector4Parameter* midtones; // 0x38
		::UnityEngine::Rendering::Vector4Parameter* highlights; // 0x40
		::UnityEngine::Rendering::MinFloatParameter* shadowsStart; // 0x48
		::UnityEngine::Rendering::MinFloatParameter* shadowsEnd; // 0x50
		::UnityEngine::Rendering::MinFloatParameter* highlightsStart; // 0x58
		::UnityEngine::Rendering::MinFloatParameter* highlightsEnd; // 0x60

		::System::Boolean IsActive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWSMIDTONESHIGHLIGHTS_ISACTIVE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWSMIDTONESHIGHLIGHTS_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsTileCompatible()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWSMIDTONESHIGHLIGHTS_ISTILECOMPATIBLE_OFFSET))(nullptr);
		}

	};
}

