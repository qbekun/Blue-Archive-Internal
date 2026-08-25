#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::TextCore::Text { class ColorGradientMode; }
namespace UnityEngine { class Color; }

#define UNITYENGINE_TEXTCORE_TEXT_TEXTCOLORGRADIENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2D9710)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTCOLORGRADIENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2D97B0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTCOLORGRADIENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2D9800)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTCOLORGRADIENT_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA2D9860)

namespace UnityEngine::TextCore::Text
{
	inline static constexpr unsigned int TextColorGradient_TypeDefinitionIndex = 35584;

	class TextColorGradient : public Il2CppObject
	{
	public:
		::UnityEngine::TextCore::Text::ColorGradientMode* colorMode; // 0x18
		::UnityEngine::Color* topLeft; // 0x1C
		::UnityEngine::Color* topRight; // 0x2C
		::UnityEngine::Color* bottomLeft; // 0x3C
		::UnityEngine::Color* bottomRight; // 0x4C
		::UnityEngine::TextCore::Text::ColorGradientMode* k_DefaultColorMode; // 0x0
		::UnityEngine::Color* k_DefaultColor; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTCOLORGRADIENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTCOLORGRADIENT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Color* arg, ::UnityEngine::Color* arg, ::UnityEngine::Color* arg, ::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::UnityEngine::Color*, ::UnityEngine::Color*, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTCOLORGRADIENT_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTCOLORGRADIENT_.CCTOR_OFFSET))(nullptr);
		}

	};
}

