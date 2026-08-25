#pragma once
#include "unitysdk.h"

#define SPRITEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x25EAFE0)

	inline static constexpr unsigned int SpriteInfo_TypeDefinitionIndex = 6412;

	class SpriteInfo : public Il2CppObject
	{
	public:
		::System::String* boolValueName; // 0x10
		::System::String* SpriteName; // 0x18
		::System::Boolean isNeedTrue; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPRITEINFO_.CTOR_OFFSET))(nullptr);
		}

	};

