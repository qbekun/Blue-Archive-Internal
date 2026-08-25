#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::TextCore::Text { class FontAsset; }
namespace UnityEngine::TextCore { class Glyph; }

#define UNITYENGINE_TEXTCORE_TEXT_CHARACTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2CACE0)
#define UNITYENGINE_TEXTCORE_TEXT_CHARACTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2CAD20)
#define UNITYENGINE_TEXTCORE_TEXT_CHARACTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2CADD0)

namespace UnityEngine::TextCore::Text
{
	inline static constexpr unsigned int Character_TypeDefinitionIndex = 35559;

	class Character : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_CHARACTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::UInt32 arg, ::UnityEngine::TextCore::Text::FontAsset* arg, ::UnityEngine::TextCore::Glyph* arg)
		{
			((::System::Void(*)(::System::UInt32, ::UnityEngine::TextCore::Text::FontAsset*, ::UnityEngine::TextCore::Glyph*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_CHARACTER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::UInt32 arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_CHARACTER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

