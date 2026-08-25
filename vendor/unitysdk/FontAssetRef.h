#pragma once
#include "unitysdk.h"

namespace UnityEngine::TextCore::Text { class FontAsset; }

#define FONTASSETREF_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2E1B60)

	inline static constexpr unsigned int FontAssetRef_TypeDefinitionIndex = 35608;

	class FontAssetRef : public Il2CppObject
	{
	public:
		::System::Int32 nameHashCode; // 0x10
		::System::Int32 familyNameHashCode; // 0x14
		::System::Int32 styleNameHashCode; // 0x18
		::System::Int64 familyNameAndStyleHashCode; // 0x20
		::UnityEngine::TextCore::Text::FontAsset* fontAsset; // 0x28

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::TextCore::Text::FontAsset* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::TextCore::Text::FontAsset*, ::PVOID))((::PBYTE)hIl2Cpp + FONTASSETREF_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};

