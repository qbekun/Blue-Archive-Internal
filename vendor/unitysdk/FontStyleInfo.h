#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Font; }

#define FONTSTYLEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xC0F6D0)

	inline static constexpr unsigned int FontStyleInfo_TypeDefinitionIndex = 8828;

	class FontStyleInfo : public Il2CppObject
	{
	public:
		::UnityEngine::Font* FontInfo; // 0x10
		::System::Boolean isBoldStyle; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FONTSTYLEINFO_.CTOR_OFFSET))(nullptr);
		}

	};

