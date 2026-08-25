#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Color; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine::UIElements::UIR { class TextCoreSettings; }

#define UNITYENGINE_UIELEMENTS_UIR_TEXTCORESETTINGS_EQUALS_OFFSET UNITYSDK_OFFSET(0xA33E430)
#define UNITYENGINE_UIELEMENTS_UIR_TEXTCORESETTINGS_EQUALS_OFFSET UNITYSDK_OFFSET(0xA33E4D0)
#define UNITYENGINE_UIELEMENTS_UIR_TEXTCORESETTINGS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA33E5D0)

namespace UnityEngine::UIElements::UIR
{
	inline static constexpr unsigned int TextCoreSettings_TypeDefinitionIndex = 30747;

	class TextCoreSettings : public Il2CppObject
	{
	public:
		::UnityEngine::Color* faceColor; // 0x10
		::UnityEngine::Color* outlineColor; // 0x20
		::System::Single outlineWidth; // 0x30
		::UnityEngine::Color* underlayColor; // 0x34
		::UnityEngine::Vector2* underlayOffset; // 0x44
		::System::Single underlaySoftness; // 0x4C

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_TEXTCORESETTINGS_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::UIElements::UIR::TextCoreSettings* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::UIR::TextCoreSettings*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_TEXTCORESETTINGS_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_TEXTCORESETTINGS_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

