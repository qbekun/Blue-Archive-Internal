#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Color&; }
namespace UnityEngine { class Color32; }

#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLESHEETCOLOR_TRYGETCOLOR_OFFSET UNITYSDK_OFFSET(0xA36DC20)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLESHEETCOLOR_HEXTOCOLOR32_OFFSET UNITYSDK_OFFSET(0xA3715B0)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLESHEETCOLOR_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA3715D0)

namespace UnityEngine::UIElements::StyleSheets
{
	inline static constexpr unsigned int StyleSheetColor_TypeDefinitionIndex = 30812;

	class StyleSheetColor : public Il2CppObject
	{
	public:
		Il2CppObject* s_NameToColor; // 0x0

		::System::Boolean TryGetColor(::System::String* str, ::UnityEngine::Color&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::UnityEngine::Color&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLESHEETCOLOR_TRYGETCOLOR_OFFSET))(str, arg, nullptr);
		}

		::UnityEngine::Color32* HexToColor32(::System::UInt32 arg)
		{
			return (return (::UnityEngine::Color32*(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLESHEETCOLOR_HEXTOCOLOR32_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_STYLESHEETCOLOR_.CCTOR_OFFSET))(nullptr);
		}

	};
}

