#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Font; }
namespace UnityEngine::TextCore::Text { class FontAsset; }

#define FONTREFERENCEMAP_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2E2AB0)

	inline static constexpr unsigned int FontReferenceMap_TypeDefinitionIndex = 35610;

	class FontReferenceMap : public Il2CppObject
	{
	public:
		::UnityEngine::Font* font; // 0x10
		::UnityEngine::TextCore::Text::FontAsset* fontAsset; // 0x18

		::System::Void .ctor(::UnityEngine::Font* arg, ::UnityEngine::TextCore::Text::FontAsset* arg)
		{
			((::System::Void(*)(::UnityEngine::Font*, ::UnityEngine::TextCore::Text::FontAsset*, ::PVOID))((::PBYTE)hIl2Cpp + FONTREFERENCEMAP_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};

