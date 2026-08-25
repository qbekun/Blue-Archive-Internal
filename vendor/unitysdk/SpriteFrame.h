#pragma once
#include "unitysdk.h"

#define SPRITEFRAME_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA188DC0)

	inline static constexpr unsigned int SpriteFrame_TypeDefinitionIndex = 33763;

	class SpriteFrame : public Il2CppObject
	{
	public:
		::System::Single x; // 0x10
		::System::Single y; // 0x14
		::System::Single w; // 0x18
		::System::Single h; // 0x1C

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPRITEFRAME_TOSTRING_OFFSET))(nullptr);
		}

	};

