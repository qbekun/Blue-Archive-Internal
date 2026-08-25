#pragma once
#include "unitysdk.h"

#define DISABLEEMOJI_.CTOR_OFFSET UNITYSDK_OFFSET(0x120AF00)

	inline static constexpr unsigned int DisableEmoji_TypeDefinitionIndex = 972;

	class DisableEmoji : public Il2CppObject
	{
	public:
		Il2CppObject* DisableEmojiList; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DISABLEEMOJI_.CTOR_OFFSET))(nullptr);
		}

	};

