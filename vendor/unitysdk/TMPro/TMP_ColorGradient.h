#pragma once
#include "../unitysdk.h"

namespace TMPro { class ColorMode; }
namespace UnityEngine { class Color; }

#define TMPRO_TMP_COLORGRADIENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1207D0)
#define TMPRO_TMP_COLORGRADIENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA120870)
#define TMPRO_TMP_COLORGRADIENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1208C0)
#define TMPRO_TMP_COLORGRADIENT_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA120920)

namespace TMPro
{
	inline static constexpr unsigned int TMP_ColorGradient_TypeDefinitionIndex = 33636;

	class TMP_ColorGradient : public Il2CppObject
	{
	public:
		::TMPro::ColorMode* colorMode; // 0x18
		::UnityEngine::Color* topLeft; // 0x1C
		::UnityEngine::Color* topRight; // 0x2C
		::UnityEngine::Color* bottomLeft; // 0x3C
		::UnityEngine::Color* bottomRight; // 0x4C
		::TMPro::ColorMode* k_DefaultColorMode; // 0x0
		::UnityEngine::Color* k_DefaultColor; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_COLORGRADIENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_COLORGRADIENT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Color* arg, ::UnityEngine::Color* arg, ::UnityEngine::Color* arg, ::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::UnityEngine::Color*, ::UnityEngine::Color*, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_COLORGRADIENT_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_COLORGRADIENT_.CCTOR_OFFSET))(nullptr);
		}

	};
}

