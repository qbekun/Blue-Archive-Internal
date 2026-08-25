#pragma once
#include "../unitysdk.h"

namespace UnityEngine::TextCore { class Glyph; }
namespace TMPro { class TMP_FontAsset; }

#define TMPRO_TMP_CHARACTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA11FFD0)
#define TMPRO_TMP_CHARACTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA11FFF0)
#define TMPRO_TMP_CHARACTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA120060)
#define TMPRO_TMP_CHARACTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1200D0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_Character_TypeDefinitionIndex = 33630;

	class TMP_Character : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_CHARACTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::UInt32 arg, ::UnityEngine::TextCore::Glyph* arg)
		{
			((::System::Void(*)(::System::UInt32, ::UnityEngine::TextCore::Glyph*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_CHARACTER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::UInt32 arg, ::TMPro::TMP_FontAsset* arg, ::UnityEngine::TextCore::Glyph* arg)
		{
			((::System::Void(*)(::System::UInt32, ::TMPro::TMP_FontAsset*, ::UnityEngine::TextCore::Glyph*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_CHARACTER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::UInt32 arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_CHARACTER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

