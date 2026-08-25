#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Color32&; }
namespace UnityEngine { class Color&; }
namespace UnityEngine { class Color; }

#define UNITYENGINE_COLORUTILITY_DOTRYPARSEHTMLCOLOR_OFFSET UNITYSDK_OFFSET(0xA220010)
#define UNITYENGINE_COLORUTILITY_TRYPARSEHTMLSTRING_OFFSET UNITYSDK_OFFSET(0xA220050)
#define UNITYENGINE_COLORUTILITY_TOHTMLSTRINGRGB_OFFSET UNITYSDK_OFFSET(0xA2200E0)

namespace UnityEngine
{
	inline static constexpr unsigned int ColorUtility_TypeDefinitionIndex = 31092;

	class ColorUtility : public Il2CppObject
	{
	public:
		::System::Boolean DoTryParseHtmlColor(::System::String* str, ::UnityEngine::Color32&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::UnityEngine::Color32&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLORUTILITY_DOTRYPARSEHTMLCOLOR_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean TryParseHtmlString(::System::String* str, ::UnityEngine::Color&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::UnityEngine::Color&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLORUTILITY_TRYPARSEHTMLSTRING_OFFSET))(str, arg, nullptr);
		}

		::System::String* ToHtmlStringRGB(::UnityEngine::Color* arg)
		{
			return (return (::System::String*(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLORUTILITY_TOHTMLSTRINGRGB_OFFSET))(arg, nullptr);
		}

	};
}

